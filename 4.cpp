#include <iostream>
#include <string>

int main()
{

    std::cout << "Laika atskaite ir sakusies!\n";

    // Taimeris no 1 līdz 10
    for (int i = 1; i < 11; i++)
    {
        std::cout << i << "\t";
    }

    std::cout << "\n  \n";

    // Taimeris no 10 līdz 1
    for (int i = 10; i > 0; i--)
    {
        std::cout << i << "\t";
    }

    std::cout << "\nTaimeris beidzies!\n";

    return 0;
}
