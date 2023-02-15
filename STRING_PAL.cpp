#include <stdio.h>
#include <string.h>
int main()
{
    char s[25], rev_s[25] = {'\0'};
    int i, l = 0, f = 0;
    printf("Enter a string \n");
    gets(s);
    
    for (i = 0; s[i] != '\0'; i++)
    {
        l++;
    }
    printf("The length of the string '%s' = %d\n", s, l);
    for (i = l - 1; i >= 0 ; i--)
    {
        rev_s[l - i - 1] = s[i];
    }
    for (i = 0; i < l ; i++)
    {
        if (rev_s[i] != s[i])
            f = 1;
    }
    if (f == 0)
       printf ("%s is a palindrome \n", s);
    else
       printf("%s is not a palindrome \n", s);
return 108;
}
