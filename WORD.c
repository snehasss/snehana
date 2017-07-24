#include <stdio.h>
 
#define OUT 0
#define IN  1
unsigned countWords(char *str)
{
    int state = OUT;
    unsigned wc = 0;  // word count
 
    while (*str)
    {
        if (*str == ' ' || *str == 'n' || *str == 't')
            state = OUT;
        else if (state == OUT)
        {
            state = IN;
            ++wc;
        }
 
        ++str;
    }
 
    return wc;
}
 
int main(void)
{
    char str[] = "One two          threen   fournfive  ";
    printf("No of words: %un", countWords(str));
    return 0;
}
