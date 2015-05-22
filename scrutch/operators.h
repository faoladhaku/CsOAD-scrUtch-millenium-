#ifndef OPERATORS
#define OPERATORS
#include <math.h>
template <typename Operando1,typename Operando2,typename Respuesta>
class operators
{
public:

private:
 Respuesta plus(Operando1,Operando2);
 Respuesta difference(Operando1,Operando2);
 Respuesta cross(Operando1,Operando2);
 Respuesta divide(Operando1,Operando2);
 Respuesta module(Operando1,Operando2);
 Respuesta rounds(Operando1);
};

Respuesta operators::plus(Operando1, Operando2)
{
  auto sumar = round(Operando1 + Operando2);
  return sumar;
}
Respuesta operators::difference(Operando1, Operando2)
{
  auto restar = round(Operando1 - Operando2);
  return restar;
}
Respuesta operators::cross(Operando1, Operando2)
{
  auto multiplicar = round(Operando1 * Operando2);
  return multiplicar;
}
Respuesta operators::divide(Operando1, Operando2)
{
  auto dividir = round(Operando1 / Operando2);
  return dividir;
}
Respuesta operators::module(Operando1, Operando2)
{
  auto modulo = round((Operando1 -(Operando1/Operando2))/ Operando2);
  return modulo;
}
Respuesta operators::rounds(Operando1)
{

  auto redondear = round(Operando1);
  return redondear;
}

#endif // OPERATORS

