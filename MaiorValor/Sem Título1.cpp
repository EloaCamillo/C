#include<stdlib.h>
#include<stdio.h>
void leitura(int *p);
void maior(int *m);
main(){
	int p[10];
	leitura(p);
	maior(p);
	system("pause");
	return 0;
	
}
void leitura(int *p){
	int i;
	for(i=0;i<10;i++,p++){
		printf("Digite um numero\n");
		scanf("%d", p);
	}
}
void maior(int *m){
	int a=*m,i;
	for(i=0;i<10;i++,m++)
	{
		if(*m>a)
		a=*m;
	}
	printf("O maior valor e %d\n", a);
}
