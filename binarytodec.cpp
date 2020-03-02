#include<iostream>
using namespace std;
int binarytodec(int num){
	int sum=0;
	int p=1;
	while(num){
		int rem=num%10;
		sum+=rem*p;
		p*=2;
		num/=10;
	}
	return sum;
}
int main() {
int n;
cin>>n;
cout<<binarytodec(n);
}