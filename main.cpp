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
  if(imc >= 18.5 && imc < 25){
    cout << "persoana cu greutate normala";
  }
  else
  cout << "persoana obeza";
}