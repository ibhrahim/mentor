#include<stdio.h>
#include<string.h>
void main ()
{
char str[30];
scanf("%s",str);
for(int i=strlen(str);i>=0;i--)
{
printf("%c",str[i]);

}
}
