#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    for (int i=n+65; i>=65 ; i--){
        for (int j=n+65 ; j>i ; j--){
            printf(" ");
        }
        for(int j=65 ; j<i ; j++){
            printf("%c",j);
        }
        printf("\n");
    }
    return 0;
}