#include <stdio.h>
int main(){

    int n,c=65;
    scanf("%d",&n);

    for (int i =1 ; i<=n ; i++){
        for (int j =1 ; j<=n ; j++){
            if(i+j >= n+1){
                printf("%c",c);
                c++;
            }
            else{
                printf(" ");
            }
        }
        c=c-2;
        for (int j=1 ; j<=n-1 ; j++){
            if (i>j){
                printf("%c",c);
                c--;
            }
        }
        printf("\n");
        c=65;
    }
    for (int i=1; i<=n ; i++){
        for (int j=1 ; j<=n ; j++){
            if (j>i){
                printf("%c",c);
                c++;
            }
            else{
                printf(" ");
            }
        }
        c=c-2;
        for (int j= 1 ; j<=n-2 ; j++){
            if (i<=j){
                printf("%c",c);
                c--;
            }
        }
        printf("\n");
        c=65;
    }

    return 0;
}