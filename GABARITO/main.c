#include<stdio.h>
#include<string.h>
#include <locale.h>


int main(){
    //setlocale(LC_ALL, "portuguese");


    int codigo, respCerta, opcao;
    char respostas[50];
    char gabarito[50] = {"abcdeedcbaabcdeedcbaabcdeedcbaabcdeedcbaabcdeedcba"};


INICIO:
        printf("Entre com o codigo do vestibulando: ");
        scanf("%d", &codigo);
        FILE *codAlunos = fopen("resp.txt", "w");
        for(int i=1; i<=51 ; i++){
            fprintf(codAlunos,"%c",codigo);
        }
        fclose(codAlunos);

        printf("\n");
        printf("Aluno casastrado, seu codigo eh: %d\n", codigo);
        fflush(stdin);
        printf("\n\n");

        printf("Agora, vamos entrar com as respostas assinaladas pelo vestibulando \nUse somente letras minusculas, caso contrario, o programa classificara as respostas como erradas\n\n");
        for(int i=0; i<=49; i++){
            printf("Entre com a resposta da questao %d:", i);
            fflush(stdin);
            scanf("%c" , &respostas[i]);
        }
        printf("As respostas do vestibilando de codigo %d foram registradas! \n", codigo);
        printf("Suas respostas foram:         \n");
        for(int i=0 ; i<=50 ; i++){
            printf("[ %c ] ", respostas[i]);
        }
        FILE *respAlunos = fopen("resp.txt", "w");
        for(int i=1; i<=51 ; i++){
            fprintf(respAlunos,"%c",respostas[i]);
        }
        fclose(respAlunos);


        printf("\n");
        printf("As respostas do gabarito sao: \n");
        for(int i=0 ; i<=50 ; i++){
            printf("[ %c ] ", gabarito[i]);
        }

        printf("\n");
        for(int i=0 ; i<=49 ; i++){
            if(respostas[i]==gabarito[i]){
                respCerta+=1;
            }
        }

    printf("Das 50 questoes da prova do vestibular, o candidato %d acertou %d questoes.", codigo, respCerta);
    printf("\n\n\n\n", codigo, respCerta);

    int Menu_01;
        printf("1 - Fazer novo registro\n\n");
        printf("2 - Sair do programa\\n");

        scanf("%d", &opcao);
        system("cls");

        switch (opcao){
            case 1:
                printf("Vamos fazer um novo registro!\n\n");
                goto INICIO;
                return 0;
                break;

            case 2:
                printf("Ate mais!\n");
                break;

            default:
                printf ("Essa opcao nao eh valida! Retornando ao menu principal\n\n");
                break;
        }
    return 0;
}


