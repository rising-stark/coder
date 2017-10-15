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
int c,l,i=0,j,k,total,f,z=0,f1;
time_t t;
size_t sz;
srand((unsigned) time(&t));
char s[256],b;
scanf("%s",s);
l=strlen(s);
char s1[l+1];
total=fact(l);
//n=fun(l,s);
char r[total][l+1];
/*another method for permuting is
instead of making an array of strings 
better make a 2D array of numbers and 
then each row can be treated as a single
number and checked with all other rows 
of the array for distinct permutations
*///printf("HELLO\n");
char *p=distinct(s,l);
//printf("HELLO\n");
//printf("%s\n",p);
for(z=0;z<strlen(p);z++)
{
f=fact(freq(l,s,p[z]));
//printf("f=%d total=%d\n",f,total);
total=total/f;
//printf("total=%d\n",total);
}
free(p);
printf("THE TOTAL NO. OF PERMUTATIONS ARE %d\n",total);
int a[l];
strcpy(r[i++],s);
//printf("%s\n",r[i-1]);
while(i!=(total))
{
c=0;strcpy(s1,"");
//printf("my sample string %s\n",s1);
s1[c++]=s[rand()%l];
//int z;
//for(z=1; z<l1; z++)
s1[c]='\0';
int l1 = strlen(s1);
//printf("random character %c and c=%d and l1=%d\n",s1[c-1],c,l1);
//printf("my sample string %s\n",s1);
while(c!=l)
{
b=s[rand()%l];
f=freq(l,s,b);
f1=freq(c,s1,b);/*
printf("b= %c f=%d f1=%d and c=%d\n",b,f,f1,c);
z++;
if(z==50)
return 0;*/
for(j=0,k=0;j<c;j++)
{
if((s1[j]!=b) || (f1<f))
k++;//printf("j=%d  k=%d  f1=%d\n",j,k,f1);}
}
if(k==c)
s1[c++]=b;
s1[c]='\0';
//printf("my sample string %s\n",s1);
}
s1[c]='\0';
//printf("test string %s\n",s1);
for(j=0,k=0;j<i;j++)
{
//printf("string array %s and j=%d\n",r[j],j);
if(strcmp(r[j],s1)!=0)
k++;//printf("k=%d and i=%d\n",k,i);
}
if(k==i)
strcpy(r[i++],s1);//printf("this string copied %s\n",r[i-1]);}
}
sort(total,l,r);
return 0;
}
