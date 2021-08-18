#include <iostream>
#include <iomanip>
using namespace std;

float C, F;

int temperatura(void);

int main(void)
{
  cout << setprecision(2);
  cout << setiosflags(ios::right);
  cout << setiosflags(ios::fixed);
  cin >> C;
  temperatura();
  return 0;
}

int temperatura(void)
{
  F = (9 * C + 160) / 5;
  cout << setw(5) << F << endl;
  return 0;
}

