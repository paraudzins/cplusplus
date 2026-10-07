#include <iostream>
#include <string>

int main()
{
    int temperatura;
    std::string izvele;

    std::cout << "Ievadi ara temperaturu: ";
    std::cin >> temperatura;
    std::cout << "Kada mervieniba velaties atspogulot temperaturu?: ";
    std::cin >> izvele;
    
        if (izvele == "celsijos")
    {
        std::cout << "Gradi celsija: " << ((temperatura - 32) * 5/9);
    }
    else
    {
        std::cout << "Gradi farenhaita: " << (temperatura * 1.8 + 32);
    }

    return 0;
}
