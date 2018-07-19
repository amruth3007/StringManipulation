
#include<stdio.h>
#include<stdlib.h>
int strcmp(char *s1,char *s2);
int main()
{
char s1[100],s2[100];
int compare;
printf("Enter the string 1:");
scanf("%s",s1);
printf("Enter the string 2:");
scanf("%s",s2);
compare=strcmp(s1,s2);
if(compare == 1)
    printf("Both are equal");
else
    printf("Both are not equal");
getch();
return 0;
}
int strcmp(char *s1,char *s2)
{
     int i=0,flag=0;
     while((s1[i] != '\0')&&(s2[i] != '\0'))
     {
         if(s1[i] != s2[i])
         {
             flag=1;
             break;
         }
         i++;
     }
     if((flag == 0)&&(s1[i] == '\0')&&(s2[i] == '\0'))
       {
          return 1;
       }
     else
      {
          return 0;
      }
}



