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
