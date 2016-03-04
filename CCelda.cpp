#include "CCelda.hpp"

#include <stdlib.h>
CCelda::CCelda(int i)
{
  dato=NULL;
//  state=false; /*sera true cuando haya elemento*/
  dato= new int [i];
  size = i;
  for (int k=0; k< i; k++)
    dato[k] = -1;
}

CCelda::~CCelda()
{
  if (dato!=NULL)
  {	delete [] dato;
	dato= NULL;
  }
  //state=false;
}

bool CCelda::buscarCelda(int k)
{
  for (int i=0; i < size; i++)
    if (dato[i] == k)
      return true;
  return false;
}

int CCelda::get_dato(int k)
{
  return dato[k];
}

int CCelda::get_size()
{
  return size;
}

void CCelda::set_dato(int k, int l)
{
  dato[k]=l;
} 