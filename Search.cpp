#include "Search.h"
#include <algorithm>
#include <cctype>
#include <chrono>

static std::string Lower(std::string s) {
    for (auto& c : s) c = static_cast<char>(std::tolower(static_cast<unsigned char>(c)));
    return s;
}

int CompareByAccountNumber(const TBankAccount& a, const TBankAccount& b) {
    const auto A = a.GetAccountNumber();
    const auto B = b.GetAccountNumber();
    if (A < B) return -1;
    if (A > B) return  1;
    return 0;
}

int CompareByFullName(const TBankAccount& a, const TBankAccount& b) {
    const auto A = Lower(a.GetOwnerFirstName() + " " + a.GetOwnerLastName());
    const auto B = Lower(b.GetOwnerFirstName() + " " + b.GetOwnerLastName());
    if (A < B) return -1;
    if (A > B) return  1;
    return 0;
}

int CompareByBalance(const TBankAccount& a, const TBankAccount& b) {
    if (a.GetBalance() < b.GetBalance()) return -1;
    if (a.GetBalance() > b.GetBalance()) return  1;
    return 0;
}

TBankAccount MakeKeyByAccountNumber(const std::string& acc) {
    return TBankAccount(acc, EBankAccountType::Checkings, "", "", 0, 0.0);
}

TBankAccount MakeKeyByFullName(const std::string& first, const std::string& last) {
    return TBankAccount("", EBankAccountType::Checkings, first, last, 0, 0.0);
}

TBankAccount MakeKeyByBalance(double balance) {
    return TBankAccount("", EBankAccountType::Checkings, "", "", 0, balance);
}


void SortAccounts(std::vector<TBankAccount>& arr, FCompareAccount cmp) {
    std::sort(arr.begin(), arr.end(),
              [cmp](const TBankAccount& a, const TBankAccount& b){ return cmp(a, b) < 0; });
}

SearchSummary LinearSearch(const std::vector<TBankAccount>& arr,
                           const TBankAccount& key,
                           FCompareAccount cmp)
{
    SearchSummary s{};
    const auto t0 = std::chrono::steady_clock::now();

    for (int i = 0; i < static_cast<int>(arr.size()); ++i) {
        ++s.comparisons;
        if (cmp(arr[i], key) == 0) {
            s.foundIndex = i;
            break;
        }
        ++s.steps;
    }

    const auto t1 = std::chrono::steady_clock::now();
    s.timeSpentMs = std::chrono::duration<double, std::milli>(t1 - t0).count();
    return s;
}

SearchSummary BinarySearch(const std::vector<TBankAccount>& arr,
                           const TBankAccount& key,
                           FCompareAccount cmp)
{
    SearchSummary s{};
    const auto t0 = std::chrono::steady_clock::now();

    int lo = 0, hi = static_cast<int>(arr.size()) - 1;
    while (lo <= hi) {
        const int mid = lo + (hi - lo) / 2;
        ++s.comparisons;
        const int c = cmp(arr[mid], key);
        if (c == 0) { s.foundIndex = mid; break; }
        if (c < 0) lo = mid + 1; else hi = mid - 1;
        ++s.steps;
    }

    const auto t1 = std::chrono::steady_clock::now();
    s.timeSpentMs = std::chrono::duration<double, std::milli>(t1 - t0).count();
    return s;
}
