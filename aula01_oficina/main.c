#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int somaNaturais(int num){
    if(num <= 1) return num;
    return num+somaNaturais(num-1);;
}

float potencia(float base, float expoente){
    if(expoente==1) return base;
    return base*potencia(base,expoente-1);
}

float pow(float base, float expoente){
    if(expoente==0) return 1;
    if(expoente<0){
        base = 1/base;
        expoente=expoente*-1;
        return potencia(base,expoente);
    }
    if(expoente>0){
        return potencia(base,expoente);
    }
}

int main()
{
    float resultado;

    resultado = pow(5,-3);
    printf("\n esse e o resultado %f",resultado);
    return 0;
}
