#include <stdio.h>
int main(){

    int n=5;
    int i=0;
    while (i<n){
        int j=0,k=0,c=0;
        while(j<=n){
            if(j>=n){
                printf("%c",'A'+c);
                c++;
            }
            else {
                printf(" ");
            }
            j++;
        }
    }
    return 0;
}