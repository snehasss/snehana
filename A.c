#include <stdio.h>
#define MIN 0
#define MAX 9 
int main()
{
    int n;
    while (1) 
    {
        printf("Enter a number (%d-%d) :", MIN, MAX);
        scanf("%d", &n);
        if (n >= MIN && n <= MAX) {
            printf("Good\n");
        } else {
            printf("Damn you!\n");
            break;
        }
    }
    return 0;
}
