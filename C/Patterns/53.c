// #include <stdio.h>

// int main() {

//     int n,c=1;
//     scanf("%d",&n);

//     for(int i=1; i<=n; i++){
//         for (int j=1 ; j<=n ; j++){
//             if ((i+j)>=n+1){
//                 printf("%d  ",c);
//                 c++;
//             }
//             else{
//                 printf("   ");
//             }
//         }
//         for(int j=1 ; j<=n-1 ; j++){
//             if(i>j){
//                 printf("%d  ",c);
//                 c++;
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }


#include <stdio.h>

int main() {

    int n,c=1;
    scanf("%d",&n);

    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=n ; j++){
            if( i+j >n ){
                if(c<10){
                    printf("%d  ",c);
                    c++;
                }
                else{
                    printf("%d ",c);
                    c++;
                }
            }
            else{
                printf("   ");
            }
        }
        for(int k=1 ; k<= n ; k++){
            if (i-1>=k){
                if(c<10){
                    printf("%d  ",c);
                    c++;
                }
                else{
                    printf("%d ",c);
                    c++;
                }
            }
            else{
                printf("   ");
            }
        }
        printf("\n");
    }
    return 0;
}