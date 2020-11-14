#include <iostream>
using namespace std;

int main() {
  int g;
  double h;
  cout << "Introduceti greutatea dumneavoastra: ";
  cin >> g;
  cout << "Introduceti inaltimea dumneavoastra: ";
  cin >> h;
double imc;
  imc = g/(h*h);
  cout << "Indicele de masa corporala IMC este " << imc << endl;
}