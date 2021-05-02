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
  double p1[8]={51.3,44.2,42.4,29.7,53.2,32.1,58.6,48.7};
  double p2[8]={2.7,9.1,12.5,13.2,18.4,12.6,7.8,14.8};
  double p3[8]={0.87,1.07,0.98,0.92,1.43,0.87,1.13,1.19};
  double p4[8]={1.32,1.19,1.36,0.73,1.41,1.20,0.98,1.14};
  double p5[8]={14.94,13.62,16.13,18.97,16.78,25.36,12.13,17.06};
  double p6[8]={123,126,129,144,146,150,150,148};
  double p7[8]={32.17,39.92,38.14,33.68,42.70,27.32,44.67,38.42};
  int i;
  double d1[8],d2[8],d3[8],d4[8],d5[8],d6[8],d7[8];
  for(i=0;i<8;i++)
  {
  	if(p1[i]<21)
  	d1[i]=0;
  	if(p1[i]>=21 && p1[i]<=40)
  	d1[i]=1;
  	if(p1[i]>=41 && p1[i]<=60 )
  	d1[i]=2;
  	if(p1[i]>=61 && p1[i]<=80 )
  	d1[i]=3;
  	if(p1[i]>=81 && p1[i]<=100)
  	d1[i]=4;
}
cout<<"The discrete points for parameter 1 are  "<<endl;
for(i=0;i<8;i++)
cout<<d1[i]<<endl;

for(i=0;i<8;i++)
  {
  	
  	if(p2[i]<5)
  	d2[i]=3;
  	if(p2[i]>=5 && p2[i]<10)
  	d2[i]=2;
  	if(p2[i]>=10 && p2[i]<=15 )
  	d2[i]=1;
  	if(p2[i]>=15 )
  	d2[i]=0;
  	
}
cout<<"The discrete points for parameter 2 are  "<<endl;
for(i=0;i<8;i++)
cout<<d2[i]<<endl;

for(i=0;i<8;i++)
  {
  	
  	if(p3[i]<0.75)
  	d3[i]=0;
  	if(p3[i]>=0.75 && p3[i]<1)
  	d3[i]=1;
  	if(p3[i]>=1 && p3[i]<1.25 )
  	d3[i]=2;
  	if(p3[i]>=1.25 )
  	d3[i]=3;
  	
}
cout<<"The discrete points for parameter 3 are  "<<endl;
for(i=0;i<8;i++)
cout<<d3[i]<<endl;


for(i=0;i<8;i++)
  {
  	
  	if(p4[i]<0.25)
  	d4[i]=0;
  	if(p4[i]>=0.25 && p4[i]<0.5)
  	d4[i]=1;
  	if(p4[i]>=0.5 && p4[i]<0.75)
  	d4[i]=2;
  	if(p4[i]>=0.75 && p4[i]<1 )
  	d4[i]=3;
  	if(p4[i]>=1 && p4[i]<1.25)
  	d4[i]=4;
  	if(p4[i]>=1.25)
  	d4[i]=5;
  	
}
cout<<"The discrete points for parameter 4 are  "<<endl;
for(i=0;i<8;i++)
cout<<d4[i]<<endl;


for(i=0;i<8;i++)
  {
  	
  	if(p5[i]<15)
  	d5[i]=3;
  	if(p5[i]>=15 && p5[i]<30)
  	d5[i]=2;
  	if(p5[i]>=30 && p5[i]<45)
  	d5[i]=1;
  	if(p5[i]>=45 )
  	d5[i]=0;
  	
  	
}
cout<<"The discrete points for parameter 5 are  "<<endl;
for(i=0;i<8;i++)
cout<<d5[i]<<endl;
  	
for(i=0;i<8;i++)
  {
  	
  	if(p6[i]<100)
  	d6[i]=4;
  	if(p6[i]>=100 && p6[i]<120)
  	d6[i]=3;
  	if(p6[i]>=120 && p6[i]<135)
  	d6[i]=2;
  	if(p6[i]>=135 && p6[i]<155 )
  	d6[i]=1;
  	if(p6[i]>=155)
  	d6[i]=0;
  	
  	
}
cout<<"The discrete points for parameter 6 are  "<<endl;
for(i=0;i<8;i++)
cout<<d6[i]<<endl; 


for(i=0;i<8;i++)
  {
  	
  	if(p7[i]<21)
  	d7[i]=0;
  	if(p7[i]>=21 && p7[i]<=40)
  	d7[i]=1;
  	if(p7[i]>=41 && p7[i]<=60)
  	d7[i]=2;
  	if(p7[i]>=61 && p7[i]<=80 )
  	d7[i]=3;
  	if(p7[i]>=81)
  	d7[i]=4;
  	
  	
}
cout<<"The discrete points for parameter 7 are  "<<endl;
for(i=0;i<8;i++)
cout<<d7[i]<<endl; 

 	
  	
  

  
return 0;
}

