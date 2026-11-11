#include <iostream>
#include <cstdlib>
#include <ctime>



//classDiagram

    class Gramata {
        public:
        std::string nosaukums;
        std::string autors;
        int lappuses;
        Gramata(std::string n, std::string a, int l){
            nosaukums = n;
            autors = a;
            lappuses = l;
        }
        
       void  raditInfo() {
           std::cout << "Gramata: " << nosaukums << "\n" << "Autors: " << autors << "\n" << "Lappuses: " << lappuses;
       }
       
       
       bool irBieza(){
           if (lappuses > 300) {
               
           return true;
           
           }else{
               
           return false; 
               
           }       
       }    
};

int main() {
      
      Gramata g1 ("Latvijas vesture", "Uldis Lipe", 20);
      Gramata g2 ("Namejs", "Arturs Jans", 300);
      Gramata g3 ("Tautas balss", "Nezinams", 500);
      
      std::cout << std::boolalpha;
      g1.raditInfo();
      std::cout << "\n" << "Ir bieza: "<< g1.irBieza();
      std::cout << "\n";
      std::cout << "\n";
      
      g2.raditInfo();
      std::cout << "\n" << "Ir bieza: "<< g2.irBieza();
      std::cout << "\n";
      std::cout << "\n";
      
      g3.raditInfo();
      std::cout << "\n" << "Ir bieza: "<< g3.irBieza();
      std::cout << "\n";
      std::cout << "\n";
      


    return 0;
    
}
