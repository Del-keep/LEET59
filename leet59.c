#include <stdio.h>
#include <stdlib.h>
int** generateMatrix(int n, int* returnSize, int** returnColumnSizes) {

    int i,j, cima=0, baixo=n-1,esquerda=0, direita=n-1;
    int temp=1;

    int **resp=(int**)malloc(n *sizeof(int*));
    *returnColumnSizes=(int*)malloc(n *sizeof(int));
    
    if ( !resp ) {
        printf("erro ao alocar");
    }

    if ( !returnColumnSizes ) {
        printf("erro ao malocar");
    }

    for ( i=0;i<n;i++ ) {
        resp[i] = (int*)malloc(n * sizeof(int));
        
        (*returnColumnSizes)[i]=n;//cada linha tem q ter N colunas
    }

    *returnSize=n; //numero de linhas
    //fazer a espiral
    
    while ( esquerda<=direita && cima<=baixo ) {

        for ( j=esquerda;j<=direita;j++ ) {
            resp[cima][j]=temp++;
        }
        cima++;

        for ( i = cima; i <= baixo; i++ ) {
            resp[i][direita] = temp++;
        }
        direita--;

        if ( cima <= baixo ) {
            for ( j = direita; j >= esquerda; j-- ) {
                resp[baixo][j] = temp++;
            }
            baixo--;
        }

        if ( esquerda<=direita ){
            for( i=baixo;i>=cima;i-- ) {
                resp[i][esquerda]=temp++;
            }
            esquerda++;
        }
    }
    return (resp);
}



