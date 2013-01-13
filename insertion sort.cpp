#include<iostream>
#include<string>
#include<cstdio>
#include<map>
#include<algorithm>
#include<cmath>
#include<vector>
#include<sstream>
#include<stack>
#include<queue>
#include<cstring>

#define pb push_back
#define LL long long
#define OUTPUT_TO_FILE 1
#define s(n)					scanf("%d",&n)
#define sl(n) 					scanf("%lld",&n)
#define sf(n) 					scanf("%lf",&n)
#define ss(n) 					scanf("%s",n)


using namespace std;
int a[100009],b[1000009] ;
int main()
{
 int t,i,j;
 LL n;
 cin>>t;
 while(t>0)
 {
    cin>>n;
    for(i = 0;i < n;i++) 
        scanf("%d",&a[i]) ;
    LL ans = n*(n - 1)/2 ;
    memset(b,0,sizeof b) ;
    for(int i = 0;i < n;i++)
    {
        for(j = a[i];j > 0;j -= j & -j) 
            ans =ans - b[j] ;
        for(j = a[i];j < 1000009; j += j & -j) 
            b[j]++ ;  
    }
    cout<<ans<<endl ;
    t--;
 }
 return 0;
}
