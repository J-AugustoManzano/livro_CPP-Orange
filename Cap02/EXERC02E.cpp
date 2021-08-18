#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
  float K, C;
  cout << setprecision(2);
  cout << setiosflags(ios::right);
  cout << setiosflags(ios::fixed);
  cin >> K;
  C = K - 273.15;
  cout << setw(8) << C << endl;
  return 0;
}
