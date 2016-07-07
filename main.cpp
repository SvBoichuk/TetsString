#include <iostream>
#include "MyString.h"
#include "String.h"
#include <string.h>

void main()
{
	String str("hello world!");
	String str1("pzdc");
	str += str1;

	String str3(5,'c');

	std::cout << str3;

	String::str_reverse(str1);
	std::cout << (str1 < str) << std::endl;
}