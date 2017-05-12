#pragma once

class Exception
{
protected:
	char* _message;

	virtual char* Name()
	{
		return "Exception";
	}
public:
	Exception()
	{
		_message = new char[0];
	}
	Exception(char* message)
	{
		int length = strlen(message) + 1;
		_message = new char[length];
		strcpy_s(_message, length, message);
	}
};

class AddInfo
{
protected:
	char const* _file;
	int _line;
public: 
	AddInfo(char const* file, int line) : _file(file), _line(line) { }
};

template<class TException>
class Wrapper : public TException, public AddInfo
{
public:
	Wrapper(TException ex, AddInfo info) : TException(ex), AddInfo(info) { }

	void Print()
	{
		std::cout << _message << "; Line: " << _line << "; File: " << _file << std::endl;
	}
};

template<class TException>
void operator+ (AddInfo const &info, TException const &ex)
{
	throw Wrapper<TException>(ex, info);
}