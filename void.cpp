#include<stdio.h>

using namespace std;
void mayuscula()
{
char a;
scanf("%c",a);
a+=32;
printf("%c",a);
mayuscula();
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
char invertida(char *s)
{
char *p;
p=s;
if (*(s+1)=='\0')
{
  printf("%c",*s);
  return '0';
}
s++;
invertida(s);
printf("%c",*p);
return '0';
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
funcion();
}
