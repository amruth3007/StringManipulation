#include<stdio.h>
#include<stdlib.h>
void size(char *s);
int main()
{
char str[100];
printf("Enter the string:");
gets(str);
size(str);
getch();
return 0;
}
void size(char *str)
{
    int length=0;
    while(str[length] != '\0')
    {
        length++;
    }
    printf("\n Length of the string is :%d",length);

}

