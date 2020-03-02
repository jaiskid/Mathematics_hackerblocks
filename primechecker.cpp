#include<iostream>
using namespace std;
bool isprime(int n){
	for(int i=2;i<n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
int main() {
	int n;
	cin>>n;
	(isprime(n))?cout<<"Prime\n":cout<<"Not Prime\n";
}