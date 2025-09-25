#include <stdio.h>
int main(){

    int n;
    scanf("%d",&n);

    for (int i=1 ; i<=n ; i++){
        for (int j=1 ; j<=2*n -1 ; j++){
            if (j==n || i==j || i==n){
                printf("*");
            }
            else if (i >j){
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}