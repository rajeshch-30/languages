#include <stdio.h>
int ways_in_grid(int x, int y, int m, int n,char *ptr)
{
    if (x == n && y == m)
    {
        return 1; 
    }

    if (x > n || y > m)
    {
        return 0;
    }
     char *ptrx;
     char *ptry;
     *(ptrx)= 'L';
     *(ptry) = 'R';
    return (ways_in_grid(x + 1, y, m, n,ptrx+1) + ways_in_grid(x, y + 1, m, n,ptry+1)); // avoid use of pre or post increment operators while giving input in function.
}

int main()
{
    int m, n, x = 0, y = 0;
    scanf("%d %d", &m, &n);
    int k = m*n;
    // char direc_str[k];
    char *ptr;

    // ways_in_grid(m,n,0,0);
    printf("%d", ways_in_grid(x, y, m - 1, n - 1,ptr));
}