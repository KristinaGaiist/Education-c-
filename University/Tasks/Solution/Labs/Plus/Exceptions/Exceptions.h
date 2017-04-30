#include <stdexcept>  
#include <limits>  
#include <iostream>  

using namespace std;

class InvalidNumber
{
public:
	InvalidNumber() 
	{
		cout << "Invalid nubber. Enter first, center or last number." << endl;
	}
};
