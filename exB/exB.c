#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j, primo = 1;

    for(i = 1; i <= 10; i++){
        primo = 1;
        for(j = 2; j <= i/2; j++){
            if(i % j == 0){
                primo = 0;
                break;
            }
        }
        if(primo == 1){
            printf("%d\n", i);
        }
    }
}