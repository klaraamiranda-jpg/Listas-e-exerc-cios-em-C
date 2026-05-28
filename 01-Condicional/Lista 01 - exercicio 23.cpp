#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int main() {
   
    char frase [100];
    int aula = 0;

    printf("Digite uma frase: ");
    scanf(" %[^\n]",frase);
	
	for (int i = 0; i < strlen(frase); i++) 
	{
        if (frase[i] == 'a' && frase[i+1] == 'u' && frase[i+2] == 'l' && frase[i+3] == 'a')
        
        aula++;
    }

  	 printf("A quantidade de vezes em que aparece a palavra AULA: %d\n",aula);
   
    system("PAUSE");
     return 0;
 }
