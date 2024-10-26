#include <stdio.h>

int main()
{
    char str[100] = "Suvankar";
    char str1[10] = "Pramanik";
    int i = 0;
    int is_same = 1; // Flag to track if the strings are the same

    // Compare str and str1
    while (str[i] != '\0' && str1[i] != '\0')
    {
        if (str[i] != str1[i])
        {
            is_same = 0; // Set flag to 0 if any characters do not match
            break;       // Exit the loop early if there's a mismatch
        }
        i++;
    }

    // Check if both strings ended at the same time
    if (is_same && str[i] == '\0' && str1[i] == '\0')
    {
        printf("The strings are the same\n");
    }
    else
    {
        printf("The strings are not the same\n");
    }

    // Reset i and concatenate str1 to str
    i = 0;
    int j = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    while (str1[j] != '\0')
    {
        str[i] = str1[j];
        i++;
        j++;
    }
    str[i] = '\0'; // Null-terminate the concatenated string
    printf("Concatenated string: %s\n", str);

    // Copy str to nstr (ensure nstr is large enough)
    char nstr[100];
    for (i = 0; str[i] != '\0'; i++)
    {
        nstr[i] = str[i];
    }
    nstr[i] = '\0'; // Null-terminate the copied string

    printf("New copy string is: %s\n", nstr);
    return 0;
}
