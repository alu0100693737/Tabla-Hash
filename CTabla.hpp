#include "CCelda.hpp"



class CTabla
{ 
  private:
    CCelda **tabla;
    int nElementos;
    int m; // para el calculo de la posicion
    
  public:
    CTabla(int num, int i); // el que usaremos********
    virtual ~CTabla();
    
    int elemento(int i);//devuelve elemento 
    int longitud();// el const hace que no se puedan modificar ningun campo de la clase en esta funcion
    virtual int exploracion(int,int)=0;//clase abstracta
 //   void eliminar(int);
    //virtual void buscar(int);
    //int position(int, int);
    int hash(int);
    int buscar(int x);
    void insertar(int x);
    int insertarsimulado(int x);
    
     
    
};