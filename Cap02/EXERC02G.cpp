#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
  float K, F;
  cout << setprecision(2);
  cout << setiosflags(ios::right);
  cout << setiosflags(ios::fixed);
  cin >> K;
  F = (9 * (K - 273.15) + 160) / 5;
  cout << setw(8) << F << endl;
  return 0;
}
