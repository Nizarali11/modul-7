#include <stdio.h>
#include <string.h>
int main(){
    char x[50],y[50],a=0,b=0;
    fgets(x,50,stdin);fgets(y,50,stdin);
    if(strlen(x)!=strlen(y)){
        printf("Panjang kalimat berbeda,pesan palsu");
    } else{
    for(int i=0;i<(strlen(x)-1);i++){
        if (x[i]==' '&&y[i]==' '){
            continue;
        }else if(x[i]==y[i]){
            printf("*");
            a++;
        }else if(x[i]!=y[i]){
            printf("#");
            b++;
        }
    }
        printf("\n*= %d \n", a);
        printf("#= %d \n", b);
        if(a>=b){
            printf("Pesan Asli");
        } else{
            printf("Pesan Palsu");
    }
    }
    return 0;
}