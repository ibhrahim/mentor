#include<stdio.h>

int strleni(char a[])
{

    int i=0;
    while(a[i]!='\0')
    {
        i++;
    }
    return i;

}
int strcmp(char s1[],char s2[])
{   int i=0,k;
    if (strlen(s1)>strlen(s2))
    {
        k=strlen(s1);
    }
    else
        k=strleni(s1);
for (i=0;i<k;i++)
    {

    if (s1[i]<s2[i])
    {
        return -1;
    }
     if (s2[i]>s1[i])
        {
            return 1;
        }
    else{
        return 0;
    }}
}
int main ()
{

    char a [20]="india",v[]="kjn";
    struct emp {int eid; char name[20]};
    printf("%s",a);
    printf("\n length %d",strleni(a));
    if(strcmp(a,v))
    printf("\n not equal");
    else
        printf("equal");

}
