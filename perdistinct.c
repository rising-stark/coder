#include<stdio.h>
#include<stdlib.h>
char *distinct(char*a,int n)
//main()
{
//char a[]="eeffddss";
//int n=strlen(a);
char *d=(char*)malloc(sizeof(char)*n);
char *b=(char*)malloc(sizeof(char)*n);
int c,k=0,m,i,j;
//printf("\nARRAY OF ONLY REPEATED ELEMENTS\n");
for(i=0;i<n;i++)
{
for(j=0,c=0;j<n;j++)
{
if(a[i]==a[j])
c++;
if(c>1)
{
b[k++]=a[i];
//printf("%c ",b[k-1]);
break;
}}}
//printf("\nARRAY OF distinct REPEATED ELEMENTS\n");
c=0;
d[c++]=b[0];
//printf("%c ",d[c-1]);
for(i=0;i<k;i++)
{
for(j=0,m=0;j<c;j++)
{
if(d[j]!=b[i])
m++;
}
if(m==c){
d[c++]=b[i];
//printf("%c ",d[c-1]);
}}
d[c]='\0';
//p=d;
//printf("%s\n",d);
//printf("\n");
return d;
}
