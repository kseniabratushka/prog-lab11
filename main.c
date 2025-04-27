#include <stdio.h>

#define N 5 
#define M 4  
#define K 6   

int sumPositive(int arr[], int size) 
{
    int sum = 0;
    for (int i = 0; i < size; i += 1) 
    {
        if (arr[i] > 0) 
        {
            sum += arr[i];
        }
    }
    return sum;
}

int main() 
{
    system("chcp 65001");
    int x[N], y[M], z[K];
    int i;

    printf("Введіть елементи масиву x (%d елементів):\n", N);
    for (i = 0; i < N; i += 1) 
    {
        printf("x[%d] = ", i);
        scanf("%d", &x[i]);
    }

    printf("\nВведіть елементи масиву y (%d елементів):\n", M);
    for (i = 0; i < M; i += 1) 
    {
        printf("y[%d] = ", i);
        scanf("%d", &y[i]);
    }

    printf("\nВведіть елементи масиву z (%d елементів):\n", K);
    for (i = 0; i < K; i += 1) 
    {
        printf("z[%d] = ", i);
        scanf("%d", &z[i]);
    }

    int sumX = sumPositive(x, N);
    int sumY = sumPositive(y, M);
    int sumZ = sumPositive(z, K);

    printf("\nСума додатних елементів масиву x: %d\n", sumX);
    printf("Сума додатних елементів масиву y: %d\n", sumY);
    printf("Сума додатних елементів масиву z: %d\n", sumZ);

    return 0;
}
