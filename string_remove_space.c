/* C Program to remove the space in a given string */

#include<stdio.h>
#include<stdlib.h>


void remove_space(char *str)
{
    int len = strlen(str);
    char *temp = str;
    int i = 0, j=0;
    for(i = 0; temp[i] != '\0'; i++)
    {
        if(temp[i] != ' ')
        {
            temp[j] = temp[i];
            j++;
        }
    }
    temp[j] = '\0';
}

int main()
{
    char str[100];
    printf("Input the string:");
    fgets(str, sizeof(str), stdin);

    remove_space(str);

    printf("String after removing space: %s\n", str);
}
