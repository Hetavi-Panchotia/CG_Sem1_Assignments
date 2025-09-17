#include <stdio.h>
int main(){

    int n;
    scanf("%d",&n);

    for (int i=n ; i>=1 ; i--){
        for(int j =1 ; j<=i ; j++){
            if (i==1 || j==1 || i==j || i==n ){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}