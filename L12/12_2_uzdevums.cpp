#include <iostream>
#include <cstdlib>
#include <ctime>



//classDiagram

    class KafijasAutomats {
        private:
            int udens;
            int pupinas;
        public:
            KafijasAutomats(int u, int p){
                udens = u;
                pupinas = p;
        }
     
       void  papildinat(int u, int p) {
          if ( u > 0 && p > 0 ){
              udens += u;
              pupinas += p;
              std::cout << "Kafijas automats papildinas:\n";
              
              }else{
                  std::cout << "Kluda - nav pietiekami liels cipars!\n";
       }
    }
       
       void pagatavotKafiju() {
           if (udens >= 200 && pupinas >= 20) {
               udens -= 200;
               pupinas -= 20;
               std::cout << "Kafija ir gatava! \n";

           }else{
               std::cout << "Kluda - nepietiek udens vai pupinas\n";
               }
       }
       
       void raditStatusu(){
           std::cout << "Udens(ml) = " << udens << "\nPupinas(g) = " << pupinas << "\n";
               
       }
       
       
};

int main() {
      
    KafijasAutomats office (300, 30);
    office.raditStatusu();
    office.pagatavotKafiju();
    office.pagatavotKafiju();
    office.papildinat(100, 10);
    office.pagatavotKafiju();

    return 0;
    
}
