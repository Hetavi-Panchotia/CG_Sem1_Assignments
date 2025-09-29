// #include <stdio.h>
// int main(){

//     int n;
//     scanf("%d",&n);

//     for (int i=65 ; i<n+65 ; i++){
//         for (int j=65 ; j<=i ; j++){
//             printf(" ");
//         }
//         for (int j=65 ; j<=i ; j++){
//             printf("%c",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }


// OR

#include <stdio.h>
int main (){

    int n,c=65;
    scanf("%d",&n);

    for (int i=1 ; i<=n ; i++){
        for (int j=1 ; j<=2*i-1 ; j++){
            if (j<i){
                printf(" ");
            }
            else{
                printf("%c",c);
                c++;
            }
        }
        printf("\n");
        c=65;
    }
    return 0;
}