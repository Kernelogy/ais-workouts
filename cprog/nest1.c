#include<stdio.h>

int main(){
    int i, j, k;
    // for(i=1;i<=5;i++){
    //     for(j=1;j<=5;j++){
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    // for(i=1;i<=5;i++){
    //     for(j=1;j<=i;j++){
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    // for(i=5;i>=1;i--){
    //     for(j=1;j<=i;j++){
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    for(i=1;i<=5;i++){
        // for(k=5;k>=i;k--){
        //     printf(" ");
        // }
        for(k=i;k<=5;k++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
/*
    i = 1
        k = 1 2 3 4 5
        k = 5 4 3 2 1
        j = 1
    i = 2
        k = 2 3 4 5
        k = 5 4 3 2
        j = 1 2
    i = 
        k = 3 4 5
        k = 5 4 3
        j = 1 2 3
    i = 4
        k = 4 5
        k = 5 4 
        j = 1 2 3 4
    i = 5
        k = 5
        k = 5
        j = 1 2 3 4 5
     *
    * *
   * * *
  * * * *
 * * * * *
i = 1
    j = 1
i = 2
    j = 1 2
i = 3
    j = 1 2 3
i = 4
    j = 1 2 3 4
i = 5
    j = 1 2 3 4 5
==============================
i = 1
    j = 1 2 3 4 5
i = 2
    j = 1 2 3 4 5
.
.
i = 5
    j = 1 2 3 4 5
==============================

*/