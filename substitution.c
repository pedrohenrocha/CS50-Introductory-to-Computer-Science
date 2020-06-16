#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    // Checking if was inputed only one key
    if (argc != 2)
    {
        printf("Error! Input only one key.\n");
        return 1;
    }
    // Checking if was inputed 26 characters in the key
    else if (strlen(argv[1]) != 26)
    {
        printf("Error! Key must contain 26 characters.\n");
        return 1;
    }
    else
    {
        // Checking if there are only alphabetics characters in the key
        for (int i = 0; i < 26; i++)
        {
            if (isalpha(argv[1][i]) == 0)
            {
                printf("Error! Only alphabetics characters are accepted.\n");
                return 1;
            }
            int k = 0;
            for (int j = 0; j < 26; j++)
            {
                // Checking if there are repeated characters
                if (tolower(argv[1][i]) == tolower(argv[1][j]))
                {
                    k = k + 1;
                    if (k >= 2)
                    {
                        printf("Error! The key's characters mustn't repeat.\n");
                        return 1;
                    }
                }
            }
        }
    }

    // Asking for user the word he want encripty
    string plain = get_string("Plaintext: ");

    // Letters for comparision
    string upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string lower = "abcdefghijklmnopqrstuvwxyz";
    
    printf("ciphertext: ");
    
    for (int i = 0; i < strlen(plain); i++)
    {
        // Comparing the plaintext with uppercase
        if (isupper(plain[i]) != 0)
        {
            for (int j = 0; j < 26; j++)
            {
                if (plain[i] == upper[j])
                {
                    printf("%c", toupper(argv[1][j]));
                }
            }
        }
        // Comparing plaintext with lowercase
        else if (islower(plain[i]) != 0)
        {
            for (int k = 0; k < 26; k++)
            {
                if (plain[i] == lower[k])
                {
                    printf("%c", tolower(argv[1][k]));
                }
            }
        }
        // "else" that garantee not changes in spaces and comma
        else
        {
            printf("%c", plain[i]);
        }
    }
    printf("\n");
}