#pragma once
#include <vector>
#include "TBankAccount.h"
#include "SearchSummary.h"

// Funksjonspeker for sammenligning: returner <0, 0, >0
using FCompareAccount = int (*)(const TBankAccount&, const TBankAccount&);

// Sorter og søk
void SortAccounts(std::vector<TBankAccount>& arr, FCompareAccount cmp);

SearchSummary LinearSearch(const std::vector<TBankAccount>& arr,
                           const TBankAccount& key,
                           FCompareAccount cmp);

SearchSummary BinarySearch(const std::vector<TBankAccount>& arr,
                           const TBankAccount& key,
                           FCompareAccount cmp);

// Sammenlignere som main.cpp sannsynligvis bruker
int CompareByFullName(const TBankAccount& a, const TBankAccount& b);
int CompareByAccountNumber(const TBankAccount& a, const TBankAccount& b);
