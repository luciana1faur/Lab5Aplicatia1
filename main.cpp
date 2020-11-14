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
  
  if (imc < 18.5) 
    cout << "Subponderal. " << endl;
  if (imc >= 18.5 && imc < 25)
    cout << "Normoponderal. " << endl;
  if (imc >= 25 && imc < 30)
    cout << "Supraponderal. " << endl;
  if(imc >= 30 && imc < 40)
    cout << "Obezitate. " << endl;
  if(imc >= 40)
    cout << "Obezitate morbida. " << endl;
}