/* 用两层for循环解决问题*/ 
#include<stdlib.h>
#include<stdio.h> 

int main()
{
    int nums[100];
    int target;
    int numsize;
    printf("numsize=");
    scanf("%d",&numsize);
    int i=0 ,j=0;
    printf("\nnums=");
    for(;i<numsize;i++)
    {
        scanf("%d",&nums[i]);
    }
    //printf("]\n");
    printf("target=");
    scanf("%d",&target);
    int res[2]={0,0};
    for(i=0;i<numsize;i++)
    {
        for(j=i+1;j<numsize;j++)
        {
            if((nums[i]+nums[j])==target)
            {
                printf("%d,%d",i,j);
                return 0;
            }
        }
    }
    //return 0;
}
