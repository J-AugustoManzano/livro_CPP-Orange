#include <iostream>
#include <iomanip>
using namespace std;

int temperatura(float F, float *C);

int main(void)
{
  float F, R;
  cout << setprecision(2);
  cout << setiosflags(ios::right);
  cout << setiosflags(ios::fixed);
  cin >> F;
  temperatura(F, &R);
  cout << setw(5) << R << endl;
  return 0;
}

int temperatura(float F, float *C)
{
  *C = (F - 32) * 5 / 9;
  return 0;
}

