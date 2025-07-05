#include <stdio.h>

void inicializar_tablero(char matriz[3][3]);

int main()
{
    // Declaración del tablero 3x3
    char matriz[3][3];
    
    inicializar_tablero(matriz);
    
	return 0;
}

// llena el tablero con los caracteres del '1' al '9'
void inicializar_tablero(char matriz[3][3]){
    int i, j;
    char aux = '1';
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            matriz[i][j] = aux++;
            printf("%c\n", matriz[i][j]);
        }
        
    }
}