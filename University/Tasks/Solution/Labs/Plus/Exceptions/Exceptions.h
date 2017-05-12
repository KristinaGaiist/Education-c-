#include <stdexcept>  
#include <limits>  
#include <iostream> 
#include "Exception.h"

using namespace std;

class InvalidNumberException : public Exception
{
protected:
	virtual char* Name()
	{
		return "InvalidNumberException";
	}

public:
	InvalidNumberException() : Exception("VSE PLOHO") { }
};
