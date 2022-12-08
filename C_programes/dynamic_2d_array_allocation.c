// taking input in m*n matrix
#include<stdio.h>
#include<stdlib.h>
int main()
{   int row,column;
    printf("Enter row(m) : ");
    scanf("%d",&row);
    printf("Enter column(n) : ");
    scanf("%d",&column);
    // storing in  1d array
    int *ptr = (int *)malloc((row*column)*sizeof(int));
    for(int i=0;i<row*column;i++)
    {
        scanf("%d",&ptr[i]);
    }

    for(int i =0;i<row;i++)
    {
        for(int j = 0;j<column;j++)
        {
           printf("%d ",ptr[i*column+j]);
        }
        printf("\n");

    }

    free(ptr);
    // using aaray of pointers 
    int*arr[row];
    // allocate memory of each row
    for(int i =0;i<row;i++)
    {
        arr[i] = (int *)malloc(column*sizeof(int));
    }
    printf("\n%d",sizeof(int*));

    return 0;

}