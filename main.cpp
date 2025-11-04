#include <iostream>
<<<<<<< HEAD

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    // TIP Press <shortcut actionId="RenameElement"/> when your caret is at the <b>lang</b> variable name to see how CLion can help you rename it.
    auto lang = "C++";
    std::cout << "Hello and welcome to " << lang << "!\n";

    for (int i = 1; i <= 5; i++) {
        // TIP Press <shortcut actionId="Debug"/> to start debugging your code. We have set one <icon src="AllIcons.Debugger.Db_set_breakpoint"/> breakpoint for you, but you can always add more by pressing <shortcut actionId="ToggleLineBreakpoint"/>.
        std::cout << "i = " << i << std::endl;
    }

    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}
=======
#include <vector>
#include "TBankAccount.h"
#include "Search.h"

int main() {
    std::vector<TBankAccount> accounts = {
        {"105", EBankAccountType::Checkings, "Alice",   "Andersen", 0, 1500.0},
        {"101", EBankAccountType::Savings,   "Bob",     "Berg",     0, 2200.0},
        {"109", EBankAccountType::Savings,   "Charlie", "Chan",     0,  800.0},
        {"103", EBankAccountType::Savings,   "Dina",    "Dahl",     0, 1200.0},
        {"107", EBankAccountType::Checkings, "Evan",    "Eng",      0, 6000.0}
    };

    auto k1 = MakeKeyByFullName("Dina", "Dahl");
    auto l = LinearSearch(accounts, k1, &CompareByFullName);
    std::cout << "[Linear name] found=" << l.found() << " idx=" << l.foundIndex
              << " cmp=" << l.comparisons << " steps=" << l.steps
              << " ms=" << l.timeSpentMs << "\n";

    SortAccounts(accounts, &CompareByAccountNumber);
    auto k2 = MakeKeyByAccountNumber("107");
    auto b = BinarySearch(accounts, k2, &CompareByAccountNumber);
    std::cout << "[Binary acc]  found=" << b.found() << " idx=" << b.foundIndex
              << " cmp=" << b.comparisons << " steps=" << b.steps
              << " ms=" << b.timeSpentMs << "\n";

    return 0;
}
>>>>>>> 23d6da3 (Initial commit of SimpleSearch project)
