#include <iostream>
#include <string>

int main()
{
    int temperatura;

    std::cout << "Ievadi ara temperaturu: ";
    std::cin >> temperatura;

    if (temperatura > 15 && temperatura < 25)
    {
        std::cout << "\nPatikams laiks";
    }
    else
    {
        std::cout << "\nNav ideals laiks";
    }

    return 0;
}
