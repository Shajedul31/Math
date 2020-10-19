#include <stdio.h>
int happy(int year)
{
    int a= 1111, arr[4],i, happy;
    int prime[4]={2,3,5,7}, j;
    if (year % a == 0)
        happy = 0;
    else happy =1;

    if(happy == 1){
        for(i=0; i<4; i++){
            arr[i] = year % 10;
            year = year /10;
        }
        for(i=0; i<4; i++){
            for(j=0; j<4; j++){
                if(arr[i] == prime[j]){
                  happy =1;
                  break;
                }
                else happy =0;
            }
        }
    }
    return happy;
}

int main(){
    int count=0, a1, a2;
    scanf("%d %d",&a1,&a2);
    for(;a1 <= a2; a1++){
        if(happy(a1) == 1)
            count++;
    }
    printf("%d",count);
    return 0;
}
