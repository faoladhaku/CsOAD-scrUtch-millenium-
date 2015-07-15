#ifndef DTOSCRUTCH_H
#define DTOSCRUTCH_H
#include <List>
#include <vector>
using namespace std;
template <typename T>
class blocks
{
private:
  int bloque;
  int id;
  int parameters;
public:
  auto setbloque(T bloqueG);
  auto setid(T idG);
  auto setparameters(T parameters);
  auto getbloque();
  auto getid();
  auto getparameters();
  //auto getreaction();
};

auto blocks::setbloque(T bloqueG)
{
  this->bloque = bloqueG;
}
auto blocks::setid(T idG)
{
  this->id = idG;
}
auto blocks::setparameters(T parameterG)
{
  this->parameters = parameterG;
}

auto blocks::getbloque()
{
  return this->bloque;
}
auto blocks::getid()
{
  return this->id;
}

auto blocks::getparameters()
{
  return this->parameters;
}

/*auto blocks::getreaction()
{
  blocks *bloque = new blocks();
  list<int> desempaqueta;
  desempaqueta.push_front(*bloque)

}*/
class DTOSCRUTCH : public blocks
{
private:
  blocks *bloque = new blocks();
  vector<int> empaqueta;
public:
 DTOSCRUTCH();
};
DTOSCRUTCH::DTOSCRUTCH()
{
  vector<int> empaqueta;
  empaqueta.push_back(bloque->getbloque);
  empaqueta.push_back(bloque->getid);
  empaqueta.push_back(bloque->getparameters);
}

#endif // DTOSCRUTCH_H



