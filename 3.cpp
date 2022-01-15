#include <iostream>
using namespace std;
int main()
{
	int n1, n2, n3, temp=0;
	cout<<"Please input the first number"<<\n;
	cin>>n1;
	cout<<"please input the second number"<<\n;
	cin>>n2;
	cout<<"please input the third number"<<\n;
	cin>>num3;
	if (n1>n2){
		temp=n1;
		n1=n2;
		n2=temp;
	}
	if (n1>n3){
		temp=0;
		temp=n1;
		n1=n3;
		n3=temp;
	}
	if (n2>n3){
		temp=0;
		temp=n2;
		n2=n3;
		n3=temp;
	}
	cout<<n1<<" "<<n2<<" "<<n3<<endl;
	return 0;
}
