#include <stdexcept>  
#include <limits>  
#include <iostream> 
#include "Exception.h"

using namespace std;

class OutRiteLineException : public Exception
{
protected:
	virtual char* Name()
	{
		return "OutRiteLineException";
	}

public:
	OutRiteLineException() : Exception("The number bigger than dictionary.") { }
};
class OutLeftLineException : public Exception
{
protected:
	virtual char* Name()
	{
		return "OutLeftLineException";
	}

public:
	OutLeftLineException() : Exception("The number smaller than zero.") { }
};
