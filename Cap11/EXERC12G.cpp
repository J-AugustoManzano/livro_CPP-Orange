#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main(void)
{
  int R, I, S = 0, X[10];

  ifstream ARQBIN;
  ARQBIN.open("DADOS11F.DBC", ios_base::binary);
  ARQBIN.read(reinterpret_cast<char*>(&X), sizeof(X));
  for (I = 0; I < 10; I++)
    {
      R = X[I] % 2;
      if (R == 0)
        S += X[I];
    }
  cout << "Soma = " << S << endl;
  ARQBIN.close();

  return 0;
}
