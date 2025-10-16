// #include <stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);

//     for (int i=n; i>=1 ; i--){
//         for (int j=n ; j>i ; j--){
//             printf(" ");
//         }
//         for(int j=1 ; j<=i ; j++){
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }



#include <stdio.h>
int main(){
    int n,c=1;
    scanf("%d",&n);

    for (int i=1; i<=n ; i++){
        for (int j=1 ; j<=n ; j++){
            if (i <= j){
                printf("%d",c);
                c++;
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
        c=1;
    }
    return 0;
}