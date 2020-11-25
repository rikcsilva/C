#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>
bool check_valid_key(string s);

int main(int argc, string argv[])
{
    if (argc != 2 || !check_valid_key(argv[1])) //if argc dif de 2 ou !checkvalidkey
    {
        printf("Usage: ./caesar key\n"); //how to use message
        return 1;
    }
    int key = atoi(argv[1]); // convert a str element to a integer
    
    string plaintext = get_string("plaintext: "); //input
    
    printf("ciphertext: ");
    for (int i = 0, len = strlen(plaintext); i < len; i++)
    {
        char c = plaintext[i];
        if (isalpha(c))
        {
            char m = 'A'; //modified char 
            if (islower(c))
            
                m = 'a'; //modified char
                
            printf("%c", (c - m + key) % 26 + m); // '%' -> modulo (resto divisão)
        }
        else
        
            printf("%c", c);
            
    }
    printf("\n");
}

bool check_valid_key(string s)
{
    for (int i = 0, len = strlen(s); i < len; i++)
        if (!isdigit(s[i]))
        
            return false;
            
    return true;
}
