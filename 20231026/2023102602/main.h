typedef struct pessoa{
     char nome[30];
     char dataNascimento[30];
     int cpf;
}pessoa;
typedef struct data{
    int dia;
    int mes;
    int ano;
}data;
void preencher(pessoa*pessoa, data*data);
void imprimir(pessoa*pessoa, data*data);

