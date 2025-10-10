// Este programa muestra un error de compilación.
#include <iostream>
using namespace std;

int main() {
  int numero;
  float total;
  cout << "Hoy es un gran día!" cout << endl
       << "Comencemos escribiendo un número:" << endl;
  cin >> numero;
  total = numero * 2;
  cout << total << " es el doble del número que escribiste" << endl;
  return 0;
}
