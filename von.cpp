#include<iostream>
using namespace std;
int von(int n){
	int sum=0;
	int p=1;
	while(n){
		int rem=n%10;
		sum+=rem*p;
		p*=2;
		n/=10;
	}
	return sum;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<von(n)<<endl;
	}
}