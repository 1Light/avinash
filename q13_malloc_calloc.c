#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *p, *q ;
    float sum_malloc =0, sum_calloc = 0;
    int i, n;

    printf("Length of array: ");
    scanf("%d", &n);


    p = (int*)malloc(n*sizeof(int));
    q = (int*)calloc(n,sizeof(int));

    if(p==NULL)
    {
        printf("Malloc Memory allocation error");
        exit(1);
    }
    if(q==NULL)
    {
        printf("Calloc Memory allocation error");
        exit(1);
    }

    // input value
    for(i = 0; i < n; i++)
    {
        printf("Enter the element %d : ", i+1);
        scanf("%d", p+i);
        scanf("%d", q+i);
    }

    // calculate sum
    for(i = 0; i < n; i++)
    {
        sum_malloc += *(p+i);
        sum_calloc += *(q+i);
    }

    printf("print of array from malloc ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", *(p+i));
    }
    printf("\n print of array from calloc ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", *(q+i));
    }

    printf("\nAverage of array malloc = %.2f\n", sum_malloc/n);
    printf("\nAverage of array calloc = %.2f\n", sum_calloc/n);

    return 0;
}