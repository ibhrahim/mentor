#include<stdlib.h>
#include<stdio.h>
#include<string.h>
struct str
{
    char a[100]
}st[10];
int j;
char great[100]=" ";
char low[100]=" ";
void main ()
{
    struct str st[10];
    char d[100];
    printf("enter the input\n");
    for(int i=0;strcmp(d,"done")!=0;i++)
    {
        scanf("%s",st[i].a);
        strcpy(d,st[i].a);

        j=i;
    }
    strcpy(low,st[0].a);
    printf("\nlowest is%s",low);
    printf("elements are\n");
    for (int i=0;i<j;i++)
    {
        printf("%s ",st[i].a);
        if(atoi(st[i].a)>atoi(great))
        {

            strcpy(great,st[i].a);
        }
        if(atoi(st[i].a)<atoi(low))
        {
            strcpy(low,st[i].a);
        }

    }printf("\ngreatest is%s",great);
     printf("\nlowest is%s",low);

}

