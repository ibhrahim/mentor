#include<stdio.h>
#include <string.h>
struct str
{
    char cont[100];
}a,b;
void main()
{
    int i;
    printf("enter a string 1\n");
    scanf("%s",a.cont);
    printf("enter a string 2\n");
    scanf("%s",b.cont);
   // printf("%d",strcmp(a.cont,b.cont));
    sort(a.cont);
    sort(b.cont);
    if(strcmp(a.cont,b.cont))
     {
         printf("it is not anagram of each other");
     }
     else
     printf("it is anagram of each other");
}
void sort(char a[])
{
   char temp;

   int i, j;
   int n = strlen(a);
   for (i = 0; i < n-1; i++) {
      for (j = i+1; j < n; j++) {
         if (a[i] > a[j]) {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
         }
      }
   }
}
