#include <stdio.h>
#include<string.h>
#include<conio.h>

void imprimeinvertido(char v[]);
	
	int main ()
	{
		char string[100];
	printf("Digite uma frase\n");
	gets(string);
	imprimeinvertido(string);
	getch();
	return 0;
}
void imprimeinvertido(char v[]){
	int i;
	printf("Frase invertida\n");
	for(i=strlen(v)-1;i>=0;i--){
		printf("%c",v[i]);
	}
}

