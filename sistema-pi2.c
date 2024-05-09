#include <stdio.h>
#include <windows.h>

void pausar ()
{
    system("pause");
}

void limpar ()
{
    system("cls");
}

int menu ()
{
    int op;
    limpar();
    printf(" 1 - Cadastrar\n");
    printf(" 2 - Excluir\n");
    printf(" 3 - Comprar materias\n");
    printf(" 4 - Controlar caixa\n");
    printf(" 5 - Atualizar Estoque\n");
    printf(" 6 - Registrar procedimentos\n");
    printf(" 7 - Agendar consulta\n");
    printf(" 8 - Agendar exames\n");
    printf(" 9 - Efetuar baixa de materias\n");
    printf("10 - Vender produtos\n");
    printf("11 - Registrar despesas fixas\n");
    printf("12 - Efetuar pagamento\n");
    printf("00 - Encerrar\n");
    printf("---------------------------------\n");
    scanf("%d", &op);
    return op;
}

int menuCadastro ()
{
    int op;
    limpar();
    printf("1 - Paciente\n");
    printf("2 - Medico\n");
    printf("3 - Procedimento\n");
    printf("4 - Material\n");
    printf("5 - Exames\n");
    printf("6 - Fornecedores\n");
    printf("0 - Retornar\n");
    printf("---------------------------------\n");
    scanf("%d", &op);
    return op;
}

int main ()
{
    int op;

    op=menu();
    while(op!=0)
    {
        switch(op)
        {
            case 1:
                op=menuCadastro();
                while(op!=0)
                {
                    op=menuCadastro();
                }
            break;

            case 2:
                op=menuCadastro();
                while(op!=0)
                {
                    op=menuCadastro();
                }
            break;

            default:
                printf("Opcao invalida!\n");
            pausar();
        }
        op=menu();
    }
}