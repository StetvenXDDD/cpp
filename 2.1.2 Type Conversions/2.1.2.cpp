#include <iostream>
using namespace std;

int main()
{
	unsigned u=10,u2=42;
	cout<<u2-u<<std::endl;//the result is in the range of unsigned type 
	cout<<u-u2<<std::endl;//the result is an nagetive number 
						  //the result is depended on how many bits 
						  //an int has on the particular machine		
	int i=10,i2=42;
	cout<<i2-i<<std::endl;//the type of the result is int 
	cout<<i-i2<<std::endl;//the same as above 
	cout<<i-u<<std::endl;//i is automatically converted to unsigned 
	cout<<u-i<<std::endl;//and the result is 0 within the range of unsigned 
	return 0;
}
