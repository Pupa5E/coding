#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, m, k;
    int *a, *b, *arr;
    
    scanf("%d %d", &n, &m);
    a = (int *)malloc(sizeof(int) * (n * m));
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            scanf("%d", &arr[(i * m) + j]);
        }
    }

    scanf("%d %d", &m, &k);
    b = (int *)malloc(sizeof(int) * (m * k));
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < k; j++)
        {
            scanf("%d", &arr[(i * k) + j]);
        }
    }
    arr = (int *)malloc(sizeof(int) * (n * k));
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < k; j++)
        {
            for(int x = 0; x < m; x++)
            {
                arr[i * j] = arr[i * x] + arr[j * x];
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < k; j++)
        {
            printf("%d ", arr[i * j]);
            (j == k - 1) ? printf("\n") : printf(" ");
        }
    }
    free(a);
    free(b);
    free(arr);
    return 0;
}