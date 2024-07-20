// Recursividad - Factorial de un numero

#include <iostream>
#include <stdlib.h>
using namespace std;

int factorial(int);

int main()
{
  cout << "Factorial: " << factorial(5) << endl;

  return 0;
}

int factorial(int n)
{
  if (n == 0)
  {
    n = 1;
  }
  else
  {
    n *= factorial(n - 1);
  }
  return n;
};
