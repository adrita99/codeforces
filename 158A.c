#include<stdio.h>
int main()
{
    int n,k,i,count,score[50];
    scanf("%d %d",&n,&k);
    count=k;
    for(i=0;i<n;i++)
    {
        scanf("%d",&score[i]);

    }

    for(i=0;i<k;i++)
    {
        if(score[i]==0)
        {
            count--;
        }
    }


    for(i=k;i<n;i++)
    {
        if(score[i]!=0 && score[i]==score[k-1])
        {
            count++;
        }
        else
        {
            break;
        }
    }
    printf("%d",count);


    return 0;

}



