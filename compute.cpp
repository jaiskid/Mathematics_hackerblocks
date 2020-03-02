#include<iostream>
using namespace std;
long long int compute(long long int n){
	if(n&1){
	return ((n+1)/2)*(-1);
	}
	else{
	
	return n/2;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
	long long int n;
	cin>>n;
	cout<<compute(n)<<endl;
	}
}