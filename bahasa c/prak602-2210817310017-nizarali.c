#include <stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    int y[x];
    for(int i=1;i<=x;i++){
        scanf("%d", &y[i]);
    }
    for(int i=1;i<=x;i++){
        printf("%d ", y[i]*i);
    }
    return 0;
}