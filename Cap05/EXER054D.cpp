#include <iostream>
#include <iomanip>
using namespace std;

float temperatura(float C);

int main(void)
{
  float C;
  cout << setprecision(2);
  cout << setiosflags(ios::right);
  cout << setiosflags(ios::fixed);
  cin >> C;
  cout << setw(5) << temperatura(C) << endl;
  return 0;
}

float temperatura(float C)
{
  float F;
  F = (9 * C + 160) / 5;
  return F;
}

