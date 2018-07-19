#include<stdio.h>
#include<stdlib.h>
int astrcat(char *str1,char *str2);
int asize(char *str1);
int main()
{
char str1[100],str2[100];
printf("Enter the string 1:");
gets(str1);
printf("Enter the string 2:");
gets(str2);
astrcat(str1,str2);
printf("\n Concated string is %s,",str1);
getch();
return 0;
}
int astrcat(char *str1,char *str2)
{
    int i,j;
    i=asize(str1);

    for(j=0;str2[j]!='\0';j++)
    {
        str1[i]=str2[j];
        i++;
    }
    str1[i]='\0';
    return (str1);
}
int asize(char *str1)

{
    int length=0;
    while(str1[length]!='\0')
    {

        length++;
    }
    return length;
}
