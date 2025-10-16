// #include <stdio.h>
// int main(){

//     int n,c=65;
//     scanf("%d",&n);

//     for (int i =1 ; i<=n ; i++){
//         for (int j =1 ; j<=n ; j++){
//             if(i+j >= n+1){
//                 printf("%c",c);
//                 c++;
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         c=c-2;
//         for (int j=1 ; j<=n-1 ; j++){
//             if (i>j){
//                 printf("%c",c);
//                 c--;
//             }
//         }
//         printf("\n");
//         c=65;
//     }
//     for (int i=1; i<=n ; i++){
//         for (int j=1 ; j<=n ; j++){
//             if (j>i){
//                 printf("%c",c);
//                 c++;
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         c=c-2;
//         for (int j= 1 ; j<=n-2 ; j++){
//             if (i<=j){
//                 printf("%c",c);
//                 c--;
//             }
//         }
//         printf("\n");
//         c=65;
//     }

//     return 0;
// }


#include <stdio.h>
int main(){

    int n;
    scanf("%d",&n);

    for (int i=1 ; i<2*n ; i++){
        int c=65;
        for (int j=1 ; j<2*n ; j++){
            if(i+j <= n || i-j >=n || j-i >=n || i+j >=3){
                printf(" ");
            }
            else if( j<n){
                printf("%c",c++);
            }
            else{
                printf("%c",c--);
            }

        }
        // printf("\n");
    }
    return 0;
}