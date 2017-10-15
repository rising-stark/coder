#include<stdio.h>
int freq(int l,char a[l],char b)
{
int i,j,c;
for(j=0,c=0;j<l;j++)
{
if(b==a[j])
c++;
}
return c;
}
