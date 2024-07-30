/*
1
1 2
1 3 5
1 6 11 16
1 17 33 49 65
*/
/**/


#include <stdio.h>
void main()
{

    int fg = 1, a = 1, b = 1, c = 0, d = 0;
    ;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == 1)
            {
                printf("%d ", fg);
            }
            else
            {
                if (j == 2)
                {
                    a = 1;
                    c = a + b;
                    printf("%d ", c);
                    a = b;
                    b = c;
                    d = 1;
                }
                else
                {
                    if (j==4 && d==0)
                    {
                        a=c;
                        c=a+b;
                        printf("%d ",c);
                        d=0;
                    }
                    else
                    {
                        c = a + b;
                        printf("%d ", c);
                        a = b;
                        b = c;
                    }
                }
            }
        }
        printf("\n");
    }
}




