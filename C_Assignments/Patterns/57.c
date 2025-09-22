#include <stdio.h>
int main (){

    int n;
    scanf("%d",&n);

    for (int i=1 ; i<=n ; i++){
        for (int j=1 ; j<=n ; j++){
            if ( i==1 || i==n || j==1 || j==n){
                printf("1 ");
            }
            else if( i==2 || i==n-1 || j==2 || j==n-1){
                printf("2 ");
            }
            else if (i==3 || i==n-2 || j==3 || j==n-2){
                printf("3 ");
            }
        }
        printf("\n");
    }
    return 0;
}

//ongoing