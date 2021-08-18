#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
  float F, C;
  cout << setprecision(2);
  cout << setiosflags(ios::right);
  cout << setiosflags(ios::fixed);
  cin >> F;
  C = ((F - 32) * 5) / 9;
  cout << setw(8) << C << endl;
  return 0;
}
