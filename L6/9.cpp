#include <iostream>

int main()
{
    double skaitlis;
    double skaitlis2;
    char zime;
    
    std::cout << "Ievadi skaitli: ";
    std::cin >> skaitlis;

    std::cout << "Ievadi otru skaitli: ";
    std::cin >> skaitlis2;
    
    std::cout << "Ievadi zimi (+, -, *, /): ";
    std::cin >> zime;

    std::cout << "\nRezultats: ";

    switch (zime) {
        case '+':
            std::cout << skaitlis + skaitlis2;
            break;
        case '-':
            std::cout << skaitlis - skaitlis2;
            break;
        case '*':
            std::cout << skaitlis * skaitlis2;
            break;
        case '/':
            if (skaitlis2 != 0) {
                std::cout << skaitlis / skaitlis2;
            } else {
                std::cout << "Kluda";
            }
            break;
        default:
            std::cout << "Nedederiga darbibas zime";
            break;
    }

    std::cout << std::endl;
    return 0;     
}
