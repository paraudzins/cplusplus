#include <iostream>
#include <string>

int main()
{
    int temperatura;

    std::cout << "Ievadi ara temperaturu farenhaita: ";
    std::cin >> temperatura;
    
    std::cout << "Gradi celsija: " << ((temperatura - 32) * 5/9);

    return 0;
}
