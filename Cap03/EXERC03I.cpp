#include <iostream>
using namespace std;

int main(void)
{
  int N, R;
  cin >> N;
  R = N % 2; // ou R = N - 2 * (N / 2);
  if (R == 0)
    cout << "Par" << endl;
  else
    cout << "Impar" << endl;
  return 0;
}
