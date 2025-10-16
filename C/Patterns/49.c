#include <stdio.h>
int main(){

    int n,c=65;
    scanf("%d",&n);

    for (int i=1 ; i<=n ; i++){
        for (int j=1 ; j<=n ; j++){
            printf("%c ",c);
            c++;
        }
        printf("\n");
    }
    return 0;
}