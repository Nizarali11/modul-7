#include <stdio.h>
int main(){
    int x,y;
    scanf("%d %d", &x, &y);
    int z[x*y];
    for(int i=0;i<(x*y);i++) {
        scanf("%d", &z[i]);
    }
    for(int i=0;i<(x*y);i++) {
        printf("%d ", z[i]);
        if((i+1)%y==0) {
            printf("\n");
        }
    }
    return 0;
}