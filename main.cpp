
#include "Clasesheredadas.hpp"
using namespace std;


#include <iostream>
#include <stdlib.h>
#include <math.h>


int main()
{
  
  CTabla *A;
  int i, j, z;
  double k;
   int numelem;
  cout << "Ingrese cual será el tamaño de la tabla\n";
  cin >> i;
  cout << "Introduzca a continuacion el tamaño del bloque\n";
  cin >> j;
  
  cout << "Introduzca que tipo de algoritmo desea aplicar\n\n";
  cout << "1.Lineal\n";
  cout << "2.Cuadratica\n";
  cout << "3.Doble dispersion\n";
  cout << "4.Redispersion\n";
  cout << endl;
  cout << " Opcion: ";
  int op;
  do 
    cin >> op;
  while (op<1||op>4);
 
  cout << "Introduzca ahora la funcion de carga para conocer el numero de elementos inicial en la tabla hash \n";
  cin>> k;
numelem = ceil(k*(i*j));
//cout<<numelem;
  
  if (op ==1)
    A=new Clineal(i,j);
  if (op ==2)
    A=new Ccuadratica(i,j);
  if (op ==3)
    A=new Cdobledisp(i,j);
  if (op ==4)
    A=new Credisp(i,j);
  
  //CREACION DEL ARRAY
 
  int valor[numelem];
  srand(time(NULL));
  //valor = new int [numelem];
  for (int i=0; i<numelem; i++)
  {  valor[i]= 30000001 + (rand()%50000000);
    }
  //insertamos los valores en la tabla
  for (int i=0; i<numelem; i++)
  {
    A->insertar(valor[i]);
   
  }
//  //menu principal
//  cout << "Elija cuantas pruebas desea hacer\n";
//  cin >> z;
// // cout << "Se muestra a continuación el numero de iteraciones que se hacen\n";
  
//  int NPruebasbuscar[z];
//  int NPruebasInsertar[z];
  
//  for(int i=0; i< z; i++)
//  {   NPruebasbuscar[i] = A->buscar(valor[rand()%numelem]);
//    NPruebasInsertar[i]= A->insertarsimulado(30000001 + (rand()%50000000));
//  }
//  //Pruebas buscar y media
//  int minbuscar = NPruebasbuscar[0];
//  int maxbuscar = NPruebasbuscar[0];
//  double mediabuscar=0;
//  for (int i=0; i<z; i++)
//  {  if (minbuscar>NPruebasbuscar[i])
//      minbuscar=NPruebasbuscar[i];
//    if(maxbuscar<NPruebasbuscar[i])
//      maxbuscar=NPruebasbuscar[i];
//    mediabuscar+=NPruebasbuscar[i];
//  }
  
//  mediabuscar=mediabuscar/z;
  
//  //Pruebas insertar y media
//  int mininsertar = NPruebasInsertar[0];
//  int maxinsertar = NPruebasInsertar[0];
//  double mediainsertar=0;
//  for (int i=0; i<z; i++)
//  {  if (mininsertar>NPruebasInsertar[i])
//      mininsertar=NPruebasInsertar[i];
//     if(maxinsertar<NPruebasInsertar[i])
//      maxinsertar=NPruebasInsertar[i];
//     mediainsertar+=NPruebasInsertar[i];
//  }
//  mediainsertar=mediainsertar/z;
  
//  cout << "Ha continuacion se muestran las estadisticas \n";
  
//  cout << "BUSCAR \n";
//  cout << "MAXIMO: " << maxbuscar << " MINIMO: " << minbuscar << " MEDIA: " << mediabuscar<< endl;
  
//  cout << "INSERTAR \n";
//  cout << "MAXIMO: " << maxinsertar << " MINIMO: " << mininsertar << " MEDIA: " << mediainsertar<< endl;
  
////   for (int i=0; i<z; i++)
////   {
////     cout << "Caso " << i << ": \n";
////     cout << "Busqueda: " << A->buscar(valor[rand()%numelem]) << endl;
////     cout << "Insercion: " << A->insertarsimulado(30000001 + (rand()%50000000)) << endl;
////   }
  
//  cout << "------------------------------------------\n";
//      cout << "Gracias por haber utilizado este programa \n";
//      cout << "******************************************\n";

}
      
    
