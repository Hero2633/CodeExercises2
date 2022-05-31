#include <stdio.h>
void f(int n,char a,char b,char c)
{ 
if(n==1)
{
printf("´Ó%c->%c.\n",a,c);
}
if(n>1)
{


f(n-1,a,c,b);
printf("´Ó%c->%c.\n",a,c);
f(n-1,b,a,c);
}

}
int main()
{
char a='A';
char b='B';
char c='C';
int n=3;
scanf("%d",&n);
f(n,a,b,c);


return 0;
}