#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
    string s = get_string("Text:"); // pegando o texto
    int num_words, num_sentences, num_letters; // variaveis
    num_words = num_sentences = num_letters = 0; // zerando variaveis
    for (int i = 0, len = strlen(s); i < len; i++)
    {
        if (isalpha(s[i])) //contando letras
        
            num_letters++;
            
        if ((i ==0 && s[i] != ' ') || (i != len - 1 && s[i] == ' ' && s[i + 1] != ' ')) //contando palavras
        
            num_words++;
            
        if (s[i] == '.' || s[i] == '?' || s[i] == '!') //contando sentenças
        
            num_sentences++;
            
    }
    float L = (num_letters / (float) num_words) * 100; //valor para L
    float S = (num_sentences / (float) num_words) * 100; //valor para S 
    int index = round(0.0588 * L - 0.296 * S - 15.8); //index com arredondamento
    if (index < 1)
    
        printf("Before Grade 1\n");
        
    else if (index >= 16)
    
        printf("Grade 16+\n");
        
    else
    
        printf("Grade %i\n", index);
        
}
