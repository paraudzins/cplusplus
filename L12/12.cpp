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
       
       
       
       bool irBieza();
       
    };


int main() {
      
      Gramata g1 ("Latvijas vesture", "Uldis Lipe", 20);
      
      g1.raditInfo();


    return 0;
    
}
