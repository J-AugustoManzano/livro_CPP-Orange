#include <iostream>
using namespace std;

int main(void)
{
  int N, NP;
  cin >> N;
  if (N < 0)
    NP = N * -1;
  else
    NP = N;
  cout << NP << endl;
  return 0;
}
