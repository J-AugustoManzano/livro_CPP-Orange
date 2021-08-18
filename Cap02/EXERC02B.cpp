#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
  float C, F;
  cout << setprecision(2);
  cout << setiosflags(ios::right);
  cout << setiosflags(ios::fixed);
  cin >> C;
  F = (9 * C + 160) / 5;
  cout << setw(8) << F << endl;
  return 0;
}
