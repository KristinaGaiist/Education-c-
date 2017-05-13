#include <stdexcept>  
#include <limits>  
#include <iostream> 
#include "Exception.h"

using namespace std;

class OutRiteLineException : public Exception
{
public:
	OutRiteLineException() : Exception("The number bigger than dictionary.") { }
};
class OutLeftLineException : public Exception
{
public:
	OutLeftLineException() : Exception("The number smaller than zero.") { }
};
