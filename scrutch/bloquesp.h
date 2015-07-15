#ifndef BLOQUESP
#define BLOQUESP
#include <dtoscrutch.h>
//template<typename T>
/*struct motion
{
  int idbloque;
  vector<DTOSCRUTCH> bloqueInstruccion;
  auto forward(T parametro);
  auto turn_forward(T parametro);
  auto turn_back(T parametro);
  auto set_X(T parametro);
  auto change_X(T parametro);
  auto set_Y(T parametro);
  auto change_Y(parametro);
};

struct control
{
  int idbloque;
  vector<DTOSCRUTCH> bloqueInstrucciones;
  auto repeat(T parametro);
  auto for_ever(T parametro);
};
*/
class motion
{
public:
  //motion(int id);
  auto forward(int parameter);
  auto turn_forward(int parameter);
  auto turn_back(int parameter);
  auto set_X(int parameter);
  auto change_X(int parameter);
  auto set_Y(int parameter);
  auto change_Y(int parameter);
};
/*
motion::motion(int id)
{
  if(id == idbloque)
    {
      return true;
    }
  else
    {
      return false;
    }
}
*/
auto motion::forward(int parameter)
{
 int pasos;
 pasos = 0;
 pasos = pasos + parameter;
 return pasos;
}

#endif // BLOQUESP

