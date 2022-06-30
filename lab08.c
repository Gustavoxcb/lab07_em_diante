#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*exercicio 1

struct horario{
    int horas, minutos, segundos;
    };
struct data{
    int dia, mes, ano;
    };
struct compromisso{
    struct data a;
    struct horario b;
    char descricao[100]; };

*/

/*exercicio 2
struct aluno{
    char nome[30];
    int numero_matricula;
    char curso[30];
};
int main(){

    struct aluno c[5];
    int i;

    for(i=0; i<5; i++){
        printf("Digite o nome de um aluno: ");
        fflush(stdin);
        gets(c[i].nome);
        printf("Digite o seu numero de matricula: ");
        scanf("%s", &c[i].numero_matricula);
        printf("Digite o nome do seu curso: ");
        fflush(stdin);
        gets(c[i].curso);
    }
    printf("\nOs dados fornecidos foram: ");

    for(i=0; i<5; i++){
        printf("\nNome de um aluno: %s", c[i].nome);
        printf("\nNumero de matricula: %s", c[i].numero_matricula);
        printf("\nCurso: %s", c[i].curso);
    }

return 0;
}
*/
/*exercicio 3

struct Alunos{
    char nome[30], numero_Mat[20];
    float nota1, nota2, nota3, mediaNotas;
    };

int main (){

    struct Alunos a[1];
    int i, posicao_maior_N1=0, posicao_menor_Media=0, posicao_maior_Media=0;
    float maior_Media = 0.0, menor_Media = 10, sum_Media = 0.0, media_Geral_Final = 0.0, maior_N1 = 0.0;

    for(i=0; i<3; i++){
            printf("\nDigite o Nome: ");
            scanf("%s", &a[i].nome);
            printf("\nDigite a Matricula: ");
            scanf("%s", &a[i].numero_Mat);
            printf("\nDigite a Nota 1:  ");
            scanf("%f", &a[i].nota1);
            printf("\nDigite a Nota 2:  ");
            scanf("%f", &a[i].nota2);
            printf("\nDigite a Nota 3:  ");
            scanf("%f", &a[i].nota3);
            a[i].mediaNotas = (a[i].nota1 + a[i].nota2 + a[i].nota3)/3;
            sum_Media = sum_Media + a[i].mediaNotas;
            printf("\n");
            }
    media_Geral_Final = sum_Media/3;

    for(i=0; i<3; i++){
            if (a[i].nota1 > maior_N1){
                maior_N1=a[i].nota1;
                posicao_maior_N1 = i;
                }
            if (a[i].mediaNotas > maior_Media){
                maior_Media=a[i].mediaNotas;
                posicao_maior_Media = i;
                }
            if (a[i].mediaNotas < menor_Media){
                menor_Media=a[i].mediaNotas;
                posicao_menor_Media = i;
                }
            printf("\n");
            }
    printf("\nDados dos Alunos:\n");

    for(i=0; i<3; i++){
            printf("\nNome: %s ", a[i].nome);
            printf("\nNumero de Matricula: %s", a[i].numero_Mat);
            printf("\nNotas\nN1: %.2f\nN2: %.2f\nN3: %.2f", a[i].nota1, a[i].nota2, a[i].nota3);
            printf("\nMedia: %.2f", a[i].mediaNotas);
            if (a[i].mediaNotas>=6){
                    printf("\nALUNO APROVADO");
                    }
            else{
                    printf("\nALUNO REPROVADO");
                    }
                    printf("\n");
                    }
            printf("\nMedias dos alunos: ");
            printf("\nMedia Geral da Turma: %.2f", media_Geral_Final);
            printf("\nMaior N1: %.2f do aluno: %s", maior_N1, a[posicao_maior_N1].nome);
            printf("\nMaior Media Geral: %.2f do aluno: %s", maior_Media, a[posicao_maior_Media].nome);
            printf("\nMenor Media Geral: %.2f do aluno: %s", menor_Media, a[posicao_menor_Media].nome);

return 0;
}
*/

/*exercicio 4
struct funcionario {
    char nome[50];
    int idade;
    char sexo;
    int cpf;
    char data_nas[15];
    int cod_setor;
    char cargo[30];
    float salario;

};

int main() {
    struct funcionario a;

        printf("Nome do funcionario: ");
        scanf("%s", &a.nome);
        printf("Idade: ");
        scanf("%d", &a.idade);
        printf("Sexo(F/M): ");
        scanf("%s", &a.sexo);
        printf("CPF: ");
        scanf("%d", &a.cpf);
        printf("DataNascimento (ddmmaaa):");
        scanf("%s", &a.data_nas);
        printf("Cod setor: ");
        scanf("%d", &a.cod_setor);
        printf("Cargo: ");
        scanf("%s", &a.cargo);
        printf("Salario: ");
        scanf("%f", &a.salario);

    printf("\nDADOS: ");

    printf("\nNome: %s", a.nome);
    printf("\nIdade: %d", a.idade);
    printf("\nSexo: %c", a.sexo);
    printf("\nCPF: %d", a.cpf);
    printf("\nData de Nascimento: %s", a.data_nas);
    printf("\nCod setor: %s", a.cod_setor);
    printf("\nCargo: %s", a.cargo);
    printf("\nSalario: %.2f\n", a.salario);

return 0;
}
*/
//exercicio 5
struct carro{
        char marca[15];
        int ano;
        float preco;
    };
int main (){

    float p=1;
    int i;

    struct carro c[5];

    for(i=0;i<5;i++){
        printf("Digite a marca do %i carro: ",i+1);
        scanf("%s",&c[i].marca);
        fflush(stdin);
        printf("Ano: ");
        scanf("%d",&c[i].ano);
        printf("Preco: ");
        scanf("%f",&c[i].preco);
    }
    do{
        printf("Procurar carros com preco abaixo de: ");
        scanf("%f",&p);
        fflush(stdin);


        for(int i=0;i<5;i++){
            if(c[i].preco<p){
                printf("\nMarca: %s\tAno: %i\tPreco: %.2f\n\n", c[i].marca, c[i].ano, c[i].preco);
            }
            else{
                printf("\nNão encontrado valor abaixo do preco estipulada.\n\n");
            }
        }
        }while(p!=0);

return 0;
}