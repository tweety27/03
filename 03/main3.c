#include <stdio.h>

int main(void){
    char c1, c2;
    int i1, i2;

    printf("enter a character : ");
    scanf("%c", &c1);

    c2 = c1 + 1;
    i1 = c1 - '0';
    i2 = c2 -'0';
    printf("The next character of %c (%i) is %c (%i)", c1, i1, c2, i2);

    return 0;
}