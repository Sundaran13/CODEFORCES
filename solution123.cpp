//SRI_SUNDARAN_13
#include <bits/stdc++.h>
#include<math.h>
//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>

using namespace std;

 #define nline "\n"
#define MOD 1000000007
#define f(i,n) for(int i=0;i<n;i++)
template<typename T>
istream &operator>>(istream &istream,vector<T> &v){
	for(auto &it:v)
		cin>>it;
	return istream;
}

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
const ll N=1'000'000'000'000L;
//typedef tree<pair<ll, ll>, null_type, less<pair<ll, ll>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key


/*---------------------------------------------------------------------------------------------------------------------------*/
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
/*-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
int gcd_sum(long long int n)
{
	long long int tmp=n,digitsum=0;
	while(tmp)
	{
		digitsum=digitsum+tmp%10;
		tmp/=10;
	}
	long long int gcd1=gcd(n,digitsum);
	return gcd1;
}
struct Test
{
   int x, y;
};
char small_alpha(char a[],int n)
{
	char min='z';
	for(int i=0;i<n;i++)
	{
		if(a[i]<min)
			min=a[i];
	}
	return min;
}
long long getR(long long a)
{
	while(a%2==0)
		a/=2;
	return a;
}
ll findlcm(int arr[], int n)
{
    // Initialize result
    ll ans = arr[0];
 
    // ans contains LCM of arr[0], ..arr[i]
    // after i'th iteration,
    for (int i = 1; i < n; i++)
        ans = (((arr[i] * ans)) /
                (gcd(arr[i], ans)));
 
    return ans;
}
//min(m-cd+m-cb,n-rd+n-cd)
bool isVowel(char a){
	if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
		return true;
	return false;
}
bool isPalindrome(string S)
{
    // Stores the reverse of the
    // string S
    string P = S;
 
    // Reverse the string P
    reverse(P.begin(), P.end());
 
    // If S is equal to P
    if (S == P) {
        // Return "Yes"
        return true;
    }
    // Otherwise
    else {
        // return "No"
        return false;
    }
}
int sum_of_arr(vector<int> v){
	int sum1=0;
	for(int i=0;i<v.size();i++){
		sum1+=v[i];
	}
	return sum1;
}
int sum(vector<int> a,int l,int r){
	int sum=0;
	for(int i=l-1;i<=r-1;i++){
		sum+=a[i];
	}
	return sum;
}
bool sortbysec(const pair<int,int>&a,const pair<int,int> &b){
	return(a.second<b.second);
}

ll getAdd(ll x){
	ll m1=10,m2=0;
	while(x>0){
		ll y=x%10;
		x/=10;
		m1=min(m1,y);
		m2=max(m2,y);
	}
	return m1*m2;
}
//int x,y;
ll countOdd(ll L, ll R){
 
    ll N = (R - L) / 2;
 
    // if either R or L is odd
    if (R % 2 != 0 || L % 2 != 0)
        N += 1;
 
    return N;
}
int bitcount(int n){
	int k=0;
	while(n){
		n/=2;
		k++;
	}
	return k;
}
bool flag;
unordered_set<ll> cubes;
int factorial(int n){
	int temp=1;
	while(n>=1){
		temp*=n;
		n--;
	}
}
unsigned int factorial(unsigned int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}
void solve(){
	ll n;
	cin>>n;
	string s;
	cin>>s;
	ll mid=n/2;
	ll i;
	ll count=0;
	if(n%2==0){
		//mid++;
		i=mid;
		while(s[i]==s[i+1]){
			i++;
			count++;
		}
		count++;
		cout<<2*count<<nline;
	}
	else{
		//mid++;
		i=mid;
		while(s[i]==s[i+1]){
			i++;
			count++;
		}
		cout<<2*count+1<<nline;
	}
}
signed main() { 
	//precalc();
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	long long int t;
	cin>>t;
	while(t--){
	 solve();
}
}
