#include <stdio.h>
int main(){
    int n=5;
    // scanf("%d",&n);

    for (int i=1;i<=n;i++){
        for(int j=1 ; j<i ; j++){
            printf(" ");
        }
        for (int j= n+4; j>=i; j=j-2){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}