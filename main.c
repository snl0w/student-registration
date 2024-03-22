#include <stdio.h>
#include <conio.h>

typedef struct Aluno
{
    char nomeAluno[50];
    int matriculaAluno;
    char cursoAluno[50];
};

int main(void)
{

    const int numAluno = 5;
    struct Aluno alunos[numAluno];

    for (int i = 0; i < numAluno; i++)
    {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", alunos[i].nomeAluno);
        printf("Digite a matricula do aluno %d: ", i + 1);
        scanf("%s", alunos[i].matriculaAluno);
        printf("Digite o curso do aluno %d: ", i + 1);
        scanf("%s", alunos[i].cursoAluno);
        printf("\n");
    }

    printf("--------Alunos--------\n");

    for (int i = 0; i < numAluno; i++)
    {
        printf("Aluno %d: ", i + 1);
        printf("\nNome: %s", alunos[i].nomeAluno);
        printf("\nMatricula: %d", alunos[i].matriculaAluno);
        printf("\nCurso: %s\n\n", alunos[i].cursoAluno);
    }

    return 0;
}