#include <iostream>
#include <string>

int main()
{

    int sum = 0;
    int numbers[5] = {4, 7, 2, 9, 1};
    
    for (int i = 0; i < 5; i++) {
     sum = sum + numbers[i];
    
    }
    std::cout << "Kopsumma = " << sum;
    

    return 0;
}
