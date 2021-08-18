#include <iostream>
#include <iomanip>
using namespace std;

float temperatura(float F);

int main(void)
{
  float F;
  cout << setprecision(2);
  cout << setiosflags(ios::right);
  cout << setiosflags(ios::fixed);
  cin >> F;
  cout << setw(5) << temperatura(F) << endl;
  return 0;
}

float temperatura(float F)
{
  float C;
  C = (F - 32) * 5 / 9;
  return C;
}

