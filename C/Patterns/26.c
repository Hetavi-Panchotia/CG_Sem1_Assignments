// #include <stdio.h>
// int main(){
//     int n,c=1;
//     scanf("%d",&n);

//     for (int i=1 ; i<=n ; i++){
//         for (int j= 1; j<=n ; j++){
//             if (i<= j){
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         for( int j=1; j<=n-1 ; j++){
//             if (j>=i){
//                 printf("*");
//             }
//         }
//      printf("\n");
// }
//     return 0;
// }


// ANOTHER METHOD

#include <stdio.h>
int main(){

    int n;
    scanf("%d",&n);

    for (int i =1 ; i<n ; i++){
        for (int j =0 ; j<2*n-1 ; j++){
            if (j <n && i<=j){
                printf("*");
            }
            else if (j>=n && i+j < 2*n -1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;