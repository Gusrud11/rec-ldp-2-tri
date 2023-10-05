#include <stdio.h>
#include <stdlib.h>

int main(){
    int idade=1 , p=0, idadeg = 0;
    float media = 0;
    while(idade > 0){
        printf("Digite a idade: ");
        scanf("%d", &idade);
        idadeg = idadeg + idade;
        p++;
    }
    printf("%d\n", idadeg);
    printf("%d\n", p);
    media = idadeg/p;
    if(idade==0){
        printf("a media das idades das pessoas é: %f\n", media);    
        return 0;
    }
}