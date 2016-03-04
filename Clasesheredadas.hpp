#include "CTabla.hpp"


class Clineal : public CTabla
{  
public:
   Clineal(int num, int i);
  ~Clineal();
  int exploracion(int x, int i);
 
};
  
class Ccuadratica : public CTabla
{
public:
  Ccuadratica(int num, int i);
  ~Ccuadratica();
  int exploracion(int x, int i);

};

class Cdobledisp : public CTabla
{
public:
  Cdobledisp(int num, int i);
  ~Cdobledisp();
  int exploracion(int x, int i);  
};

class Credisp : public CTabla
{
public:
  Credisp(int num, int i);
  ~Credisp();
  int exploracion(int x, int i); 
};