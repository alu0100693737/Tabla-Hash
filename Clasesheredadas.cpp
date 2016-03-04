#include "Clasesheredadas.hpp"

Clineal::Clineal(int num, int i): CTabla(num,i){} 


Clineal::~Clineal(){};

int Clineal::exploracion(CLAVE x, int intento){//int i
  
    int pos=(hash(x)+i)%longitud();
    return pos;
}  

Ccuadratica::Ccuadratica(int num, int i): CTabla(num,i){} 

   
Ccuadratica::~Ccuadratica(){};
  
int Ccuadratica::exploracion(int x, int i){
  
  int pos=(hash(x)+i*i)%longitud();
    return pos;
}    

Cdobledisp::Cdobledisp(int num, int i): CTabla(num,i){} 


Cdobledisp::~Cdobledisp(){};
  
int Cdobledisp::exploracion(int x, int i){
    
    int pos=(hash(x)+hash(x)*i)%longitud();
    return pos;
}    

Credisp::Credisp(int num, int i): CTabla(num,i){} 

Credisp::~Credisp(){};
  
int Credisp::exploracion(int x, int i){
    int pos=(hash(x)+hash(x*i))%longitud();
    return pos;
}
 
