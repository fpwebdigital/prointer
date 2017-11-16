//
// Created by Fernando Pires on 16/11/2017.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 200
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int op;

void cadastroCientes();
void cadastroAutomovel();
void cadastroClassificacao();
void cadastroMovimentacao();
//void pesquisa();
//void lista ();

int main(void) {
    do{
        //system("cls");
        system("clear");
        system("color 5F");
        printf("\n\n\n============MENU============\n\n\n1 - Cadastro de Cliente\n2 - Cadastro de Automovel\n3 - Cadastro de Classificacao\n4 - Movimentacao de Classificacao\n5 - Sair\n\nDigite uma opcao: ");
        scanf("%d", &op);
        switch (op) {
            case 1:
                cadastroCientes();
                break;

            case 2:
                cadastroAutomovel();
                break;

            case 3:
                cadastroClassificacao();
                break;

            case 4:
                cadastroMovimentacao();
                break;

            case 5:
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
        //system("cls");
        system("clear");
        system("color 2F");
        printf("\n\n\n===============================");
        printf("\n|----CADASTRO DE CLIENTES-----|");
        printf("\n===============================\n\n");

        printf("\nID do Cliente: ");
        scanf("%d", &var_id_cliente[linha]);

        printf("\nNome do cliente: ");
        scanf("%s", &var_nome [linha]);

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

//FUNÇÃO CADASTRO DE AUTOMÓVEIS
void cadastroAutomovel() {
    int var_id_automovel[SIZE];
    char var_marca[SIZE] [50];
    char var_modelo[SIZE] [50];
    int var_anofabri[SIZE] [5];
    int var_anomodelo[SIZE] [5];
    char var_placa[SIZE] [7];
    char var_seguradora[SIZE] [50];
    int var_select_cla[SIZE] [5];

    static int linha;
    do {
        //system("cls");
        system("clear");
        system("color 2F");
        printf("\n\n\n===============================");
        printf("\n|----CADASTRO DE AUTOMOVEL----|");
        printf("\n===============================\n\n");

        printf("\nID do Automóvel: ");
        scanf("%d", &var_id_automovel[linha]);

        printf("\nMarca: ");
        scanf("%s", &var_marca [linha]);

        printf("\nModelo: ");
        scanf("%s", &var_modelo [linha]);

        printf("\nAno de Fabricacao: ");
        scanf("%d", &var_anofabri[linha]);

        printf("\nAno do Modelo: ");
        scanf("%d", &var_anomodelo[linha]);

        printf("\nPlaca: ");
        scanf("%s", &var_placa[linha]);

        printf("\nSeguradora: ");
        scanf("%s", &var_seguradora[linha]);

        printf("\nDigite a Classificacao do Automovel: ");
        scanf("%d", &var_select_cla[linha]);


        printf("\n===CADASTRO EFETUADO COM SUCESSO===\n\n");
        system("color 3F");
        printf("\nDigite 1 para continuar ou outro valor para sair: ");
        scanf("%d", &op);
        linha++;
    }while(op==1);
}

//FUNÇÃO CADASTRO DE CLASSIFICAÇÃO
void cadastroClassificacao() {
    int var_id_classificacao[SIZE];
    char var_categoria[SIZE] [50];
    char var_descricao[SIZE] [200];
    int var_valordiaria[SIZE];
    int var_valorsemanal[SIZE];
    int var_valormensal[SIZE];

    static int linha;
    do {
        //system("cls");
        system("clear");
        system("color 2F");
        printf("\n\n\n===============================");
        printf("\n|--CADASTRO DE CLASSIFICACAO--|");
        printf("\n===============================\n\n");

        printf("\nID da Classificação: ");
        scanf("%d", &var_id_classificacao[linha]);

        printf("\nCategoria: ");
        scanf("%s", &var_categoria [linha]);

        printf("\nDescricao: ");
        scanf("%s", &var_descricao [linha]);

        printf("\nValor da Diária: ");
        scanf("%d", &var_valordiaria[linha]);

        printf("\nValor Semanal: ");
        scanf("%d", &var_valorsemanal[linha]);

        printf("\nValor Mensal: ");
        scanf("%s", &var_valormensal[linha]);


        printf("\n===CADASTRO EFETUADO COM SUCESSO===\n\n");
        system("color 3F");
        printf("\nDigite 1 para continuar ou outro valor para sair: ");
        scanf("%d", &op);
        linha++;
    }while(op==1);
}

//FUNÇÃO CADASTRO DE MOVIMENTAÇÃO
void cadastroMovimentacao() {
    int var_id_movimentacao[SIZE];
    char var_cliente[SIZE] [50];
    char var_automovel[SIZE] [200];
    int var_qtdediarias;
    int var_valordiaria;
    int var_valortotal_diarias;
    int var_valortotal_semanal;
    int var_valortotal_mensal;


    static int linha;
    do {
        //system("cls");
        system("clear");
        system("color 2F");
        printf("\n\n\n===============================");
        printf("\n|--CADASTRO DE MOVIMENTACAO--|");
        printf("\n===============================\n\n");

        printf("\nID da Movimentacao ");
        scanf("%d", &var_id_movimentacao[linha]);

        printf("\nCliente: ");
        scanf("%s", &var_cliente [linha]);

        printf("\nAutomovel: ");
        scanf("%s", &var_automovel [linha]);

        printf("\nQuantidade de Diarias: ");
        scanf("%d", &var_qtdediarias);

        printf("\nValor da Locacao por Dia: ");
        scanf("%d", &var_valordiaria);


        var_valortotal_diarias = (var_valordiaria*var_qtdediarias);
        printf("\nValor total das Diarias R$%d",var_valortotal_diarias);

        var_valortotal_semanal = (var_valordiaria*7);
        printf("\nValor total por Semana R$%d",var_valortotal_semanal);

        var_valortotal_mensal = (var_valordiaria*30);
        printf("\nValor total por Mes R$%d",var_valortotal_mensal);


        printf("\n\n===CADASTRO EFETUADO COM SUCESSO===\n\n");
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

