#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
  float P, D, R;
  cout << setprecision(2);
  cout << setiosflags(ios::right);
  cout << setiosflags(ios::fixed);
  cin >> D;
  cin >> R;
  P = D * 4 * 3.141592653589793 * R * R * R / 3;
  cout << setw(8) << P << endl;
  return 0;
}
