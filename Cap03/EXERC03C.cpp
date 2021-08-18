#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
  float N1, N2, N3, N4, MD;
  cout << setprecision(2);
  cout << setiosflags(ios::right);
  cout << setiosflags(ios::fixed);
  cin >> N1;
  cin >> N2;
  cin >> N3;
  cin >> N4;
  MD = (N1 + N2 + N3 + N4) / 4;
  if (MD >= 5)
    cout << "Aprovado, " << MD << endl;
  else
    cout << "Reprovado, " << MD << endl;
  return 0;
}
