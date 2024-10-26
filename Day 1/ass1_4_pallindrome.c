#include <stdio.h>
int main()
{
    int n,c=0;
    printf("Enter your array size");
    scanf("%d", &n);
   
    char str[n];
    char nstr[n];
    scanf("%s", str);
     int i;
     for (i = 0; str[i] != '\0'; i++){
        c++;
    }
   
    int count = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        nstr[i] = str[c-i-1];
    }
    nstr[c]='\0';
    for (i = 0; str[i] != '\0'; i++)
    {
        if (nstr[i] == str[i])
        {
            count++;
        }
    }
    if (count == c)
    {
        printf("This string is pallindrome");
    }
    else
    {
        printf("This string is not pallindrome");
    }
}