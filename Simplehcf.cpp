#include<iostream>
using namespace std;
int gcd(int a,int b){
	if(a==0)
	{
		return b;
	}
	return gcd(b%a,a);
}
int hcf(int *arr,int n){
	int result=arr[0];
	for(int i=0;i<n;i++){
		result=gcd(result,arr[i]);
	}
	return result;
}
int main() {
	int n;
	cin>>n;
	int arr[100];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<hcf(arr,n);
}