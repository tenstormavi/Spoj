    #include<stdio.h>
    int phi[1000001];
    long long ar[1000001];
    int main()
    {
    int t,n,i,j;
    for(i=2; i <= 1000000; i++)
    phi[i] = i;
    for(i=2; i <= 1000000; i++)
    if( phi[i] == i )
    for(j=i; j <= 1000000; j += i )
    phi[j] = (phi[j]/i)*(i-1);
    phi[1]=1;
    ar[1]=0;
    for(i=2;i<=1000000;i++)
    ar[i]=ar[i-1]+(i-1-phi[i]);
    long long int s;
    scanf("%d",&t);
    while(t--)
    {
    scanf("%d",&n);
    // printf("%d\n",phi[n]);
    s=(long long)n*(n-1)/2;
    // for(i=2;i<=n;i++)
    //s-=(i-1-phi[i]);
    s-=ar[n];
    printf("%lld\n",s);
    }
    return 0;
    }
