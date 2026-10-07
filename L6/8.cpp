#include <iostream>
#include <string>

int main()
{

    std::string pareiza_parole;
    std::string parole;
    
    pareiza_parole = "c++2026";

    std::cout << "Ievadi paroli: ";
    std::cin >> parole;

    if (parole == pareiza_parole)
    {
        std::cout << "\nPiekluve atlauta!";
    }
    else
    {
        std::cout << "\nPiekluve liegta!";
    }

    return 0;
}
