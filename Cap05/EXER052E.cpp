#include <iostream>
#include <iomanip>
using namespace std;

int temperatura(float F);

int main(void)
{
  float F;
  cout << setprecision(2);
  cout << setiosflags(ios::right);
  cout << setiosflags(ios::fixed);
  cin >> F;
  temperatura(F);
  return 0;
}

int temperatura(float F)
{
  float C;
  C = (F - 32) * 5 / 9;
  cout << setw(5) << C << endl;
  return 0;
}

