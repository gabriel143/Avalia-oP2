#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    char cnpj[14];
    int testador1[]={5,4,3,2,9,8,7,6,5,4,3,2};
    int testador2[]={6,5,4,3,2,9,8,7,6,5,4,3,2};
    int aux, aux1, resto, d1, d2;
    //printf("Validador de CNPJ!\nEntre com o CNPJ que deseja verificar: ");
    //fgets(cnpj, sizeof(cnpj), stdin);


    //Entrada do CNPJ
    aux = 0;
    for(int i=0; i<=13 ; i++){
            printf("Entre com o digito %d do CNPJ: ", i+1);
            scanf("%d", &cnpj[i]);
    }

    //calculo do primeiro digito
    for(int i=0; i<=11 ; i++){
            aux+=((cnpj[i])*(testador1[i]));
    }
    resto=aux%11;
    if(resto<=2){
        d1=0;
    }
    else{
        d1=11-resto;
        if(d2=10){
            d2=1;
        }
    }

    //calcular o segundo digito

    for(int i=0; i<=11 ; i++){
            aux1+=((cnpj[i])*(testador2[i]));
    }
    aux1+=(d1*(testador2[12]));
    resto=aux1%11;
    if(resto<=2){
        d2=0;
    }
    else{
        d2=11-resto;
        if(d2=10){
            d2=1;
        }
    }


    if ((d1==cnpj[12]) && (d2==cnpj[13])){
     printf("CNPJ VALIDO!!");
    }

    else{
     printf("CNPJ INVALIDO!!");
     }
}




