<<<<<<< HEAD
cmake_minimum_required(VERSION 3.27)
project(SimpleSearch)

set(CMAKE_CXX_STANDARD 20)

add_executable(SimpleSearch
        main.cpp
        TBankAccount.cpp
        TBankAccount.h
        EBankAccountType.h
        SearchSummary.h
=======
cmake_minimum_required(VERSION 3.20)
project(SimpleSearch VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(SimpleSearch
        main.cpp
        EBankAccountType.h
        TBankAccount.h
        TBankAccount.cpp
        SearchSummary.h
        Search.h
        Search.cpp
>>>>>>> 23d6da3 (Initial commit of SimpleSearch project)
)
