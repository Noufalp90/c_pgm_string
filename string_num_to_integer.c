#include<stdio.h>

/* This API converts string number to integer. 
 * e.g. "123" -> 123
 */
int convert_string_to_integer(char *s)
{
	char *ptr = s;
    printf("String number: %s\n", ptr);
    int result = 0; 
    int i = 0;
    while(ptr[i] != '\0')
    {
        result = result * 10 + (ptr[i] - 48); //48 -> ascii of 0
        i++;
    }
	return result;
}


int main()
{
    char str_num[32];
    printf("Enter the number:");
    scanf("%s",str_num);
    printf("Output: %d\n",convert_string_to_integer(str_num));
}
