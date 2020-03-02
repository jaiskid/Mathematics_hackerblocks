#include<iostream>
using namespace std;
int dectoct(int n){
	int sum=0;
	int p=1;
	while(n){
		int rem=n%8;
		sum+=rem*p;
		
		
		n/=8;
		p*=10;
	}
	return sum;
}
int main() {
	int n;
	cin>>n;
	cout<<dectoct(n);
}