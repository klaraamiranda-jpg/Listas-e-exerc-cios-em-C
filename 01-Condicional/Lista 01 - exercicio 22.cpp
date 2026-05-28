#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int main() {
   
    char frase [100];
    int palavras = 1;

    printf("Digite uma frase: ");
    scanf(" %[^\n]",frase);
	
	for (int i = 0; i < strlen(frase); i++) 
	{
        if (frase[i] == ' ')
        
        palavras++;
    }
    
  	 printf("A frase tem: %d palavras\n",palavras);
   
    system("PAUSE");
     return 0;
 }
   
