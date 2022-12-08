#include <stdio.h>
struct student
{
    int roll_no, mth, esc, phy, finrank, sum;
};
// struct final{
//     int finalrank,finroll,sum;
// };

int rankey(struct student rank[], int n)
{
    static int cou = 1;
    int flag = -1, count = 0;
    int max = -99993;
    int same[n];

    for (int i = 0; i < n; i++)
    {
        if (rank[i].sum > max)
        {
            flag = i;
            same[count] = rank[i].roll_no;
            max = rank[i].sum;
            count++;
        }
        if (flag == -1)
            rank[i].finrank = cou;
        // if(max = )
        // rank[i].sum > max ? max = rank[i].sum : max = max ;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    // struct final fin[n];
    struct student rank[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d %d", &rank[i].roll_no, &(rank[i].mth), &(rank[i].esc), &(rank[i].phy));

        rank[i].sum = rank[i].mth + rank[i].esc + rank[i].phy;
    }
}