#include <stdio.h>
int main(){
    int n,c=1;
    scanf("%d",&n);

    for (int i=1 ; i<=n ; i++){
        for (int j= 1; j<n+2 ; j++){
            if (i<= j){
                printf("*");
                c++;
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
        c=1;
    }
    return 0;
}