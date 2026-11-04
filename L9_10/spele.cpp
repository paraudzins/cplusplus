#include <iostream>
#include <cstdlib>
#include <ctime>



int input;
int kuga_dzivibas = 100;
int nauda = 100;
int apkalpe = 100;

void asteroidi(){
    
    std::cout << "Ko darisi? 1 - begt, 2 - cinities, " << "\n";       
    std::cin >> input;

    if (input ==1){
    
    srand(time(0));
    int bojajums = rand() % 5 + 1;

    kuga_dzivibas -= bojajums;

    std::cout << "After taking damage: " << kuga_dzivibas << "\n";   

}

else if (input == 2) {
    srand(time(0));
    int bojajums = rand() % 10 + 1;

    kuga_dzivibas -= bojajums;
    nauda += bojajums;

    std::cout << "After taking damage: " << kuga_dzivibas << "\n"; 
    std::cout << "Nauda pec cinas: " << nauda << "\n";

}
}

void tirgotajs(){
    
    std::cout << "Ko darisi? 1 - begt, 2 - cinities, " << "\n";       
    std::cin >> input;   
    
 /* 1-10 - 1 - Bēgt,
   11-20  2 - Ieslēgt,
   21-30  3 - Cīnīties,

*/   

}

void pirati(){
    
    std::cout << "Ko darisi? 1 - begt, 2 - cinities, " << "\n";       
    std::cin >> input;   
    
 /* 1-10 - 1 - Bēgt,
   11-20  2 - Ieslēgt,
   21-30  3 - Cīnīties,

*/   

}


int main() {
      
    srand(time(0));
    int skaitlis = rand() % 10 + 1;

    std::cout << skaitlis << "\n";

/* 1-10 -  - Asteroīdu lauks,
   11-20   - Kosmosa pirāti,
   21-30   - tirgotājs,
   31-40   - Asteroīdu lauks,
   41-50   - Kosmosa pirāti,
   51-60   - tirgotājs,
   61-70   - Asteroīdu lauks,
   71-80   - Kosmosa pirāti,
   81-90   - tirgotājs,
   91-100   - Asteroīdu lauks,
*/
    while (kuga_dzivibas > 0){
        if (skaitlis <= 10) {
        asteroidi();
}    
        else if (skaitlis <= 20 && skaitlis > 10) {  
        pirati();
}   
        else if (skaitlis <= 30 && skaitlis > 20) {
        tirgotajs();
}  
        else if (skaitlis <= 40 && skaitlis > 30) {
        tirgotajs();
}    
        else if (skaitlis <= 50 && skaitlis > 40) {
        pirati();
}   
        else if (skaitlis <= 60 && skaitlis > 50) {
        tirgotajs();
}    
        else if (skaitlis <= 70 && skaitlis > 60) {
        asteroidi();
}   
        else if (skaitlis <= 80 && skaitlis > 70) {
        pirati();
}  
        else if (skaitlis <= 90 && skaitlis > 80) {
        tirgotajs();
}  
        else {
        asteroidi();

}
}

    return 0;
}
