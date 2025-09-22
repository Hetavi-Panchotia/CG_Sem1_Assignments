#include <stdio.h>
int main(){
    int n,c=1;
    scanf("%d",&n);

    for (int i = 1; i<=n; i++){
        for (int j =1; j <= n; j++) {
            if (i+j>= n+1){
                printf("%d",c);
                c++;
            }
            else {
                printf(" ");
            }
        }
        for (int j=1; j<=n-1 ; j++){
            if (i>j){
                printf("%d",c);
                c++;
            }
        }
        printf("\n");
        c=1;
    }
    return 0;
}