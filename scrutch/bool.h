#ifndef BOOL
#define BOOL
#include "template_names.h"
template <typename Operando1,typename Operando2,typename Respuesta>
class bools
{
private:
public:
  Respuesta bigger(Operando1,Operando2);
  Respuesta lower(Operando1,Operando2);
  Respuesta equal(Operando1,Operando2);
  Respuesta andd(Operando1,Operando2);
  Respuesta ord(Operando1,Operando2);
  Respuesta notd(Operando1);
};
Respuesta bools::bigger(Operando1, Operando2)
{
  if (Operando1 > Operando2)
    {
      return true;
    }
   else
    {
      return false;
    }
}
Respuesta bools::lower(Operando1, Operando2)
{
    if (Operando1 < Operando2)
      {
        return true;
      }
    else
      {
        return false;
      }
}
Respuesta bools::equal(Operando1, Operando2)
{
  if (Operando1 == Operando2)
    {
      return true;
    }
  else
    {
      return false;
    }
}

#endif // BOOL

