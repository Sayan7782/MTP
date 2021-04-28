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
  double a[7]={12.5,10.4167,14.5833,6.25,29.1667,12.5};
  double vi1=100.0,vi2=100.0;double vi3=100.0;double vi4,vi5,vi6;
  double vi7,vi8;
  vi4=vi5=vi6=vi7=vi8=100.0;
  double qmax[7]={4,3,3,5,3,4,4};
  double q1[7]={2,3,1,5,3,2,1};
  double q2[7]={2,2,2,4,3,2,1};
  double q3[7]={2,1,1,5,2,2,1};
  double q4[7]={1,1,1,2,2,1,1};
  double q5[7]={2,0,3,5,2,1,2};
  double q6[7]={1,1,1,4,2,1,1};
  double q7[7]={2,2,2,3,3,1,2};
  double q8[8]={2,1,2,4,2,1,1};
  int i;
  for(i=0;i<7;i++)
  {
  	vi1-=(a[i]*q1[i])/qmax[i];
  	vi2-=(a[i]*q2[i])/qmax[i];
  	vi3-=(a[i]*q3[i])/qmax[i];
  	vi4-=(a[i]*q4[i])/qmax[i];
  	vi5-=(a[i]*q5[i])/qmax[i];
  	vi6-=(a[i]*q6[i])/qmax[i];
  	vi7-=(a[i]*q7[i])/qmax[i];
  	vi8-=(a[i]*q8[i])/qmax[i];
  }
  
  cout<<"V1i  "<<vi1<<endl;
  cout<<"V2i  "<<vi2<<endl;
  cout<<"V3i  "<<vi3<<endl;
  cout<<"V4i  "<<vi4<<endl;
  cout<<"V5i  "<<vi5<<endl;
  cout<<"V6i  "<<vi6<<endl;
  cout<<"V7i  "<<vi7<<endl;
  cout<<"V8i   "<<vi8<<endl;
return 0;
}

