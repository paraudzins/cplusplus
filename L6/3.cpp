#include <iostream>
#include <string>

int main()
{
    int diena;

    std::cout << "Ievadiet skaitli no 1 lidz 7: ";
    std::cin >> diena;
    
    switch (diena) {
        case 1:
            std::cout << "Pirmdiena";
            break;
        case 2:
            std::cout << "Otrdiena";
            break;
        case 3:
            std::cout << "Tresdiena";
            break;
        case 4:
            std::cout << "Ceturtdiena";
            break;
        case 5:
            std::cout << "Piektdiena";
            break;
        case 6:
            std::cout << "Sestdiena";
            break;
        case 7:
            std::cout << "Svetdiena";
            break;
            
        default:
            std::cout << "Nezinama diena";
}
    return 0;
}
