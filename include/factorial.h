template <int n>
struct Factorial
{
  enum
  {
    value = n* Factorial<n-1>::value
  };
};

template <>
struct Factorial<0>
{
  enum
  {
    value = 1
  };
};

template <int n>
int factorial()
{
  return Factorial<n>::value;
}
