// Decrypt
#include <stdio.h>
int main()

{
    char msg[100], n;
    int i, key;
    printf("\nEnter a string: ");
    gets(msg);
    printf("\nEnter number of shifts: ");
    scanf("%d", &key);
    for (i = 0; msg[i] != '\0'; ++i)
    {
        n = msg[i];
        if (n >= 'a' && n <= 'z')
        {
            n = n - key;
            if (n < 'a')
            {
                n = n + 'z' - 'a' + 1;
            }
            msg[i] = n;
        }
        else if (n >= 'A' && n <= 'Z')
        {
            n = n - key;
            if (n < 'A')
            {
                n = n + 'Z' - 'A' + 1;
            }
            msg[i] = n;
        }
    }
    printf("\nDecrypted Text: %s \n", msg);
    return 0;
}