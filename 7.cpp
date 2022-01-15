#include <iostream>
using namespace std;
int main()
{
	float x,y,z,min,max,sum,average;
	cout<<"please enter three numbers";
	 cin>>x>>y>>z;
	 sum=x+y+z;
	cout<< "the three number sum is "<< sum\n ;
	  avg=(x+y+z)/3;
	cout<<" the three number is average "<< average\n;

	if (x>y && x>z)
      max = x;
   else if (y>z)
      max = y;
    else
      max = z;
   cout << " the three number is max "<< max\n;
     if (x<y && x<z)
      min = x;
    else if (y<z)
      min = y;
    else
      min = z;
   cout << " the three number is min "<< min\n;
    return 0;
}


