#include <iostream>
#include "MyString.h"
#include "String.h"
#include <string.h>

void main()
{
	String str("hello");

	std::cout << str << " , len = " << str.length() << std::endl;
	str.clear();
	std::cout << "len = " << str.length() << " str = " << str << std::endl;
}