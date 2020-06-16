#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>

// declaring the functions defined below
float count_spaces(string text);
float count_letters(string text);
float count_sentences(string text);

int main(void)
{
    // Ask for user the text
    string text = get_string("Text: ");
    
    // Calculating the index using Coleman-Liau
    float l = ((count_letters(text)) / (count_spaces(text) + 1)) * 100;
    float s = ((count_sentences(text)) / (count_spaces(text) + 1)) * 100;
    int index = round((0.0588 * l - 0.296 * s - 15.8));
    
    // Print the result
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
}

// Definition of the functions used

// Counting how many spaces are in the text

float count_spaces(string text)
{
    float spaces = 0;
    for (int i = 0; i < strlen(text); i++)
        if (text[i] == ' ')
        {
            spaces++;
        }
    return spaces;
}

// Counting how many letters are in the text

float count_letters(string text)
{
    float letters = 0;
    for (int i = 0; i < strlen(text); i++)
        if ((text[i] >= 65 & text[i] <= 90) || (text[i] >= 97 & text[i] <= 122))
        {
            letters++;
        }
    return letters;
}

// Counting how many sentences are in the text 
   
float count_sentences(string text)
{
    float sentences = 0;
    for (int i = 0; i < strlen(text); i++)
        if ((text[i] == 33 || text[i] == 46 || text[i] == 63))
        {
            sentences ++;
        }
    return sentences;
}