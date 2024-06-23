#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    int n;
    printf("Enter the order of the matrix: ");
    scanf("%d", &n);
    
    // Allocate memory for the matrix
    int *mat = (int *)malloc(n * n * sizeof(int));
    if (mat == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    printf("Enter the elements of the %d by %d matrix:\n", n, n);
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &mat[i * n + j]);
    
    int isSymmetric = 1;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (mat[i * n + j] != mat[j * n + i]) {
                isSymmetric = 0;
                break;
            }
        }
        if (!isSymmetric) {
            break;
        }
    }

    if (isSymmetric) {
        printf("\nThis is a symmetric matrix.\n");
    } else {
        printf("This is not a symmetric matrix.\n");
    }
    
    // Free allocated memory
    free(mat);
    
    return 0;
}
