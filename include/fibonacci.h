template <int n>
struct Fibonacci
{
  enum
  {
    value = Fibonacci<n-1>::value + Fibonacci<n-2>::value,
  };
};

template <int n>
struct Fibonacci<1>
{
  enum
  {
    value = 1,
  };
};

template <int n>
struct Fibonacci<0>
{
  enum
  {
    value = 0,
  };
};


template <int n>
int fibonacci()
{
  return Fibanacci<n>::value;
}
