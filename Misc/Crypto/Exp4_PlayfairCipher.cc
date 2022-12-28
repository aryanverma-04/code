#include <stdio.h>
#include <string.h>
char table[5][5];
void create_table(char *key)
{
    char tmp[25] = "IJ";
    char letters[] = "ABCDEFGHIKLMNOPQRSTUVWXYZ";
    int i, j, x = 0;
    int n = strlen(key);
    // replace all occurances of J with I
    for (i = 0; i < n; i++)
    {
        if (key[i] == tmp[1])
        {
            key[i] = tmp[0];
        }
    }
    // add letters of key
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 25; j++)
        {
            if (key[i] == tmp[j])
            {
                break;
            }
        }
        if (j == 25)
        {
            tmp[x++] = key[i];
        }
    }
    // add remaining letters
    for (i = 0; i < 26; i++)
    {
        for (j = 0; j < 25; j++)
        {
            if (letters[i] == tmp[j])
            {
                break;
            }
        }
        if (j == 25)
        {
            tmp[x++] = letters[i];
        }
    }
    // make 2D table
    x = 0;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            table[i][j] = tmp[x];
            x++;
        }
    }
}
void encrypt(char *str, char *key, char *bogus)
{
    int ar, ac, br, bc;
    create_table(key);
    int s = strlen(str);
    int x = 0;
    int len;
    if (s % 2 == 0)
    {
        len = s / 2;
    }
    else
    {
        len = (s / 2) + 1;
    }
    char pair[2];
    // replace all occurances of J with I
    char tmp[25] = "IJ";
    for (int i = 0; i < s; i++)
    {
        if (str[i] == tmp[1])
        {
            str[i] = tmp[0];
        }
    }
    // encrypt pairs
    for (int i = 0; i < len; i++)
    {
        if (str[x] == str[x + 1])
        {
            pair[0] = str[x++];
            pair[1] = bogus[0];
        }
        else
        {
            pair[0] = str[x++];
            pair[1] = str[x++];
        }
        if (!pair[1])
        {
            pair[1] = bogus[0];
        }
        for (int m = 0; m < 5; m++)
        {
            for (int n = 0; n < 5; n++)
            {
                if (table[m][n] == pair[0])
                {
                    ar = m;
                    ac = n;
                }
                if (table[m][n] == pair[1])
                {
                    br = m;
                    bc = n;
                }
            }
        }
        if (ar == br)
        {
            if (ac != 4)
                printf("%c", table[ar][ac + 1]);
            else
                printf("%c", table[ar][0]);
            if (bc != 4)
                printf("%c", table[br][bc + 1]);
            else
                printf("%c", table[br][0]);
        }
        else if (ac == bc)
        {
            if (ar != 4)
                printf("%c", table[ar + 1][ac]);
            else
                printf("%c", table[0][ac]);
            if (br != 4)
                printf("%c", table[br + 1][bc]);
            else
                printf("%c", table[0][bc]);
        }
        else
        {
            printf("%c", table[ar][bc]);
            printf("%c", table[br][ac]);
        }
    }
}
int main()
{
    // replace str with plain text
    char str[] = "RAVAN";
    // replace key with encryption key
    char key[] = "SRILANKA";
    // replace bogus with bogus letter
    char bogus[] = "X";
    int i, j, x = 0;
    printf("\nPlain Text: %s", str);
    printf("\nKey: %s", key);
    printf("\nBogus Letter: %s", bogus);
    printf("\nEncrypted Text: ");
    encrypt(str, key, bogus);
    return 0;
}