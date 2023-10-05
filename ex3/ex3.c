#include <stdio.h>
#include <stdlib.h>

    int main(){
        int n1;

        printf("Digite um numero: ");
        scanf("%d", &n1);   

        printf("Ímpares:   Pares:\n");
        for(int i = 1; i <= n1; i++){

            if(i % 2 != 0){
                printf("%-20d", i);
            }else{
                printf("%-20d\n", i);
            }
        }
    }