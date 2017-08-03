#include<iostream>
using namespace std;
int main()
{ int n,i,sum=0;
cout<<" enter a number";
cin>>n;
for(i=1; i<=n ; i++){
	if(i%2==0)
	sum= sum+i;
}
cout<<" sum of even numbers is"<< sum;
return 0;
}
