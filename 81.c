#include<ctype.h>
#include<string.h>
int main ()
{
    char s[100];
    int i,j;
    printf("enter the num :");
    gets(s);
    for(i=0;s[i];i++)
    {
        if(s[i]>=65 && s[i]<=90)
          s[i]+=32;
     }
    printf("\n %s string in lowercase",s);
    for(j=0,s[j];j++)
    {
        if(s[j]>=97 && s[j]<=122)
         s[j]-=32;
    }
    printf("\n %s in uppercase",s );
    getchar();
    
}
