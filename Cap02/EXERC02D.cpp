#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
  float C, K;
  cout << setprecision(2);
  cout << setiosflags(ios::right);
  cout << setiosflags(ios::fixed);
  cin >> C;
  K = C + 273.15;
  cout << setw(8) << K << endl;
  return 0;
}
