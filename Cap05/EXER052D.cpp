#include <iostream>
#include <iomanip>
using namespace std;

int temperatura(float C);

int main(void)
{
  float C;
  cout << setprecision(2);
  cout << setiosflags(ios::right);
  cout << setiosflags(ios::fixed);
  cin >> C;
  temperatura(C);
  return 0;
}

int temperatura(float C)
{
  float F;
  F = (9 * C + 160) / 5;
  cout << setw(5) << F << endl;
  return 0;
}

