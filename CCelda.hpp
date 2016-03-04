class CCelda
{
  private:
    int *dato;
    int size;//maximo del bloque
  //  bool state; //¿lleno?
  public:
    CCelda(int);
    ~CCelda();
    //friend class CTabla; // asi me evito los gets y sets
    bool buscarCelda(int x);
    int get_dato(int);
    void set_dato(int, int);
    int get_size();
};