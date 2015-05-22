#ifndef FUNCTIONS
#define FUNCTIONS
#include "math.h"
template<typename Operador1, typename Operador2, typename Respuesta>
class functions
{
private:
public:
Respuesta squart(Operador1);
Respuesta loga(Operador1);
Respuesta sen(Operador1);
Respuesta cos(Operador1);
Respuesta tan(Operador1);
Respuesta arcsin(Operador1);
Respuesta arccos(Operador1);
Respuesta arctan(Operador1);
Respuesta abso(Operador1);
Respuesta ln(Operador1);
Respuesta e_expo(Operador1);
Respuesta expo(Operador1);
Respuesta floor(Operador1);
Respuesta ceil(Operador1);
};

Respuesta functions::abso(Operador1)
{
  auto absoluto = round(abs(Operador1));
  return absoluto;
}
Respuesta functions::loga(Operador1)
{
 auto logaritmo = round(log10(Operador1));
 return logaritmo;
}
Respuesta functions::ln(Operador1)
{
  auto logaritmo = round(log(operador1));
  return logaritmo;
}

Respuesta functions::expo(Operador1)
{
  auto exponencial = round(pow(10,Operador1));
  return exponencial;
}
Respuesta functions::e_expo(Operador1)
{
  auto expoe = round(exp(Operador1));
  return expoe;
}

#endif // FUNCTIONS

