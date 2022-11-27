#include <stdio.h>
int main(){
    int x,z,i,j,k;
    scanf("%d", &x);
    int a[x][x], b[x][x];
    printf("Matriks A\n");
    for(i=0; i<x; i++){
        for(j=0; j<x; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Matriks B\n");
    for(i=0; i<x; i++){
        for(j=0; j<x; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    printf("Matriks AxB\n");
    for(i=0; i<x; i++){
        for(j=0; j<x; j++){
            for(k=0, z=0; k<x; k++){
                z += a[i][k]*b[k][j];
            }
            printf("%d ", z);
        }
        printf("\n");
    }
    return 0;
}