#include <bits/stdc++.h>
using namespace std ;

#define  ll   long long
#define  pb  push_back
#define  mp  make_pair
#define  MAX  500006
#define  MAX1  10000008
#define  mem(a,v)   memset(a,v,sizeof(a))

template <typename T>
T mymax (T a,T b){return (a>b)?a:b;}
template <typename T>
T mymin (T a,T b){return (a<b)?a:b;}
template <typename T>
T myabs (T a){return (a<0)?(-1*a):a;}
template <typename T>
T mysqrt (T x){if (x == 0 | x == 1)return x;int start = 1, End = x, ans;while (start <= End){int mid = (start + End) / 2;if (mid*mid == x)return mid;if (mid*mid < x){start = mid + 1;ans = mid;}else End = mid-1;}return ans;}

void fastIO (){ios_base::sync_with_stdio(false);cin.tie(0); cout.precision(20);}

ll A[MAX];
ll B[MAX];
ll C[MAX];
vector< ll >V;
vector< ll >Ans;
vector< pair<ll,ll> >VP;
map< ll,ll >M;
vector<ll>prime;
bool mark[MAX1];
ll N=1e7;
void seive (){int limit = sqrt(N*1.0)+2;mark[1]=1;for (int i=4;i<=N;i+=2)mark[i]=1;prime.push_back(2);for (int i=3;i<=N;i+=2){if(!mark[i]){prime.push_back(i);if(i<=limit){for (int j=i*i;j<=N;j+=i*2)mark[j]=1;}}}}

bool check(string a,string b){
    ll n,m;

    n=a.size();
    m=b.size();
    if(a==b){return true;}

    for(int i=0;i<n;i++){
        if(a[i]==b[i])continue;
        if(a[i]<b[i])return true;
        if(a[i]>b[i])return false;
    }
    return false;
}

string findSum(string str1, string str2)
{
	if (str1.length() > str2.length())
		swap(str1, str2);
	string str = "";
	int n1 = str1.length(), n2 = str2.length();
	reverse(str1.begin(), str1.end());
	reverse(str2.begin(), str2.end());

	int carry = 0;
	for (int i=0; i<n1; i++)
	{
		int sum = ((str1[i]-'0')+(str2[i]-'0')+carry);
		str.push_back(sum%10 + '0');
		carry = sum/10;
	}
	for (int i=n1; i<n2; i++)
	{
		int sum = ((str2[i]-'0')+carry);
		str.push_back(sum%10 + '0');
		carry = sum/10;
	}
	if (carry)
		str.push_back(carry+'0');
	reverse(str.begin(), str.end());

	return str;
}

int main ()
{
    fastIO();
    ll a,b,c,n,m,k,p,q,r;
    ll cnt=0,cntr=0,sum=0,ans=1;
    float x,y,z;
    ll Max= 0,Max1=-1e18+1;
    ll Min = 1e18;
    string s,s1,s3,s4;

    cin>>n>>k;

    cin>>s;
    s3="";
    s1="";
    for(int i=0;i<k;i++){
        s1+=s[i];
    }

    a=n/k;
    for(int i=0;i<a*k;i++){
        s3+=s[i%k];
    }
    for(int i=a*k;i<n;i++){
        s3+=s[i%k];
    }
    if(check(s,s3)){
        cout<<s3.size()<<endl;
        cout<<s3<<endl;return 0;
    }
    s4="";
    s4=s1;
    s1="";
    s1=findSum(s4,"1");
    a=n/k;
    if(n%k)a++;
    s3="";
    for(int i=0;i<a*k;i++){
        s3+=s1[i%k];
    }
    cout<<s3.size()<<endl;
    cout<<s3<<endl;
    return 0;
}
