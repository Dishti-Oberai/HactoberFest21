#include <stdio.h>
int main()
{
    int n,cnt=0;
    double avg,sum=0;
    while(1)
    {
        scanf("%d", &n);
        if(n<0)
            break;
        else
        {
            sum+=n;
            cnt++;
        }
    }
    avg=sum/cnt;
    printf("%.2lf\n",avg);

    return 0;
}