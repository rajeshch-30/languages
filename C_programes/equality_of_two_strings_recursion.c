#include<stdio.h>

int str_eq(char *s1,char *s2)
{ int i=0;
    if(s1[0] != s2[0])
    {
        return 0;
    }
    else if(s1[0] == '\0' && s2[0] == '\0')
    {
        return 1;
    }

    else(s1[0] == s2[0])
    
    {
        return streq(*(s1 +1), *(s2+1));
    }
}

int main()
{

}
