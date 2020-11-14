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
  else if (imc >= 18.5 && imc < 25)
    cout << "Normoponderal. " << endl;
    else if (imc >= 25 && imc < 30)
      cout << "Supraponderal. " << endl;
      else if(imc >= 30 && imc < 40)
        cout << "Obezitate. " << endl;
        else 
          cout << "Obezitate morbida. " << endl;
}