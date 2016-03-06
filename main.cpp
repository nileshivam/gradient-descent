/** Nilesh Dwivedi **/

#include <bits/stdc++.h>

using namespace std;



#define ll long long
#define ull long long int
#define pll pair<LL, LL>
#define pii pair<int,int>

#define mp make_pair
#define pb push_back
#define fs first
#define sc second

#define INF_MAX 3000000000
#define INF_MIN -2147483647
#define EPS 1e-6
#define MOD (1000000007)
#define PI  2*acos(0);

#define fore(iter,v) for(iter=v.begin(); iter!=v.end(); iter++)
#define forup(i,a,n) for(i=a; i<n; i++)
#define rep(i,n) for(i=0; i<n; i++)
#define SET(a, v) memset(a, v, sizeof a)
#define all(a) a.begin(),a.end()
#define ALLOC0(N)   (int*)calloc(N, sizeof(int));

#define gi(x) scanf("%d",&x)
#define gl(x) scanf("%lld",&x)


#define ps(x) printf("%s",x)
#define pi(x) printf("%d",x)
#define pl(x) printf("%lld", x)
#define pn printf("\n")
#define spc printf(" ")
#define prec(x) cout<<fixed<<setprecision(x)

double h(double tt0,double tt1,double x)
{
    return tt1*x+tt0;
}

int main()
{
    freopen("input.txt","r",stdin);
    //freopen("fb.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    int m,i;
    double al,tt0,tt1,ct0,ct1,mt0,mt1,te;
    cin>>m;
    double x[m+1],y[m+1];
    for(i=0;i<m;i++)
    {
        cin>>x[i];
        cin>>y[i];
    }
    //scanning th initial value
    cin>>tt0>>tt1;
    cin>>al;
    do
    {
        ct0=tt0;
        ct1=tt1;

        for(i=0;i<m;i++)
        {
            te=h(tt0,tt1,x[i])-y[i];
            mt0+=te;
            mt1+=te*x[i];
        }
        tt0=tt0-(al*(mt0/m));
        tt1=tt1-(al*(mt1/m));
        cout<<"theta1:"<<tt1<<" \nTheta0:"<<tt0<<endl;
    }while(!(ct0==tt0 && ct1==tt1));
    cout<<"theta1:"<<tt1<<" \nTheta0:"<<tt0<<endl;
}
