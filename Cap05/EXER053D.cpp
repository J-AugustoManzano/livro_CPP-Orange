#include <iostream>
#include <iomanip>
using namespace std;

int temperatura(float C, float *F);

int main(void)
{
  float C, R;
  cout << setprecision(2);
  cout << setiosflags(ios::right);
  cout << setiosflags(ios::fixed);
  cin >> C;
  temperatura(C, &R);
  cout << setw(5) << R << endl;
  return 0;
}

int temperatura(float C, float *F)
{
  *F = (9 * C + 160) / 5;
  return 0;
}

