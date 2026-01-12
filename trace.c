#include <stdio.h>

int main() {
    int a[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int trace = 0;
    int i,n=3;

    
    for (i = 0; i < n; i++) {
        trace += a[i][i];
    }

    printf("The trace of the matrix is: %d\n", trace);

    return 0;
}
