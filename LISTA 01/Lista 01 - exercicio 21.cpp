#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int main() {
   
    char frase [100];
    int vogal = 0;

    printf("Digite uma frase: ");
    scanf(" %[^\n]",frase);
   
    for (int i = 0; i < strlen(frase); i++) 
	{
        if (frase[i] == 'a' || frase[i] == 'A' ||
        frase[i] == 'e' || frase[i] == 'E' ||
        frase[i] == 'i' || frase[i] == 'I' ||
        frase[i] == 'o' || frase[i] == 'O' ||
        frase[i] == 'u' || frase[i] == 'U')
        
        vogal++;
    }
    
  	 printf("A frase tem: %d vogais\n",vogal);
   
    system("PAUSE");
     return 0;
 }
