#include <stdio.h>
int main()
{
    int a,b,x,i, gas;
    scanf("%d%d",&a,&b);

    if(a<b) x = a;
    else x = b;

    for(; x>0 ; x--){
        if(a % x == 0 && b % x == 0){
            gas = x;
            break;
        }
    }
    printf("%d",gas);
}
