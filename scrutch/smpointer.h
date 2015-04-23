#ifndef SMPOINTER
#define SMPOINTER
template<typename T>
namespace sm
class SMpointer
{
  public:
  T PData;
  private:
  SMpointer(T *PValue): PData(PValue)
  {
  }
  ~SMpointer()
  {
    delete PData;
  }
  T& operator* ()
  {
    return *PData;
  }
  T& operator-> ()
  {
    return PData;
  }
};

#endif // SMPOINTER

