#include<stdio.h>
#include<stdlib.h>
void strrchr(char *str,char *chr);
int main()
{
char str[100],chr[1];
printf("Enter the string :");
gets(str);
printf("Enter the character to be searched:");
scanf("%c",chr);
strrchr(str,chr);
getch();
return 0;
}
void strrchr(char *str,char *chr)
{
    int i=0,j;
    while(str[i] != '\0')
    {
        if(str[i] == chr[0])
        {
   j=i;
    }
    i++;
} printf("Given character is at the position %d",j+1);

}

