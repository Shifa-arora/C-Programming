#include<stdio.h>
int main(){
    int a[3][2] = {{1,2},{3,4},{5,6}};
    int b[2][4] = {{1,2,3,4},{5,6,7,8}};
    int res[3][4];
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            res[i][j] = 0;
            for(int k=0; k<2; k++){
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
}

//*****or***** */

#include <stdio.h>

int main() {
    int m, n, s, q;
    printf("Enter m, n, s, q: ");
    scanf("%d %d %d %d", &m, &n, &s, &q);

    int a[m][n];
    int b[s][q];

    printf("\nEnter matrix a[%d][%d]:\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter matrix b[%d][%d]:\n", s, q);
    for (int i = 0; i < s; i++) {
        for (int j = 0; j < q; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    if (n == s) {
        int res[m][q];

        // Matrix multiplication
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < q; j++) {
                res[i][j] = 0;
                for (int k = 0; k < n; k++) {
                    res[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        // Printing result
        printf("\nResult matrix res[%d][%d]:\n", m, q);
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < q; j++) {
                printf("%d ", res[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("These matrices can't be multiplied. Columns of A must equal rows of B.\n");
    }

    return 0;
}
