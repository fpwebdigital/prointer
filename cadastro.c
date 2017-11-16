//
// Created by Fernando Pires on 16/11/2017.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 200
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)



char var_end[SIZE] [150];


char var_marca[SIZE] [6];
char var_modelo[SIZE] [6];
char var_anofabri[SIZE] [6];
char var_anomodelo[SIZE] [6];
char var_placa[SIZE] [6];
char var_seguradora[SIZE] [6];
char var_codcla[SIZE] [6];


int var_id_automovel;
int var_id_classificacao;
int var_id_movimentacao;
int op;



void cadastroCientes();
void pesquisa();
void lista ();

int main(void) {
    do{
        system("cls");
        system("color 5F");
        printf("\n\n\n============MENU============\n\n\n1 - Cadastro de Cliente\n2- Cadastro de Automovel\n3- Cadastro de Classificacao\n4- Cadastro de Classificacao\n4 - Sair\n\nDigite uma opcao: ");
        scanf("%d", &op);
        switch (op) {
            case 1:
                cadastroCientes();
                break;

            case 2:

                break;

            case 3:

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

//FUNÇÃO CADASTRO DE CLIENTES
void cadastroCientes() {
    int var_id_cliente[SIZE];
    char var_nome[SIZE] [50];
    int var_rg[SIZE] [12];
    int var_cpf[SIZE] [14];
    char var_end[SIZE] [150];
    int var_dtnasc[SIZE] [10];
    int var_numhab[SIZE] [10];
    char var_cathab[SIZE] [6];

    static int linha;
    do {
        system("cls");
        system("color 2F");
        printf("\n\n\n===============================");
        printf("\n|----CADASTRO DE CLIENTES-----|");
        printf("\n===============================\n\n");

        printf("\nID do Cliente: ");
        scanf("%d", &var_id_cliente[linha]);

        printf("\nNome do cliente: ");
        scanf("%s", &var_nome[linha]);

        printf("\nDigite o RG: ");
        scanf("%d", &var_rg[linha]);

        printf("\nDigite o CPF: ");
        scanf("%d", &var_cpf[linha]);

        printf("\nEndereco: ");
        scanf("%s", &var_end[linha]);

        printf("\nData de Nascimento: ");
        scanf("%d", &var_dtnasc[linha]);

        printf("\nNumero da Habilitacao: ");
        scanf("%d", &var_numhab[linha]);

        printf("\nCategoria da Habilitacao: ");
        scanf("%s", &var_cathab[linha]);

        printf("\n===CADASTRO EFETUADO COM SUCESSO===\n\n");
        system("color 3F");
        printf("\nDigite 1 para continuar ou outro valor para sair: ");
        scanf("%d", &op);
        linha++;


    }while(op==1);
}

//Função Pesquisa
/*void pesquisa () {
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
                    if(var_cpf[i]==cpfPesquisa){
                        printf("\nNome: %s\nEmail: %s\nCPF: %d", var_nome[i], email[i], var_cpf[i]);
                    }
                }
                break;
            case 2:
                printf("\nDigite um E-mail: ");
                scanf("%s", &emailPesquisa);
                for(i=0;i<SIZE;i++){
                    if(strcmp(email[i], emailPesquisa)==0){
                        printf("\nNome: %s\nEmail: %s\nCPF: %d", var_nome[i], email[i], var_cpf[i]);
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
}*/

//Função Listar Cadastro
/*void lista() {
    int i;
    for(i=0; i < SIZE; i++){
        if(var_cpf[i]>0) {
            printf("\nNome: %s\nEmail: %s\nCPF: %d", var_nome[i], email[i], var_cpf[i]);
        } else{
            break;
        }
    }
    getchar();
    getchar();
}*/

