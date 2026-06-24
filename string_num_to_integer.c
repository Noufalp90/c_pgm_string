#include<stdio.h>
#include <stdbool.h>

/* Remove spaces from the input string.
 * input: "    123" output: "123"
 */
void remove_leading_spaces(char *s)
{
    int i = 0;
    for(i=0; s[i] == ' ';i++)
    {
        s++;
    }
}

/* Extract number from the input string 
 * e.g. Input: "123uyt", output: "123"
 */

void extract_number_from_string(char *s)
{
    int i=0;
    while(s[i] != '\0')
    {
        if(s[i] == '-')
        {
            i++;
        }
        else if(s[i] >= '0' && s[i] <= '9')
        {
            i++;
        }
        else
        {
            s[i] = '\0';
            break;
        }
    }
}

/* This API converts string number to integer. 
 * e.g. "123" -> 123
 * "-123" -> -123
 */
int convert_string_to_integer(char *s)
{
    char *ptr = NULL;
    int neg_flg = 0;

    int result = 0; 
    int i = 0;
    printf("String number:%s\n", s);
    if(!(s[0] >= '0' && s[0] <= '9'))
    {
        printf("Number string starts with words\n");
        return 0;
    }
    remove_leading_spaces(s);
    extract_number_from_string(s);

    ptr = s;
    printf("Updated string:%s\n", ptr);
    i=0;
    while(ptr[i] != '\0')
    {
        if(ptr[i] == '-')
        {
            i++;
            neg_flg = 1;
        }
        else
        {
            result = result * 10 + (ptr[i] - 48); //48 -> ascii of '0'
            i++;
        }     
    }
    if(neg_flg)
    {
        result = result * -1; 
    }
    return result;
}

int main()
{
    char str_num[32];
    printf("Enter the number:");
    scanf("%s",str_num);
    printf("Output:%d\n",convert_string_to_integer(str_num));
}
