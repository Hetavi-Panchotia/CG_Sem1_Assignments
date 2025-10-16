// #include <stdio.h>
// int main(){

//     int n;
//     scanf("%d",&n);

//     for(int i=1 ; i<=n ; i++){
//         for(int j=1 ; j<=i; j++){
//             printf(" ");
//         }
//         for (int j=n ; j>=i ; j--){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// OR

#include <stdio.h>
int main(){

    int n;
    scanf("%d",&n);

    for (int i=1; i<=n ; i++){
        for (int j=1 ; j<=n ; j++){
            if (j>=i){
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