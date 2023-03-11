#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    string i = get_string("input text: ");
    int l = strlen(i);
    float q = 0;
    float h = 1;
    int s;
    float c = 0;
    for (int b = 0; b < l; b++)
    {
        if isalpha(i[b])
        {
            q++;
        }
    }
    {
        printf("%f letter(s)\n",q);
    }
    for (int w = 0; w < l; w++)
    {
        s = w + 1;
        if( (isspace(i[w])) )
        {
            if(isalpha(i[s]))
            {
                h++;
            }
        }
    }
    {
        printf("%f word(s)\n",h );
    }
    for ( int y = 0; y < l; y++)
    {
        if(ispunct(i[y]))
        {
            if( i[y] == '.' || i[y] == '!' || i[y] == '?' )
            {
                c++;
            }
        }
    }
    {
        printf("%f sentence(s)\n",c);
    }
    float g = (q/h) * 100;
    float k = (c/h) * 100;
    float index = ((0.0588 * g) - (0.296 * k)) - 15.8;
    int ls = round(index);
    if ((ls < 17) & (ls > 0))
    {
        printf("Grade %i\n",ls);
    }
    if (ls > 16)
    {
        printf("Grade 16+\n");
    }
    if (ls < 1)
    {
        printf("Before Grade 1\n");
    }
}
