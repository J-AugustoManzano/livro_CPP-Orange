#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
  float V, R, A;
  cout << setprecision(2);
  cout << setiosflags(ios::right);
  cout << setiosflags(ios::fixed);
  cin >> R;
  cin >> A;
  V = 3.141592653589793 * R * R * A;
  cout << setw(8) << V << endl;
  return 0;
}
