#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    for (int i= 65 ; i< (65+n); i++){
        printf("%c",i);
    }
    return 0;
}