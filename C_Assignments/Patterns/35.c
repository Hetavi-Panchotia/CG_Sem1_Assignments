// #include <stdio.h>
// int main(){

//     int n;
//     scanf("%d",&n);

//     for (int i=1 ; i<=n ; i++){
//         for (int j=1 ; j<=i ; j++){
//             printf(" ");
//         }
//         for (int j=1 ; j<=i ; j++){
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }



// OR


#include <stdio.h>
int main (){

    int n,c=1;
    scanf("%d",&n);

    for (int i=1 ; i<=n ; i++){
        for (int j=1 ; j<=2*i-1 ; j++){
            if (j<i){
                printf(" ");
            }
            else{
                printf("%d",c);
                c++;
            }
        }
        printf("\n");
        c=1;
    }
    return 0;
}