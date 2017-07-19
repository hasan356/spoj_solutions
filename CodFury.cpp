#include<bits/stdc++.h>
 
using namespace std;
 
typedef pair<int,int>   II;
typedef vector< II >      VII;
typedef vector<int>     VI;
typedef vector< VI > 	VVI;
typedef long long int 	LL;
 
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define SZ(a) (int)(a.size())
#define ALL(a) a.begin(),a.end()
#define SET(a,b) memset(a,b,sizeof(a))
#define rep1(i, a, b) for (int i = (a); i < (b); ++i)

#define rep(i, n) rep1(i, 0, n)

#define str(n) scanf("%s",n)
#define sc(n) scanf("%d",&n)
#define sout(n) printf("%s\n",n)
#define dout(n) printf("%d\n",n)
#define sll(n) scanf("%lld",&n)
#define lldout(n) printf("%lld\n",n)
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
 

//FILE *fin = freopen("in","r",stdin);
//FILE *fout = freopen("out","w",stdout);
int main() {
    int t;
    sc(t);
    while(t--){
        int n,m;
        sc(n);
        sc(m);
        int a[n+1];
        rep1(i,1,n+1)
            sc(a[i]);
        int ans=INT_MAX;
        int j=0;
        int p=0;
        int sum=0,flag=0;
        rep1(i,1,n+1){
            if(flag==1){
                sum-=a[j];
            }
            else
                sum+=a[i];
            flag=0;
            if(sum>m){
                i--;
                flag=1;
                j++;
            }
            else if(p<(i-j)){
                p=i-j;
                ans=sum;
            }
            else if(p==(i-j))
                ans=min(ans,sum);
        }
        printf("%d %d\n",ans,p);
    }
	// your code goes here
	return 0;
}

