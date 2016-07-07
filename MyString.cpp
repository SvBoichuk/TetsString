#include "MyString.h"

int m_strcmp(const char * str1,const char * str2)
{
	if (m_strlen(str1) == m_strlen(str2))
	{
		while(str1 != '\0')
		{
			if (*(str1++) > *(str2)++)
				return RET_VALUES::GREAT;
			else if (*(str1)++ < *(str2)++)
				return RET_VALUES::LESS;
			else return RET_VALUES::EQUAL;
		}
	}
	else return m_strlen(str1) > m_strlen(str2) ? RET_VALUES::GREAT : RET_VALUES::LESS;
}

size_t m_strlen(const char * str)
{
	size_t size = 0;

	while ( *(str++) != '\0')
	{
		size++;
	}

	return size;
}

char * m_strcpy(char * dest, const char * src)
{
	while ( (*src) != '\0')
	{
		*(dest++) = *(src++);
	}
	*dest = '\0';

	return dest;
}

char * m_strncpy(char * dest, size_t n, const char * src)
{
	for (; n--;)
	{
		*(dest++) = *(src++);
	}
	*dest = '\0';

	return dest;
}

char * m_strcat(char * dest, const char * src)
{
	dest += m_strlen(dest);

	while ( (*src) != '\0' )
	{
		*(dest++) = *(src++);
	}
	*dest = '\0';

	return dest;
}

char * m_strncat(char * dest, size_t n, const char * src)
{
	dest += m_strlen(dest);

	for (;n--;)
	{
		*(dest++) = *(src++);
	}
	*dest = '\0';

	return dest;
}

void * m_memset(char * dest, size_t size, char symbol)
{
	while (size--)
		*(dest++) = symbol;
	*dest = '\0';

	return (void*) dest;
}

char * m_strchr(const char * str, char c)
{
	/*TODO*/
	while (*(str++) != '\0')
	{
		if (*str == c)
			return const_cast<char*>(str);
	}
}
