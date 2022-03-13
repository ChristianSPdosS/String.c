#include  <stdio.h>
#include <string.h>

int main(void){

//memset(s1, c, n) Copia caractere c nas n primeiras posições de s1.
  {char s1[80];
 memset(s1, 'a', 40);
 printf("%s\n" , s1);}
//strcpy(s1, s2) Copia s2 em s1.
  { char s1[80];
 strcpy(s1, "Isso é uma string!\n");}
//strcat(s1, s2) Concatena s2 no final de s1.
  {char s1[80];
 strcat(s1, "Isso é ");
 strcat(s1, "uma string");
 printf("%s\n" , s1 );}
//strlen(s1) Retorna o tamanho de s1.
  {char s1[80];
 
 printf("tamanho da string: %ld\n", strlen(s1));}

//strcmp(s1, s2) Retorna 0 se s1 == s2; < 0 se s1 < s2; > 0 se s1 > s2.
  {char s1[80], s2[80];

 printf("As strings são iguais? %d\n", strcmp(s1, s2));}
//strchr(s1, ch) Retorna a posição da primeira ocorrência de ch em s1.
  { if (strchr("alo", 'o'))
 printf("caractere encontrado!\n");}
//strstr(s1, s2) Retorna a posição da primeira ocorrência de s2 em s1.
  {if (strstr("aqui alo", "alo"))
 printf("string encontrada!\n");}



return 0;
  }
