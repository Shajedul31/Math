#include <stdio.h>
int main()
{
     int set1[3], set2[3],t, c =0;

    for(t= 0; t<3; t++)
        scanf("%d",&set1[t]);
    for(t=0; t<3; t++)
        scanf("%d",&set2[t]);
    t=0;
    int i,j;
    for(i=0; i<3; i++)
        printf("%d",set1[i]);

    for(j=0; j<3; j++){
        for(i=0; i<3; i++){
            if(set2[j] == set1[i]){
                c = 1;
            }
        }
        if(c == 0)
            printf("%d",set2[j]);
        c =0;
    }

}
