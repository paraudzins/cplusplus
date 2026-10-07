#include <iostream>
#include <string>

bool turpinat = true;
std::string parole;

int main()
{
    while(turpinat == true) {  
    std::cout << "Ievadi paroli: ";
    std::cin >> parole;
    
    if (parole == "stop") {
        break;
    }
}

    return 0;
}
