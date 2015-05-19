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
  auto sumar = A + B;
  return sumar;
}
C operators::difference(A, B)
{
  auto restar = A - B;
  return restar;
}
C operators::cross(A, B)
{
  auto multiplicar = A * B;
  return multiplicar;
}
C operators::divide(A, B)
{
  auto dividir = A / B;
  return dividir;
}
C operators::module(A, B)
{
  auto modulo = (A -(A/B))/ B;
  return modulo;
}

#endif // OPERATORS

