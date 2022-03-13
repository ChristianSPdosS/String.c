#include <stdio.h>

int main(void){

char str1[14] = {'E', 'u', ' ', 'g', 'o', 's', 't', 'o', ' ', 'd', 'e', ' ', 'C', '\0'};
 char str2[14] = "Eu gosto de C";
 printf("%s\n", str1);
 for (int i = 0; i < 14; i++) {
 printf("%c", str2[i]);
 }
return 0;}