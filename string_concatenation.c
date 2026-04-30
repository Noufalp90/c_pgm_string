/* Concatenate two strings */

#include<stdio.h>

void str_concat(unsigned char *str1, unsigned char *str2)
{
	str1 = str1+ strlen(str1);
	*str1++ = ' ';
	while(*str2 != '\0')
	{
		*str1++ = *str2++;
	}
	*str1 = '\0';
}

int main()
{
	unsigned char main_str[1024] = "Hello";
	unsigned char str[] = "World";
	
	str_concat(main_str, str);
	
	printf(" Concatenated string: %s\n", main_str);	
}
