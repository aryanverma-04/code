#include <iostream>
#include <string>
using namespace std;
// construct the 5x5 matrix 'M' using the key 'K'
void constructMatrix(string K, char M[5][5])
{
    char ch;
    bool inMatrix[26];
    int x, y;
    x = y = 0;
    for (int i = 0; i < 26; i++)
        inMatrix[i] = false;
    // fill all the characters of K in the matrix
    for (int i = 0; i < K.length(); i++)
    {
        ch = K[i];
        if (ch == 'J')
            ch = 'I';
        if (!inMatrix[ch - 'A'])
        {
            M[x][y] = ch;
            inMatrix[ch - 'A'] = true;
            y++;
            if (y == 5)
            {
                x++;
                y = 0;
            }
        }
    }
    // fill the remaining characters
    for (int i = 0; i < 26; i++)
    {
        if (!inMatrix[i])
        {
            if (i + 'A' == 'J')
                continue;
            M[x][y] = (char)(i + 'A');
            y++;
            if (y == 5)
            {
                x++;
                y = 0;
            }
        }
    }
}
// update 'PT' to add bogus letter 'X' after duplicates or at the end if no pairing can be done
string update(string PT)
{
    string N = "";
    for (int i = 0; i < PT.length() - 1; i++)
    {
        N = N + PT[i];
        if (PT[i] == PT[i + 1])
            N = N + 'X';
    }
    N = N + PT[PT.length() - 1];
    if (N.length() % 2 != 0)
        N += 'X';
    return N;
}
// find the location of the character 'X' in the matrix 'M' and update 'L' with its location
void find(char M[5][5], char X, int L[2])
{
    if (X == 'J')
        X = 'I';
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (M[i][j] == X)
            {
                L[0] = i;
                L[1] = j;
            }
        }
    }
}
// return the corresponding cipher character pair for the 'PT' character pair 'X' and 'Y'
string findPair(char M[5][5], char X, char Y)
{
    string P = ""; // pair
    int L1[2] = {-1, -1};
    int L2[2] = {-1, -1};
    find(M, X, L1);
    find(M, Y, L2);
    // if both X and Y are in the same row
    if (L1[0] == L2[0])
    {
        P += M[L1[0]][(L1[1] + 1) % 5];
        P += M[L2[0]][(L2[1] + 1) % 5];
    }
    // if both X and Y are in the same column
    else if (L1[1] == L2[1])
    {
        P += M[(L1[0] + 1) % 5][L1[1]];
        P += M[(L2[0] + 1) % 5][L2[1]];
    }
    // if both X and Y are in different locations
    else
    {
        P += M[L1[0]][L2[1]];
        P += M[L2[0]][L1[1]];
    }
    return P;
}
int main()
{
    cout << "Name = Aryan verma" << endl
         << "UID = 20BCS3651" << endl;
    string PT;      // plain text
    string K;       // key
    string CT = ""; // cipher text
    cout << "Plain text = ";
    cin >> PT;
    cout << "Key = ";
    cin >> K;
    char M[5][5]; // matrix
    constructMatrix(K, M);
    PT = update(PT);
    for (int i = 0; i < PT.length(); i += 2)
        CT += findPair(M, PT[i], PT[i + 1]);
    cout << "Cipher text = " << CT << endl;
}