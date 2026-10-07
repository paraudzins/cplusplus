#include <iostream>
#include <string>

/*
1. Uzdevums: "Iepazīšanās" (Komentāri, mainīgie, ievade/izvade) Deivids

*/

int main()
{
    std::string vards;
    int vecums;

    std::cout << "Ievadi vardu: ";
    std::cin >> vards;

    std::cout << "Ievadi vecumu: ";
    std::cin >> vecums;

        std::cout << "\nTevi sauc " << vards << ", un tev ir " << vecums << " gadi.\n";

    return 0;
}
