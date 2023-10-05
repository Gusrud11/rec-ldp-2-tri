#include <stdio.h>

int main() {
    int idade, f1=0, f2=0, f3=0, f4=0;
    float peso, mediaf1=0, mediaf2=0, mediaf3=0, mediaf4=0;

    for(int i=0; i<10; i++){
        printf("Digite a idade: ");
        scanf("%d", &idade);
        printf("Digite o peso: ");
        scanf("%f", &peso);

        if(idade>=1 && idade<=10){
            f1++;
            mediaf1 += peso;
        }
        if(idade>=11 && idade<=20){
            f2++;
            mediaf2 += peso;
        }
        if(idade>=21 && idade<=30){
            f3++;
            mediaf3 += peso;
        }
        if(idade>=31){
            f4++;
            mediaf4 += peso;
        }
    }

    if(f1 > 0) {
        mediaf1 /= f1;
        printf("Média de peso para pessoas de 1 a 10 anos: %.2f\n", mediaf1);
    }
    if(f2 > 0) {
        mediaf2 /= f2;
        printf("Média de peso para pessoas de 11 a 20 anos: %.2f\n", mediaf2);
    }
    if(f3 > 0) {
        mediaf3 /= f3;
        printf("Média de peso para pessoas de 21 a 30 anos: %.2f\n", mediaf3);
    }
    if(f4 > 0) {
        mediaf4 /= f4;
        printf("Média de peso para pessoas maiores de 31 anos: %.2f\n", mediaf4);
    }

    return 0;
}