#include <stdio.h>
int main()
{
    int N,M;
    scanf("%d %d",&N,&M);
    int a,b,k,sum=0;
    int jar[N];
    for (int i=0;i<N;i++){
        jar[i]=0;
    }
    for(int i=0;i<M;i++){
        scanf("%d %d %d",&a,&b,&k);
        sum+=(b-a+1)*k;
        for(int j=a-1;j<=b;j++){
            jar[j]+=k;
        }
    }
    int avg=sum/N;
    printf("%d\n",avg);
    return 0;
}
