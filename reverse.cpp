#include<iostream>
using namespace std;
void reverse(int n){
	while(n){
		int sum=0;
		int rem=n%10;
		sum=sum+rem;
		cout<<sum;
		n/=10;
	}
}
int main() {
	int n;
	cin>>n;
	
	reverse(n);
}