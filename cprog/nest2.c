#include<stdio.h>

int main(){
    int i,j;
    int a = 1;
    // for(i=1;i<=5;i++){
    //     for(j=1;j<=5;j++){
    //         printf("%d ",i);
    //     }
    //     printf("\n");
    // }
    for(i=1;i<=4;i++){ // rows
        for(j=1;j<=i;j++){  // cols
            printf("%d ",a++);
        }
        printf("\n");
    }
    return 0;
}
/*
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5

1 
2 3
4 5 6
7 8 9 10
*/