cmake_minimum_required(VERSION 3.27)
project(SimpleSearch)

set(CMAKE_CXX_STANDARD 20)

add_executable(SimpleSearch
        main.cpp
        TBankAccount.cpp
        TBankAccount.h
        EBankAccountType.h
        SearchSummary.h
)
