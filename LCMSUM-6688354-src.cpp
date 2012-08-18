#include<cstdio>
#include<iostream>
#include<cmath>
#define Lim  1000000
using namespace std;
long long mohit[1000010]  ;
long long  ret[1000010];

    void cal_mohit()
       {
          for(int i = 1 ;i <= Lim ; i++ ) mohit[i]=i;
          for(int i=2 ; i<= Lim ; i++ )
            if ( mohit[i] == i)
              for(int j = 2*i ; j <= Lim ; j += i) mohit[j] -=  mohit[j]/ i ;
          for(int i=2 ; i<= Lim ; i++) if ( mohit[i]==i) mohit[i] = i-1;
	  for(int i=1;i <= Lim ; i++) for (int j = i ; j <= Lim ; j += i  ) ret[j]+= i*mohit[i];
       }

    int main()
       {
          cal_mohit();
          int n,t , i, sqt;
          long long sum;

          for(scanf("%d",&t ) ; t>0 ; t--)
          {
             scanf("%d",&n);
             sum = ( 1 + ret[n] ) * n / 2;
             printf("%lld\n",sum);

          }
       }

