#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*exercicio 1

int main(){

    char str[30];
    int i;

    printf("Digite uma frase: ");
    fflush(stdin);
    gets(str);

    for(i=0; str[i]!='\0'; i++){
        printf("%c", str[i]);
    }
    printf("\n");

    for(i=0; i<strlen(str); i++){
        printf("%c", str[i]);
    }
    printf("\n");

    puts(str);
    printf("%s", str);


return 0;
}
*/

/*exercicio 2

int main(){

    char str[30];
    int i;
    int soma = 0;

    printf("Digite um valor: ");
    fflush(stdin);
    gets(str);

    for(i=0; i<strlen(str); i++){
        if(str[i]=='1'){
            printf("%c", str[i]);
            soma = soma + 1;
        }
    }
    printf("\nA quantidade de 1s eh %d", soma);

return 0;
}
*/

/*exercicio 3

int main(){

    char str[30], len;
    int i;
    char aux;

    printf("Digite uma palavra: ");
    fflush(stdin);
    gets(str);

    for(i=0, len=strlen(str)-1; i<len; i++, len--){
            aux=str[i];
            str[i]=str[len];
            str[len]=aux;

    }
    printf("%s", str);

return 0;
}
*/

/*exercicio 4

int main(){

    char str[30];
    int i;
    int soma = 0;
    char x;

    printf("Digite uma palavra: ");
    fflush(stdin);
    gets(str);

    printf("Escolha um caractere para substituir as vogais:");
    scanf("%c", &x);

    for(i=0; i<strlen(str); i++){
        if((str[i]=='a') || (str[i]=='e') || (str[i]=='i') || (str[i]=='o') || (str[i]=='u')){
            str[i] = x;
            soma = soma + 1;
        }
    }
    printf("\nA quantidade de vogais eh %d", soma);
    printf("\nA palavra eh %s", str);


return 0;
}
*/
/*exercicio 5
int main() {
  char str[100];
  int i, n;

  printf("Digite uma cadeia de caracteres: ");
  scanf("%s", &str);

  for(i=0; i<strlen(str); i++) {
    // verifica se é um caractere alfabético maiúsculo
    if ((str[i] >= 'A') && (str[i] <= 'Z')) {
          str[i] = str[i] + 32; // a distância dos maiúsculos para os respectivos
       }                          // minúsculos na tabela ASCII é sempre +32
    }

  printf("\nResultado: %s\n", str);

  return(0);
}
*/
/*exercicio 6
int main() {
  char str[100];
  int i, n;

  printf("Digite uma cadeia de caracteres: ");
  scanf("%s", &str);

  for(i=0; i<strlen(str); i++) {
      if ((str[i] >= 'a') && (str[i] <= 'z')) {
            str[i] = str[i] - 32; // a distância dos minúsculos para os respectivos
                }                           // maiúsculos na tabela ASCII é sempre -32
          }
  printf("\nResultado: %s\n", str);

  return(0);
}
*/
/*exercicio 7
int main() {
    char str[101];
    int i, posicao;

    printf("Forneca uma string com espacos em branco: ");
    gets(str);

    int len = strlen(str); //só pra dar melhor performance

    printf("%s\n", str);
    for (i = 0, posicao = 0; i < len; i++, posicao++) {
        if (str[posicao] == ' ') posicao++;
        str[i] = str[posicao];
    }
    printf("String sem espaços em branco: %s\n", str);
}
*/
/*exercicio 8
int main(){

    char string[100];
    char ch1, ch2[1];
    int x, tam;

    printf ("Digite uma frase:\n");
    gets(string);
    printf ("Digite alguma letra q exista na frase acima:\n");
    scanf ("%c", &ch1);
    printf ("Digite alguma letra q exista ou nao na frase acima:\n");
    scanf ("%c", &ch2[1]);
    gets(ch2);

    tam=strlen(string);

    for (x=0;x<tam;x++){
        if (string[x]=ch1){
            ch1=ch2[1];
        }
    }
    printf ("%s", string);
return 0;
}
*/
/*exercicio 9
int main(){

	char modelo[20] [4];
	int consumo[4],maisEconomico = 0;
	int posicaoMaisEconomico;
	int i;

	for(i=0;i<4; i++){

		printf("\nDigite o modelo: ");
		scanf("%s", &modelo[i]);
		printf("\nDigite o consumo: ");
		scanf("%d", &consumo[i]);

		if(consumo[i] > maisEconomico){
			maisEconomico = consumo[i];
			posicaoMaisEconomico = i;
		}

	}

		printf("\nO carro mais economico eh: %s ", modelo[posicaoMaisEconomico]);


		printf("\nO modelo: %s ",modelo[0]);
		printf("consome em 1000Km %d l",1000/consumo[0]);

		printf("\nO modelo: %s ",modelo[1]);
		printf("consome em 1000Km %d l",1000/consumo[1]);

		printf("\nO modelo: %s ",modelo[2]);
		printf("consome em 1000Km %d l",1000/consumo[2]);

		printf("\nO modelo: %s ",modelo[3]);
		printf("consome em 1000Km %d l",1000/consumo[3]);

return 0;
}
*/
/*exercicio 10
int main() {
  char nome[30];
  int valor;
  int vfinal;

  printf("Digite o nome da mercadoria: ");
  scanf("%s", &nome);

  printf("Digite o valor da mercadoria: ");
  scanf("%d", &valor);

  vfinal = valor/10;

  printf("\nO valor final eh: %d\n", vfinal);

  return(0);
}
*/
/*exercicio 11
int main(){

    int i,j;
    char str[50];
    int pos;

    printf("Digite uma frase:\n");
    gets(str);

    printf("Digite dois números inteiros maiores que zero:\n");
    scanf("%d %d", &i, &j);

    if(i<=0 || j<=0){
        printf("Os números devem ser maiores que zero!\n");
        scanf("%d %d", &i, &j);
    }

    for(pos = i-1; pos < j; pos++)
        printf("%c", str[pos]);

return 0;
}
*/
/*exercicio 12
int main() {
  char str[100];
  int i, n;

  printf("Digite uma frase: ");
  scanf("%s", &str);

  for(i=0; i<strlen(str); i++) {
    if (str[i] == ' ') i++;
    str[i] = str[i] + 3;
    }

  printf("%s\n", str);

  return(0);
}
*/
/*exercicio 13
int main() {
 int i, valor = 0;
 char palavra[15], inversa[15];

 printf("\nDigite uma palavra: ");
 gets(palavra);

 strcpy(inversa, palavra);

 strrev(inversa);

 valor = strcmp(palavra, inversa);

 if (valor == 0){
   printf("\nA palavra %s eh palíndroma\n", palavra);
 }
 else
   printf("\nA palavra %s nao eh palindroma\n", palavra);

 return 0;
}
*/
/*exercicio 14
int main(){
    char s1[20], s2[20];
    int i, j, n;

    printf("\nDigite uma string: ");
    gets(s1);

    printf("\nDigite outra string: ");
    gets(s2);

    printf("\nDigite um valor: ");
    scanf("%d", &n);

    for (i = 0; s1[i]!= '\0'; ++i);

    for (j = 0; s2[j]!= '\0'; ++j, ++i) {
        s1[i] = s2[j];
    }
    s1[i] = '\0';
    printf("\n\t%s\n", s1);

return 0;
}
*/
