#include <stdio.h>

int present_or_not(char *st, char word);

int main()
{
    char st[] = "Eliteee";
    char word;
    printf("Enter the character You want to search in ELiteee: ");
    scanf("%c", &word);
    int count = present_or_not(st, word);
    if (count > 0)
    {
        printf("Present");
    }
    else
    {
        printf("Absent");
    }
    return 0;
}

int present_or_not(char *st, char word)
{
    char *ptr = st;
    int count = 0;
    for (int i = 0; *ptr != '\0'; i++)
    {
        if (*ptr == word)
        {
            count++;
        }

        ptr++;
    }
    return count;
}