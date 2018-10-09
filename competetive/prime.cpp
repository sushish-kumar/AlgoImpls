#include<iostream>
using namespace std;
int sieve(int n)
{
	int primes[n+1];
	for(int i=0;i<=n;i++)
		primes[i]=1;
	primes[0]=0;
	primes[1]=0;
	for (int i = 2; i < n; ++i)
	{
		if(primes[i]==1){
			for(int j=2;i*j<=n;j++)
			primes[i*j]=0;
		}
	}
	 for (int p=2; p<=n; p++) 
       if (primes[p]) 
          cout << p << " "; 
}
int main()
{int n;
	cin>>n;
	sieve(n);
							
	return 0;
}
