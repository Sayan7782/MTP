#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
using namespace std;
ll power(ll x, ll y,ll  m) 
{ 
    if (y == 0) 
        return 1; 
    ll  p = power(x, y/2, m) % m; 
    p = (p * p) % m; 
  
    return (y%2 == 0)? p : (x * p) % m; 
} 
ll modInverse(ll a, ll m) 
{ 
    ll g = __gcd(a, m); 
    if (g != 1) 
        cout << "Inverse doesn't exist"; 
    
    
        // If a and m are relatively prime, then modulo inverse 
        // is a^(m-2) mode m 
        
              return power(a, m-2, m); 
    
} 

ll fact[1000];
void fac(ll m)
{
	ll i;
	fact[0]=1;
	for(i=1;i<1000;i++)
	{
		fact[i]=(i*fact[i-1])%m;
	}
}

ll comb(ll n,ll k,ll m)
{
	return(fact[n]*modInverse(fact[k],m)%m *modInverse(fact[n-k],m)%m)%m;
}
bool cmp(pair<ll,ll> a,pair<ll,ll>b)
{
	if(a.second==b.second)
	return a.first<b.first;
	return a.second>b.second;
}
void SieveOfEratosthenes(ll n) 
{ 
    // Create a boolean array "prime[0..n]" and initialize 
    // all entries it as true. A value in prime[i] will 
    // finally be false if i is Not a prime, else true. 
     bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
  
    for (ll p=2; p*p<=n; p++) 
    { 
        // If prime[p] is not changed, then it is a prime 
        if (prime[p] == true) 
        { 
            // Update all multiples of p greater than or  
            // equal to the square of it 
            // numbers which are multiple of p and are 
            // less than p^2 are already been marked.  
            for (ll i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
}
int main () {
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  int interaction[7][7]={{0,0,1,0,0,3,0},{0,0,0,0,0,1,0},{0,1,0,0,0,1,0},{2,1,1,0,0,2,1},{0,0,1,0,0,1,0},{0,2,1,0,0,0,0},{0,0,1,0,1,3,0}};
  int sum=0;
  int i,j;
  for(i=0;i<7;i++)
  {
  	for(j=0;j<7;j++)
  	sum+=interaction[i][j];   //calculating thr interaction matrix
  }
  cout<<"Sum  = "<<sum*2<<endl;  //the denominator of causes and effects
  double activation[7];
  int i1;
  for(i1=0;i1<7;i1++)
  {
  	int v=0;
  	for(i=0;i<7;i++)
  	{
	  
  	v+=interaction[i][i1];  //calculating sum of causes
  	v+=interaction[i1][i];    //calculating sum of effects
  }//cout<<"V  =  "<<v<<endl;
  activation[i1]=v*1.0/(2*sum);

  }
  for(i=0;i<7;i++)
  cout<<"Activation for "<<i+1<<"th parameter  "<<activation[i]*100.0<<endl;  //printing the activation of each parameter
  
return 0;
}

