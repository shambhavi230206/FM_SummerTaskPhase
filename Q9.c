#include <stdio.h>

int main() {
    int mat[4][4], i=0, j = 0, sum = 0, d1 = 0, d2 = 0;

    for(i=0;i<4;i++) {
        for(j =0; j<4; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for(i = 0;i<4; i++) {
        for(j=0;j<4;j++) {
            printf("%d ", mat[i][j]);
            sum = sum + mat[i][j];
        }
        printf("\n");
    }

    for(i=0;i<4;i++) {
        d1 = d1 + mat[i][i];
        d2 = d2 + mat[i][3-i];
    }

    printf("Total sum is %d\n", sum);
    printf("Diagonal 1 sum is %d\n", d1);
    printf("Diagonal 2 sum is %d\n", d2);

    return 0;
}
