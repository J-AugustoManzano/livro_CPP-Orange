#include <iostream>
using namespace std;

int main(void)
{
  int N;
  cin >> N;
  if (N >= 1 and N <= 9)
    cout << "O valor esta na faixa permitida.";
  else
    cout << "O valor esta fora da faixa permitida.";
  return 0;
}
