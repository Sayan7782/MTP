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
  double pw[8]={123,126,129,144,146,150,150,150};
  double far_mpt[8],far_mpp[8];
  double vi[8]={36.8055,36.6666,53.4722,63.4722,50.3742,60.9722,41.0416,52.9861};
  double far_a[8]={5.52,6.05,4.79,4.62,5.43,4.86,5.81,5.12};
  double eff[8];
  int i;
  for(i=0;i<8;i++)
  {
  	 far_mpt[i]=(pw[i]*0.6)/(0.75*5.0);
  	 far_mpp[i]=(100-vi[i])/(100)*(far_mpt[i]);
  	 eff[i]=(far_a[i]/far_mpp[i])*100.0;
  	 
  }
  for(i=0;i<8;i++)
  {
  	cout<<"For "<<i<<"th   panel mpt "<<far_mpt[i]<<endl;
  	cout<<"For "<<i<<"th   panel mpp "<<far_mpp[i]<<endl;
  	cout<<"Efficiency of "<<i<<"th panel  "<<eff[i]<<endl;
  }
return 0;
}

