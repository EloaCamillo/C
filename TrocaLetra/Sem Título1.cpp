#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

void aloca(char **p,char *aux);
void mostra(char *p);
void troca(char *p);

main()
{
  char *nome=NULL,aux[20];

  setlocale(LC_ALL, "Portuguese");

  printf("Nome: ");
  gets(aux);
  fflush(stdin);
  aloca(&nome,aux);
  mostra(nome);
  troca(nome);
  mostra(nome);
  printf("\n\n");
  system("pause");
}


void aloca(char **p,char *aux)
{
  int tam;

  tam=strlen(aux);

  if((*p=(char*)realloc(*p,(tam+1)*sizeof(char)))==NULL)
  {
    printf("\nErro de alocacao");
      exit(1);
  }
  strcpy(*p,aux);
}

void mostra(char *p)
{
  printf("\nEndereço: %u\tNome: %s",p , p);
}

void troca(char *p)
{
  int tam, i;
  char letra;

  tam=strlen(p);

  for(i=0;i<tam/2;i++)
  {
    letra=*(p+i);
    *(p+i)=*(p+tam-1-i);
    *(p+tam-1-i)=letra;
  }
}



