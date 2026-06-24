#include<stdio.h>

/*****
Program to find out the common prefix from the list of strings 
e.g. "grace", "graceful", "gracefulb", "gracefully", "gracefulness"
Longest common prefix -> grace
******/
unsigned int *find_common_prefix(unsigned char *arr[], int n, char *result)
{
    unsigned char *first = arr[0];
    int i=0, j=0;
    for(i = 0; first[i] != '\0'; i++)
    {
        char ch = first[i];
        for(j = 0; j< n; j++)
        {
            if((arr[j][i] == '\0') || (arr[j][i] != ch))
            {
                result[i] = '\0';
                return 0;
            }
            result[i] = ch;
        }
    }
    return 0;
}

int main()
{
    unsigned char *arr[] = 
    {
        "graceful",
        "gracefulb",
        "grace",
        "gracefully",
        "gracefulness"
    };
    int result[100];
    find_common_prefix(arr, 5, result);
    printf("Longest common prefix is %s\n", result);
}
