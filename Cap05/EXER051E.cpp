#include <iostream>
#include <iomanip>
using namespace std;

float F, C;

int temperatura(void);

int main(void)
{
  cout << setprecision(2);
  cout << setiosflags(ios::right);
  cout << setiosflags(ios::fixed);
  cin >> F;
  temperatura();
  return 0;
}

int temperatura(void)
{
  C = (F - 32) * 5 / 9;
  cout << setw(5) << C << endl;
  return 0;
}

