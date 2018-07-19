#include<stdio.h>
#include<stdlib.h>
void strchr(char *str,char *chr);
int main()
{
char str[100],chr[1];
printf("Enter the string :");
gets(str);
printf("Enter the character to be searched:");
scanf("%c",chr);
strchr(str,chr);
getch();
return 0;
}
void strchr(char *str,char *chr)
{
    int i=0;
    while(str[i] != '\0')
    {
        if(str[i] == chr[0])
        {
    printf("Given character is at the position %d",i+1);
    break;
    }
    i++;
}
}
