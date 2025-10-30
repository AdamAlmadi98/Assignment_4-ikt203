#ifndef TBANKACCOUNT_HPP
#define TBANKACCOUNT_HPP

#include <string>
#include <ctime>
#include "EBankAccountType.h"

class TBankAccount {
private:
    std::string accountNumber;
    EBankAccountType accountType;
    std::string ownerFirstName;
    std::string ownerLastName;
    time_t creationTimestamp;
    double balance;

public:

    TBankAccount(
        const std::string& aAccountNumber,
        EBankAccountType aAccountType,
        const std::string& aOwnerFirstName,
        const std::string& aOwnerLastName,
        time_t aCreationTimestamp,
        double aBalance
    );

    // Getters
    std::string GetAccountNumber() const;
    EBankAccountType GetAccountType() const;
    std::string GetOwnerFirstName() const;
    std::string GetOwnerLastName() const;
    time_t GetCreationTimestamp() const;
    double GetBalance() const;


    void PrintInfo() const;
};

#endif
