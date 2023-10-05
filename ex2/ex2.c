#include <stdio.h>
#include <stdlib.h>

int main(){
    int idade , pf1, pf2, pf3, pf4, pf5, f1, f2, f3, f4, f5;
    for(int i=0; i<15; i++){
        printf("Digite a idade: ");
        scanf("%d", &idade);

        if(idade <= 15){
            pf1++;
        }else if(idade <= 30){
            pf2++;
        }else if(idade <= 45){
            pf3++;
        }else if(idade <= 60){
            pf4++;
        }else{
            pf5++;
        }
    }
    printf("ha %d pessoas com idade ate 15 anos\n", pf1);
    printf("ha %d pessoas com idade entre 16 e 30 anos\n", pf2);
    printf("ha %d pessoas com idade entre 31 e 45 anos\n", pf3);
    printf("ha %d pessoas com idade entre 46 e 60 anos\n", pf4);
    printf("ha %d pessoas com idade acima de 60 anos\n", pf5);
    if (pf1 > pf2 && pf1 > pf3 && pf1 > pf4 && pf1 > pf5){
        printf("A faixa etaria com maior numero de pessoas e a de 0 a 15 anos\n");
    }else if (pf2 > pf1 && pf2 > pf3 && pf2 > pf4 && pf2 > pf5){
        printf("A faixa etaria com maior numero de pessoas e a de 16 a 30 anos\n");
    }else if (pf3 > pf1 && pf3 > pf2 && pf3 > pf4 && pf3 > pf5){
        printf("A faixa etaria com maior numero de pessoas e a de 31 a 45 anos\n");
    }else if (pf4 > pf1 && pf4 > pf2 && pf4 > pf3 && pf4 > pf5){
        printf("A faixa etaria com maior numero de pessoas e a de 46 a 60 anos\n");
    }else{
        printf("A faixa etaria com maior numero de pessoas e a de acima de 60 anos\n");
    }
    return 0;
}