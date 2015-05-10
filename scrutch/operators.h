#ifndef OPERATORS
#define OPERATORS
template <typename A,typename B,typename C>
class operators
{
public:

private:
 C plus(A,B);
 C difference(A,B);
 C cross(A,B);
 C divide(A,B);
 C module(A,B);
};

C operators::plus(A, B)
{
  C sumar;
  sumar = A + B;
  return sumar;
}
C operators::difference(A, B)
{
  C restar;
  restar = A - B;
  return restar;
}
C operators::cross(A, B)
{
  C multiplicar;
  multiplicar = A * B;
  return multiplicar;
}
C operators::divide(A, B)
{
  C dividir;
  dividir = A / B;
  return divide;
}
C operators::module(A, B)
{
  C modulo;
  modulo = (A -(A/B))/ B;
  return modulo;
}

#endif // OPERATORS

