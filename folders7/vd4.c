#include <stdio.h>
int vd4()
//int main()
{
    char c;
    printf("Please enter the character:");
    scanf("%c, &c");

    if(c>= 'A' && c<= 'Z')
        printf("Lowercase character = %c", c+ 'a'- 'A');
    else
        printf("Character Entered is = %c", c);
}