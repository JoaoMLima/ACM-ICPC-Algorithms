#include <bits/stdc++.h>
using namespace std;

long long power(long long x,long long n){
	if(n==0){
		return 1ll;
	}
	if (n & 1) {
		return x*power(x,n-1);
	}
	x = power(x,n >> 1);
	return x*x;
}

int main(){
	long long x,n;
	cin>>x>>n;
	cout<<power(x,n)<<endl;
}