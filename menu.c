#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
 Projeto Feito por Fernando pires

 */

int numero;
void mensagemYES(void);
void mensagemNO(void);

int main (int argc, char *argv[])

{
    //Configurando para aparecer caracteres especiais
    system("color 5F");
    printf("Sistemas\n\n");
    printf("1- Windows\n");
    printf("2- Linux\n");
    printf("\nEscolha a opcao desejada: ");
    scanf_s("%d", &numero);
            switch (numero)
            {
                case 1:
                    system("cls");
                    printf("Iniciando o Windows...\n");
                    break;
                case 2:
                    system("cls");
                    printf("Iniciando o Linux...\n");
                    break;

                default:
                    mensagemNO();
            }
    system("pause");
    system("cls");
    return 0;
}


void mensagemYES(void){
    printf("Iniciado com sucesso\n");
}

void mensagemNO(void){
    printf("Opcao Invalida\n");
}