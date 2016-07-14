#ifndef _M_STRING_
#define  _M_STRING_

#include <iostream>
#include "MyString.h"

class String
{
private:
	char* str;
	size_t size;
public:
	String();
	explicit String(const char*);
	explicit String(const String&);
	String(size_t _size, const char c);
	String& operator=(String&);
	String& operator+=(const String&);
	size_t length() const { return size; }
	bool empty() const { return size == 0; }

	const char* to_c_str() const { return str; }

	const char& operator[](int index) const { return str[index]; }
	char& operator[](int index) { return str[index]; }

	friend bool operator<(const String& str1, const String& str2);
	friend std::ostream& operator<<(std::ostream& os, const String& str);
	friend std::istream& operator>>(std::istream& is, String& str);

	static void str_reverse(String& _str);

	~String();
};

#endif