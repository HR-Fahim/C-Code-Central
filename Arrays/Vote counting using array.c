#include<stdio.h>
#define NUM_VOTES 5
#define NUM_CANDIDATES 5
int main(void)
{
    int i,vote,cand[NUM_CANDIDATES];
    for(i=0;i<NUM_CANDIDATES;i++)
    {
        cand[i]=0;
    }
    printf("Enter votes:\n");
    for(i=0;i<NUM_VOTES;i++)
    {
        scanf("%d",&vote);
        cand[vote-1]=cand[i]+1;
    }
    for(i=0;i<NUM_CANDIDATES;i++)
    {
        printf("candidate %d: total %d, %.2f%%\n",i+1,cand[i],(cand[i]*100.0)/NUM_VOTES);
    }
    return 0;
}
