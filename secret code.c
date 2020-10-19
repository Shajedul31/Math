#include <stdio.h>
int main()
{
    char code[50], c;
    int test;

    gets(code);

    int i, dot = 0, spa = 0;
    for(i = 0; code[i] != '\0'; i++){
        if(code[i] == '.' && spa == 0)
            dot++;
        else if (code[i] == ' '){
            spa++;
        }
    }
    if(dot == 1){
        c = 'a' + (3*spa);
    }
    else if(dot == 2){
        c = 'b' + (3*spa);
    }
    else
        c = 'c' + (3*spa);

    printf("%c",c);
    return 0;
}
