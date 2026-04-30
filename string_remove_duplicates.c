/* program to delete the duplicate character in the string */


#include<stdio.h>

void remove_dupl_chars(unsigned char *str)
{
	int seen[256] = {0};
	int i = 0;
	int j = 0;
	for (i = 0 ; str[i] != '\0'; i++)
	{
		if(seen[str[i]] == 0)
		{
			str[j] = str[i];
			j++;
			seen[str[i]] = 1;			
		}
	}
	str[j] = '\0';
}

int main()
{
	unsigned char str[1024];
	
	printf("Provide the string\n");
	scanf("%s", str);
	
	remove_dupl_chars(str);
	
	printf("Updated string: %s\n", str);
}
