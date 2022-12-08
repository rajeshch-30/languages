#include <stdio.h>
int main()
{
    int a, N, max1, max2;
    scanf("%d", &N);
    // scanf("%d",&a);
    //  max1=-1;
    for (int i = 0; i <= N; i++)
    {
        scanf("%d", &a);
        if (a > max1)
        {
            max2 = max1;
            max1 = a;
        }
        else
        {
            if (a > max2 && a != max1)
            {
                max2 = max1;
            }
        }
    }
    printf("%d", max2);
}