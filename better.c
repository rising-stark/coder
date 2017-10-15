/*permuting my way
STARTING: Saturday September 23, 2017 06:04 AM
END: Sunday October 15, 2017 05:15 PM
*/
#include<stdio.h>
#include<time.h>
#include<string.h>
#include<stdlib.h>
int fact(int n)
{
if(n==1)
return 1;
return(n*fact(n-1));
}
int main()
{
int c,l,i=0,j,k,total,f,f1;
time_t t;
srand((unsigned) time(&t));
char s[256],b;
scanf("%s",s);
l=strlen(s);
char s1[l+1];
total=fact(l);
char r[total][l+1];
char *p=distinct(s,l);
for(i=0;i<strlen(p);i++)
{
f=fact(freq(l,s,p[i]));
total=total/f;
}
free(p);
printf("THE TOTAL NO. OF PERMUTATIONS ARE %d\n",total);
i=0;
strcpy(r[i++],s);
while(i!=total)
{
c=0;strcpy(s1,"");
s1[c++]=s[rand()%l];
s1[c]='\0';
while(c!=l)
{
b=s[rand()%l];
f=freq(l,s,b);
f1=freq(c,s1,b);
for(j=0,k=0;j<c;j++)
{
if((s1[j]!=b) || (f1<f))
k++;
}
if(k==c)
s1[c++]=b;
s1[c]='\0';
}
s1[c]='\0';
for(j=0,k=0;j<i;j++)
{
if(strcmp(r[j],s1)!=0)
k++;
}
if(k==i)
strcpy(r[i++],s1);
}
sort(total,l,r);
return 0;
}
