#include <iostream>
#include <string>

int main()
{
    int temperatura;

    std::cout << "Ievadi ara temperaturu: ";
    std::cin >> temperatura;
    
    std::cout << "Gradi farenhaita: " << (temperatura * 1.8 + 32);

    return 0;
}
