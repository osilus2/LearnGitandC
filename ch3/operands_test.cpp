#include "../std_lib_facilities.h"
// test of operands
int main()
{
	cout<<"Enter a floating point value: ";
	double n;
	cin >> n;
	cout << "n==" << n
		<< "\nn+1==" << n+1
		<< "\n3*n==" << 3*n
		<< "\nn squared==" << n*n
		<< "\nsquare root of n ==" << sqrt(n)
		<< endl;

}

