#include "CTabla.hpp"
#include <stdlib.h>
CTabla::CTabla(int tam, int i)//tam tabla i bloque
{   
    tabla=NULL;
    nElementos=tam;
    tabla = new CCelda* [tam];
    for (int k=0; k< tam; k++)
      tabla[k] = new CCelda(i);
}

CTabla::~CTabla()
{	
    if (tabla!= NULL)
    {  delete [] tabla;
      tabla = NULL;
    }
    nElementos=0;
}

/*int CTabla::elemento(int i)
{
  return tabla[i]->get_dato();
}*/

int CTabla::longitud() 
{
  return nElementos;
}

int CTabla::buscar(int x)
{   
  int contmax=0;
  int cont=0;
  int aux =0;
  //cout << x << "Hola\n"; 
  int contador =0;
  int indice;
  
  do
{ 	indice= exploracion(x, contmax);  
   cont=0; 
	while(((aux!=-1)&&(aux!=x)) && (cont < tabla[indice]->get_size())) 
  {	aux=tabla[indice]->get_dato(cont);
	cont++;
  }
  contmax++;
  contador+=cont;
  
  
}while (((aux!=-1) && (aux!=x))&& (contmax<longitud()));  
  return contador;
}


  
  
//   while (contmax<tabla[indice]->get_size() && aux<0){
//     indice= exploracion(x, contmax);
//     contador++;
//     contmax++;
//   }  
//   do
//   { contador++;
//   cout << contador;
//     indice= exploracion(x, contmax);  
//     aux=tabla[indice]->get_dato(x);
//     if (aux==x)
//       return contador;//0;
//     else if (aux==-1)
//       return contador /*-1*/;
//     contmax++;
//   }while(aux!=-1 || aux!=x);
//   cont++;
// }

  
/*  
  contador++;
  
  while((aux!=x) &&(aux!=-1) && (cont < tabla[indice]->get_size())) 
  {	aux=tabla[indice]->get_dato(cont);
	cont++;
	cout << contador << endl;
	
  }
  contmax++;
  
}while((aux!=x) && (aux!=-1) && contmax<longitud());
  cout<< contador;
  return ((contmax+1)*(tabla[indice]->get_size())+cont);
}/*buscar*/  
    
    
void CTabla::insertar(CLAVE x)
{
  int intento=0;//contmax
  int cont=0;
  int indice = 0;
  int aux =0;
  int contador=0;
do
 { 
   
   //tienes un ERROR RARO tendrias que tener una tercera opcion que te diga cuando parar y usar las funciones set y get de manera adecuada
   
   indice= exploracion(x, intento);  //iindice tiene lo retornado por explorasion POS
  cont=0;
  while((aux!=-1) && (cont < tabla[indice]->get_size())){
      aux=tabla[indice]->get_dato(cont);
	if (aux==-1)
	  tabla[indice]->set_dato(cont, x);
	  
	cont++;
  }
  contador+=cont;
  contmax++;
  
  
}while ((aux!=-1) && (contmax<longitud()));  
  
}/*insertar*/  
    
int CTabla::insertarsimulado(int x)
{
  int contmax=0;
  int cont=0;
  int indice = 0;
  int aux =0;
  int contador =0;
do
{ indice= exploracion(x, contmax);  
  cont=0; 
  while((aux!=-1) && (cont < tabla[indice]->get_size())) 
  {	aux=tabla[indice]->get_dato(cont);
	  cont++;
  }
  contador+=cont;
  contmax++;
  
  
}while((aux!=-1) && contmax<longitud());  
  return contador;
}/*insertarsimulado*/      
    
   
int CTabla::hash(int valor)//modulo
{
  srand(valor);
  return rand()%longitud();
}
