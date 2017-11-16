//
// Created by Fernando Pires on 16/11/2017.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define SIZE 200
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

char nome[SIZE] [50];
char email[SIZE] [50];

int op;
int cpf[SIZE];

void cadastro();
void pesquisa();
void lista ();

int main(void) {
    do{
        system("cls");
        printf("\n============MENU============\n1 - Cadastrar\n2- Listar todos\n3- Pesquisar\n4 - Sair\n\nDigite uma opcao: ");
        scanf("%d", &op);
        switch (op) {
            case 1:
                cadastro();
                break;

            case 2:
                lista();
                break;

            case 3:
                pesquisa();
                break;

            case 4:
                system("exit");
                break;
            default:
                printf("Opcao Invalida");
                getchar();
                getchar();
                break;
        }
    }while(op!=4);

}

//Função Cadastro
void cadastro() {
    static int linha;
    do {
        printf("\nDigite o nome: ");
        scanf("%s", &nome[linha]);
        printf("\nDigite o e-mail: ");
        scanf("%s", &email[linha]);
        printf("\nDigite o CPF: ");
        scanf("%d", &cpf[linha]);
        printf("\nDigite 1 para continuar ou outro valor para sair ");
        scanf("%d", &op);
        linha++;


    }while(op==1);
}

//Função Pesquisa
void pesquisa () {
    int cpfPesquisa;
    char emailPesquisa[50];
    do {
        printf("\nDigite 1 para pesquisar CPF ou 2 para pesquisar por e-mail");
        scanf("%d", &op);
        switch (op){
            case 1:
                printf("\nDigite o CPF: ");
                scanf("%d", &cpfPesquisa);
                int i;
                for(i=0; i < SIZE; i++){
                    if(cpf[i]==cpfPesquisa){
                        printf("\nNome: %s\nEmail: %s\nCPF: %d", nome[i], email[i], cpf[i]);
                    }
                }
                break;
            case 2:
                printf("\nDigite um E-mail: ");
                scanf("%s", &emailPesquisa);
                for(i=0;i<SIZE;i++){
                    if(strcmp(email[i], emailPesquisa)==0){
                        printf("\nNome: %s\nEmail: %s\nCPF: %d", nome[i], email[i], cpf[i]);
                    }
                }

                break;
            default:
                printf("\n Opcao Invalida");
                break;
        }
        printf("\nDigite 1  para continuar pesquisando ");
        scanf("%d", &op);

    }while (op==1);
}

//Função Listar Cadastro
void lista() {
    int i;
    for(i=0; i < SIZE; i++){
        if(cpf[i]>0) {
            printf("\nNome: %s\nEmail: %s\nCPF: %d", nome[i], email[i], cpf[i]);
        } else{
            break;
        }
    }
    getchar();
    getchar();
}

