#include<stdio.h>

void getcube(int *a, int size)
{
    int i, j;
    int value;
    
    printf("Cubes of all elements: \n");
    
    for(i = 0; i < size; i++)
    {
        for(j = 0; j < size; j++)
        {
            value = *(a + i * size + j);
            printf("%d ",value * value * value);
        }
        printf("\n");
    }
}
int main()
{
    int size;
    
    printf("Enter array's size : ");
    scanf("%d",&size);
    
    int a[size][size];
    
    int i, j;

    for(i = 0; i < size; i++)
    {
        for(j = 0; j < size; j++)
        {
            printf("a[%d][%d] = ",i ,j);
            scanf("%d",&a[i][j]);
        }
    }
    
    getcube((int *)a,size);

    return 0;
}
