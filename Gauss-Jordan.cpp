//////PROGRAMA PARA RESOLVER SISTEMAS DE ECUACIONES LINEALES POR EL MÉTODO DE GAUSS JORDAN////////////
//Reglas: solo se admiten sistemas cuadrados de ecuaciones (nxn), además, la matriz que se introduzca 
//debe ser no singular (det(A)!=0), de lo contrario el programa colapzasrá y será triste  unu/////////

//Para probar el programa se deja una matriz de ejemplo: 
//		[2 4 6 | 18]
//		[4 5 6 | 24]
//		[3 1 -2|  4]
//La solución debe ser [4, -2, 3]

//Hecho por: Roque Andre Eleazar Flores Villagomez & Emma M. Luna Bucio

#include<iostream>
#include<math.h>
#include<stdio.h>
#include<cstdlib>

using namespace std;
int main() {
  int i, j, k, n;
  printf("\nIngrese el tamano de la matriz: ");
  scanf("%d", &n);
  float a[n][n+1], b, x[n];
  
  printf("\nIngrese las entradas de la matriz aumentada (por filas):\n");
  for (i = 1; i <= n; i++) {
    for (j = 1; j <= (n + 1); j++) {
      cout << "a" << i << ", " << j << " =";
      cin >> a[i][j];
    }
  }
  
  for(i=1;i<=n;i++){
  	if(a[i][j]==0){
  		cout<<"El determinante es cero, el sistema no tiene solucion";
  		break;
	  }
  }
  
  // aplicacion del metodo de Gauss Jordan
  for (j = 1; j <= n; j++) {
    for (i = 1; i <= n; i++) {
      if (i != j) {
        b = a[i][j] / a[j][j];
        for (k = 1; k <= n + 1; k++) {
          a[i][k] = a[i][k] - b * a[j][k];
        }
      }
    }
  }

  cout << "\nLa solucion es:\n";
  for (i = 1; i <= n; i++) {
    x[i] = a[i][n + 1] / a[i][i];
    cout << "x" << i << "=" << x[i] << " ";

  }
  
  return (0);
}




