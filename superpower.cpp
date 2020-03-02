#include<iostream>
using namespace std;
int power(int a,int b){
	if(b==0)
	return 1;

	int smallerpower=power(a,b/2);
	smallerpower*=smallerpower;
	if(b&1){
	return a*smallerpower;
	}
	return smallerpower;

}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<power(a,b);
}	