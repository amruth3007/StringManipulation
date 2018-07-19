#include<stdio.h>
#include<stdlib.h>
int strcmpi(char *s1,char *s2);
int main()
{
char s1[100],s2[100];
int compare;
printf("Enter the string 1:");
gets(s1);
printf("Enter the string 2:");
gets(s2);
compare=strcmpi(s1,s2);
if(compare==1)
    printf("Both are equal");
else
    printf("Both are not equal");
getch();
return 0;
}
int strcmpi(char *s1,char *s2)
{
     int i=0,flag=0;
     while((s1[i] != '\0')&&(s2[i] != '\0'))
     {
         if(toupper(s1[i]) != toupper(s2[i]))
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


