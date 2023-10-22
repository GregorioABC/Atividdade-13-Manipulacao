// 1
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #define MAX_LENGTH 100
// int main(void) {
//   char str[MAX_LENGTH];
//   printf("Informe uma string");
//   fgets(str,MAX_LENGTH,stdin);
//   printf("A string informada foi: %s",str);
//   return 0;
// }
//2
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// #define MAX_LENGTH 100
// int StringLength(char *str){
//   int length=0;
//   while(str[length]!='\0'){
//     length++;
//   }
//   return length;
// }
// int main(){
//   char str[MAX_LENGTH];
//   printf("Informe a string ");
//   fgets(str,MAX_LENGTH,stdin);
//   if(str[StringLength(str)-1]=='\n'){
//     str[StringLength(str)-1]='\0';
// }
//   int length=StringLength(str);
//   printf("O comprimento da String é : %d\n",length);
//   return 0;
// }
//3
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// int compararString(char string1[],char string2[]){
//   int i=0;
//   while(string1[i]==string2[i]){
//     if (string1 == '\0' || string2[i]=='\0'){
//       break;
//       i++;
//     }if(string1[i]=='\0' && string2[i]=='\0'){
//       return 0;
//     }else{
//       return string1[i]-string2[i];
//     }
// }
// }
// int main(){
//   char string1[10]= "bye";
//   char string2[10]= "thau";
//   int comparacao=compararString(string1,string2);
//   if(comparacao==0){
//     printf("As strings são iguais");
//   }else if(comparacao<1) {
//     printf("A primeira string é maior ");
//   }else{
//     printf("A segunda string é maior");
//   }
//   return 0;
// }
//4
// #include<stdlib.h>
// #include<stdio.h>
// #include<string.h>
// int main (void){
//   char nome[20];
//   printf("Digite um nome: ");
//   scanf("%s",nome);

//   if(strlen(nome)<4){
//     printf("O nome digitado tem menos que 4 letras");
//   }else{
//     printf("As 4 primeiras letras são : ");
//     for(int i=0;i<4;i++){
//       printf("%c",nome[i]);
//     }
//     printf("\n");
//   }
//   return 0;
// }
//5
// #include<stdlib.h>
// #include<stdio.h>
// #include<string.h>
// int main(void){
//   char nome[50];
//   printf("Digite um nome: ");
//   fgets(nome,sizeof(nome),stdin);
//   int tamanho=strlen(nome)-1;
//   printf("Onome digitado tem %d letras.",tamanho);
//   return 0;
// }
//6
// #include<stdlib.h>
// #include<stdio.h>
// #include<string.h>
// int main(void){
//   char nome[50];
//   char sexo;
//   int idade;
//   printf("Digite o nome: ");
//   fgets(nome, sizeof(nome), stdin);
//   printf("Digite o sexo (M/F): ");
//   scanf(" %c", &sexo);
//   printf("Digite a idade: ");
//   scanf("%d", &idade);
//   if (sexo == 'F' && idade < 25) {
//       printf("%sACEITA\n", nome);
//   } else {
//       printf("NÃO ACEITA\n");
//   }
//   return 0;
// }
//7
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// int contarUns(char string[]) {
//     int count = 0;
//     for (int i = 0; i < strlen(string); i++) {
//       if (string[i] == '1') {
//         count++;
//       }
//     }
//     return count;
// }
// int main() {
//     char string[100];
//     printf("Digite uma sequência de 0 e 1");
//     scanf("%s", string);
//     int numeroDeUns = contarUns(string);
//     printf("O número de 1 na string é: %d\n", numeroDeUns);
//     return 0;
// }
//8
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// void substituirCaractere(char string[], char antigo, char novo) {
//     for (int i = 0; i < strlen(string); i++) {
//       if (string[i] == antigo) {
//         string[i] = novo;
//         }
//     }
// }
// int main() {
//     char string[100];
//     char antigo = '0';
//     char novo = '1';
//     printf("Digite uma string: ");
//     fgets(string, sizeof(string), stdin);
//     int len = strlen(string);
//     if (len > 0 && string[len - 1] == '\n') {
//         string[len - 1] = '\0';
//     }
//     substituirCaractere(string, antigo, novo);
//     printf("String com substituição: %s\n", string);
//     return 0;
// }
//9
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// #include <ctype.h>
// int main() {
//     char nome[50];
//     printf("Digite um nome: ");
//     fgets(nome, sizeof(nome), stdin);
//     int len = strlen(nome);
//     if (len > 0 && nome[len - 1] == '\n') {
//         nome[len - 1] = '\0';
//     }
//     if (nome[0] == 'a' || nome[0] == 'A') {
//         printf("%s\n", nome);
//     }
//     return 0;
// }
//10
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// int main(void){
//   char palavra[50];
//   printf("Digite uma palavra: ");
//   scanf("%s", palavra);
//   printf("A palavra de tras para frente: ");
//   for (int i = strlen(palavra) - 1; i >= 0; i--) {
//       printf("%c", palavra[i]);
//   }
//   printf("\n");
//   return 0;
// }
//11
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// int main(void){
// char string[50];
//     int i, j = 0;
//     printf("Digite uma string: ");
//     fgets(string, sizeof(string), stdin);
//     printf("String sem vogais: ");
//     for (i = 0; string[i] != '\0'; i++) {
//        if (string[i] != 'a' && string[i] != 'e' && string[i] != 'i' && string[i] != 'o' && string[i] != 'u' &&
//             string[i] != 'A' && string[i] != 'E' && string[i] != 'I' && string[i] != 'O' && string[i] != 'U') {
//             string[j++] = string[i];
//         }
//     }
//     string[j] = '\0';
//     printf("%s\n", string);
//     return 0;
// }
//12
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// int main() {
//   char palavra[50];
//   char substituto;
//   int vogais = 0;
//   printf("Digite uma palavra: ");
//   fgets(palavra, sizeof(palavra), stdin);
//   int len = strlen(palavra);
//   if (len > 0 && palavra[len - 1] == '\n') {
//       palavra[len - 1] = '\0';
//   }
//   printf("Digite o caractere de substituição: ");
//   substituto = getchar();
//   getchar();
//   for (int i = 0; palavra[i] != '\0'; i++) {
//       char lowercase = tolower(palavra[i]);
//       if (lowercase == 'a' || lowercase == 'e' || lowercase == 'i' || lowercase == 'o' || lowercase == 'u') {
//           vogais++;
//           palavra[i] = substituto;
//       }
//   }
//   printf("Número de vogais na palavra: %d\n", vogais);
//   printf("Palavra com vogais substituídas: %s\n", palavra);
//   return 0;
//   }
//13
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// int contarEspacos(char frase[]) {
//     int count = 0;
//     for (int i = 0; i < strlen(frase); i++) {
//       if (frase[i] == ' ') {
//         count++;
//         }
//     }
//     return count;
// }
// int main() {
//     char frase[100];
//     printf("Digite uma frase: ");
//     fgets(frase, sizeof(frase), stdin);
//     int numeroDeEspacos = contarEspacos(frase);
//     printf("O numero de espacos em branco na frase e: %d\n", numeroDeEspacos);
//     return 0;
// }
//14
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// int main() {
//     char palavra[51];
//     int i;
//     printf("Digite uma palavra: ");
//     fgets(palavra, sizeof(palavra), stdin);
//     printf("String resultante: ");
//     for (i = 0; palavra[i] != '\0' && i < 50; i++) {
//         printf("%c", palavra[i] + 1);
//     }
//     printf("\n");
//     return 0;
// }
//15
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// int main() {
//     char cadeia[100];
//     printf("Digite uma cadeia de caracteres: ");
//     fgets(cadeia, sizeof(cadeia), stdin);
//     printf("Cadeia em maiusculas: ");
//     for (int i = 0; i < strlen(cadeia); i++) {
//       if (cadeia[i] >= 'a' && cadeia[i] <= 'z') {
//           cadeia[i] = cadeia[i] - 32;
//         }
//     }
//     printf("%s\n", cadeia);
//     return 0;
// }
//16
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// int main() {
//     char cadeia[100];
//     printf("Digite uma cadeia de caracteres: ");
//     fgets(cadeia, sizeof(cadeia), stdin);
//     printf("Cadeia em letras minusculas: ");
//     for (int i = 0; i < strlen(cadeia); i++) {
//       if (cadeia[i] >= 'A' && cadeia[i] <= 'Z') {
//         cadeia[i] = cadeia[i] + 32;
//         }
//     }
//     printf("%s\n", cadeia);
//     return 0;
// }
//17
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// int main() {
//     char frase[100];
//     char resultado[100];
//     int j = 0;
//     printf("Digite uma frase: ");
//     fgets(frase, sizeof(frase), stdin);
//     for (int i = 0; i < strlen(frase); i++) {
//         if (frase[i] != ' ') {
//           resultado[j] = frase[i];
//           j++;
//         }
//     }
//     resultado[j] = '\0';
//     printf("Frase sem espacos: %s\n", resultado);
//     return 0;
// }
//18




