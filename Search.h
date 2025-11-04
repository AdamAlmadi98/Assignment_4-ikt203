#ifndef SEARCH_H
#define SEARCH_H

#include <vector>
#include <string>
#include "SearchSummary.h"
#include "TBankAccount.h" // bytt til "TBankAccount.h" hvis det er filnavnet ditt

using FCompareAccount = int(*)(const TBankAccount&, const TBankAccount&);

int CompareByAccountNumber(const TBankAccount& a, const TBankAccount& b);
int CompareByFullName(const TBankAccount& a, const TBankAccount& b);
int CompareByBalance(const TBankAccount& a, const TBankAccount& b);

TBankAccount MakeKeyByAccountNumber(const std::string& acc);
TBankAccount MakeKeyByFullName(const std::string& first, const std::string& last);
TBankAccount MakeKeyByBalance(double balance);

void SortAccounts(std::vector<TBankAccount>& arr, FCompareAccount cmp);

SearchSummary LinearSearch(const std::vector<TBankAccount>& arr,
                           const TBankAccount& key,
                           FCompareAccount cmp);

SearchSummary BinarySearch(const std::vector<TBankAccount>& arr,
                           const TBankAccount& key,
                           FCompareAccount cmp);

#endif
