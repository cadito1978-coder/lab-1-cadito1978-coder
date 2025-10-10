// Este programa toma dos valores del usuario y luego los intercambia
// antes de imprimir los valores. Se le pedirá al usuario que ingrese
// ambos números.
#include <iostream>
using namespace std;

int main() {
  float firstNumber;
  float secondNumber;

  // Solicitar al usuario que introduzca el primer número.
  cout << "Ingrese el primer número" << endl;
  cin >> firstNumber;

  // Solicitar al usuario que introduzca el segundo número.
  cout << "Ingrese el segundo número" << endl;
  cin >> secondNumber;

  // Imprimir los números.
  cout << endl
       << "Los números son " << firstNumber << " y " << secondNumber << endl;

  // Ahora intercambiaremos los valores.
  firstNumber = secondNumber;
  secondNumber = firstNumber;

  // Salida de los valores después del intercambio.
  cout << "Ahora, los números son " << firstNumber << " y " << secondNumber
       << endl;
  return 0;
}
