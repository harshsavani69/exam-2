#include<iostream>
#include<string.h>

using namespace std;

class Distance{
	public :
		int feet;
		int inch;
};
int main()
{

    Distance d1,d2,sum;
	cout<<"enter 1st distance \n";
	cout<<"enter feet";
	cin>>d1.feet;
	cout<<"enter inch";
	cin>>d1.inch;
    cout<<"enter 2nd distance \n";
    cout<<"enter feet";
    cin>>d2.feet;
    cout<<"enter inch";
    cin>>d2.inch;
    sum.feet = d1.feet+d2.feet;
    sum.inch = d1.inch+d2.inch;
    	++sum.feet;
    if(sum.inch>12){
    	sum.inch=12;
	};
	cout<<"  sum of	distance = "<< sum.feet << "inch" << sum.inch << "inches" ;
	cout<<endl;
	
}
