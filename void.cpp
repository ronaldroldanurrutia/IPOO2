#include<stdio.h>

using namespace std;
char mayuscula(char a)
{
  a+=32;
  return a;
}
float recibir(char *s)
{
  float d=0,e;
  while(*s!='.')
  {
    e=(*s-'0');
    d=(d*10)+e;
    s++;
  }
  s++;
  float b,c=10,suma=0;
  while(*s!='e')
  {
    b=(*s-'0');
    suma+=(b/c);
    c*=10;
    s++;
  }
  s+=2;
  d+=suma;
  int elemento=0;
  while(*s!='\0')
  {
    elemento=(elemento*10)+(*s-'0');
    s++;
  }
  for(int i=0;i<elemento;i++)
  {
    d/=10;
  }
  printf("%f",d);
  }
void inversa(char *p,int numero,int inicio)
{
    char q;
    if(inicio>=numero)
    {
        return ;
    }
    q=*(p+inicio);
    *(p+inicio)=*(p+numero);
    *(p+numero)=q;
    inversa(p,numero-1,inicio+1);
}
int alejado(char *s,char b)
{
int posicion=-1;
char *p;
p=s;
while(*p!='\0')
{
  if(*p==b)
  {
    posicion=p-s;
  }
  p++;
}
return posicion;
}
main()
{
recibir("10202.123e-2");
invertida("Hola");
alejado("Cienciadelacomputacion",'o');
funcion('a');
}
