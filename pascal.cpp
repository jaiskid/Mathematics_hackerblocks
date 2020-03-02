//author Neeraj jaiswal
//problem Statement pascal triangle
#include<iostream>
using namespace std;
int main()
{
    int coef=1,space,i,j;
    int n;
    cin>>n;
 
    for(i=0;i<n;i++)
    {
        for(space=1;space<=n-i;space++)
            printf("  ");
 
        for(j=0;j<=i;j++)
        {
            if (j==0 || i==0)
                coef = 1;
            else
                coef=coef*(i-j+1)/j;
 
            printf("%4d",coef);
        }
        cout<<endl;
    }
}