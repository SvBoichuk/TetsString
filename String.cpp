#include "String.h"

String::String() : size(0), str(nullptr)
{
}

String::String(const char *src) : size(m_strlen(src))
{
	str = new char[size + 1];
	m_strcpy(str, src);
}

String::String(const String & _str)
{
	size = _str.size;
	str = new char[size+1];
	m_strcpy(str,_str.str);
}

String::String(size_t _size, const char c)
{
	str = new char[_size + 1];
	m_memset(str, _size, c);
}

String & String::operator=(String & Str)
{
	if (this == & Str)
		return *this;

	return String( Str);
}

String& String::operator+=(const String &obj)
{
	String temp(*this);
	delete[] str;
	str = new char[temp.size + obj.size + 1];
	m_strcpy(str, temp.str);
	m_strcat(str, obj.str);

	return *this;
}


void String::str_reverse(String& _str)
{
	int len = _str.size;
	for (int i = 0; i < len / 2; i++)
	{
		_str[len] = _str[i];
		_str[i] = _str[len - 1 - i];
		_str[len - 1 - i] = _str[len];
	}
	_str[len] = '\0';
}

String::~String()
{
	if(str != nullptr)
		delete[] str;
}

bool operator<(const String & str1, const String & str2)
{
	return m_strcmp(str1.str, str2.str) == RET_VALUES::LESS;
}

std::ostream & operator<<(std::ostream& os, const String & str)
{
	os << str.str << std::endl;
	return os;
}

std::istream & operator >> (std::istream& is, String & str)
{
	is >> str.str;
	return is;
}
