//
// Created by adamf on 29.10.2025.
#include "TBankAccount.h"
#include <iostream>
#include <iomanip>
#include <ctime>

TBankAccount::TBankAccount(
    const std::string& accountNumber,
    EBankAccountType accountType,
    const std::string& ownerFirstName,
    const std::string& ownerLastName,
    time_t creationTimestamp,
    double balance
)
    : accountNumber(accountNumber),
      accountType(accountType),
      ownerFirstName(ownerFirstName),
      ownerLastName(ownerLastName),
      creationTimestamp(creationTimestamp),
      balance(balance)
{

}

//Getters
std::string TBankAccount::GetAccountNumber() const { return accountNumber; }
EBankAccountType TBankAccount::GetAccountType() const { return accountType; }
std::string TBankAccount::GetOwnerFirstName() const { return ownerFirstName; }
std::string TBankAccount::GetOwnerLastName() const { return ownerLastName; }
time_t TBankAccount::GetCreationTimestamp() const { return creationTimestamp; }
double TBankAccount::GetBalance() const { return balance; }

void TBankAccount::PrintInfo() const {
    std::tm* localTime = std::localtime(&creationTimestamp);

    std::cout << std::left
              << std::setw(15) << "Account Number:" << accountNumber << "\n"
              << std::setw(15) << "Owner:" << ownerFirstName << " " << ownerLastName << "\n"
              << std::setw(15) << "Type:" << static_cast<int>(accountType) << "\n"
              << std::setw(15) << "Created:" << std::put_time(localTime, "%Y-%m-%d %H:%M:%S") << "\n"
              << std::setw(15) << "Balance:" << std::fixed << std::setprecision(2) << balance << " NOK"
              << "\n---------------------------------------------\n";
}
