#include <iostream>

using namespace std;

//funciones
int numeros();
int sumaMatriz();

int main() {
    numeros();
    sumaMatriz();

  return 0;
}

int numeros() {
  int numero;
  bool esPositivo,esNegativo,esCero;

  cout << "Ingrese un numero: ";
  cin >> numero;

  esPositivo = (numero > 0);
  esNegativo = (numero < 0);
  esCero = (numero == 0);

  if (esPositivo)
    cout << "El numero es positivo" << endl<< endl;
  else if (esNegativo)
    cout << "El numero es negativo" << endl << endl;
  else
    cout << "El numero es cero" << endl << endl;
}

int sumaMatriz() {
  int i,j;
  int A[2][2],B[2][2],C[2][2];

  //Matriz A
  for (i=0; i<2; i++) {
    for (j=0; j<2; j++) {
      cout << "Elemento # " << i << j << ": ";
      cin >> A[i][j];
    }
  }

  //Matriz B
  for (i=0; i<2; i++) {
    for (j=0; j<2; j++) {
      cout << "Elemento # " << i << j << ": ";
      cin >> B[i][j];
    }
  }
  //suma matrices
  for (i=0; i<2; i++) {
    for (j=0; j<2; j++)
        C[i][j] =  A[i][j] + B[i][j];
  }

  //mostrar resultado
  cout << "\nResultado" << endl;
  for (i=0; i<2; i++) {
    for (j=0; j<2; j++)
        cout << C[i][j] << " ";
    cout << endl;
  }
}
