#include<stdio.h>

void StrRevX(char *str)
{
    char *end = str;
    char temp;

    if (str == NULL)
    {
        return;
    }

    while (*end != '\0')
    {
        end++;
    }
    end--;

    while (str < end)
    {
        temp = *str;
        *str = *end;
        *end = temp;

        str++;
        end--;
    }
    
}

int main()
{
    char arr[20];

    printf("Enter string: \n");
    scanf("%[^'\n']s",arr);

    StrRevX(arr);

    printf("Modified string is: %s\n");

    return 0;
}