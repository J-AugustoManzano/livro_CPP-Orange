#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
  float F, K;
  cout << setprecision(2);
  cout << setiosflags(ios::right);
  cout << setiosflags(ios::fixed);
  cin >> F;
  K = ((F - 32) * 5) / 9 + 273.15;
  cout << setw(8) << K << endl;
  return 0;
}
