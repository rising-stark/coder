#include<stdio.h>
#include<string.h>
void sort(int n,int l,char a[n][l+1])
{
int i,j,k,c;
char t[l+1],max[l+1];
for(i=0;i<n;i++)
{
for(j=0,c=0,k=n-i-1,max[l+1]='\0',strcpy(max,a[0]);j<=k;j++)
{
if(strcmp(a[j],max)>0)
{
strcpy(max,a[j]);
c=j;
}}
strcpy(t,a[k]);
strcpy(a[k],max);
strcpy(a[c],t);
}
//printf("SORTED ARRAY\n");
for(i=0;i<n;i++)
printf("%s\n",a[i]);
}
