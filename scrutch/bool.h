#ifndef BOOL
#define BOOL
template <typename D,typename E,typename F>
class bools
{
private:
public:
  F bigger(D,E);
  F lower(D,E);
  F equal(D,E);
  F andd(D,E);
  F ord(D,E);
  F notd(D);
};
F bools::bigger(D, E)
{
  if (D > E)
    {
      return true;
    }
   else
    {
      return false;
    }
}
F bools::lower(D, E)
{
    if (D < E)
      {
        return true;
      }
    else
      {
        return false;
      }
}
F bools::equal(D, E)
{
  if (D == E)
    {
      return true;
    }
  else
    {
      return false;
    }
}

#endif // BOOL

