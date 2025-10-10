// Este programa tomará un número y lo dividirá por 2.
#include <iostream>
using namespace std;

int main() {
  float numero;
  int divisor;
  divisor = 2;
  cout << "Hola" << endl;
  cout << "Ingrese un número y presione enter" << endl;
  cin >> numero;

  numero = numero / divisor;
  cout << "La mitad de tu número es " << numero << endl;
  return 0;
}
