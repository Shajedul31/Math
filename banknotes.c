#include <stdio.h>

int main() {

    int notes[7]={100,50,20,10,5,2,1};
    int N,i;
    scanf("%d",&N);

    for(i=0; i<7; i++){
        if(N/notes[i] >= 1){
            printf("%d nota(s) de R$ %0.2f\n",N/notes[i],(float)notes[i]);
            N= N % notes[i];
        }
        else printf("0 nota(s) de R$ %0.2f\n",(float)notes[i]);
    }

    return 0;
}
