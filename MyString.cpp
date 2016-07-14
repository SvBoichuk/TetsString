#include "MyString.h"

int m_strcmp(const char * str1,const char * str2)
{
	RET_VALUES state;
	if (m_strlen(str1) == m_strlen(str2))
	{
		while(str1 != '\0')
		{
			if (*(str1++) > *(str2)++)
			{
				state = RET_VALUES::GREAT;
				break;
			}
			else if (*(str1)++ < *(str2)++)
			{
				state = RET_VALUES::LESS;
				break;
			}
			else
			{
				state = RET_VALUES::EQUAL;
				break;
			}
		}
	}
	else state = (m_strlen(str1) > m_strlen(str2)) ? RET_VALUES::GREAT : RET_VALUES::LESS;

	return state;
}

size_t m_strlen(const char * str)
{
	if (str == nullptr) // HZ
		return 0;

	size_t size = 0;

	while ( *(str++) != '\0')
	{
		size++;
	}

	return size;
}

char * m_strcpy(char * dest, const char * src)
{
	if (src == nullptr)
		return nullptr;

	while ( (*src) != '\0')
	{
		*(dest++) = *(src++);
	}
	*dest = '\0';

	return dest;
}

char * m_strncpy(char * dest, size_t n, const char * src)
{
	if (src == nullptr)
		return nullptr;

	for (; n--;)
	{
		*(dest++) = *(src++);
	}
	*dest = '\0';

	return dest;
}

char * m_strcat(char * dest, const char * src)
{
	if (src == nullptr)
		return dest;

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
	if (src == nullptr)
		return dest;

	dest += m_strlen(dest);

	for (;n--;)
	{
		*(dest++) = *(src++);
	}
	*dest = '\0';

	return dest;
}

void * m_memset(char * dest, int z, size_t size)
{
	while (size--)
		*(dest++) = z;
	*dest = '\0';

	return (void*) dest;
}

char * m_strchr(const char * s, int c)
{
	if (s == nullptr)
		return nullptr;

	while (*s)
	{
		if (*s++ == (char)c)
			return (char*)s;
	}

	return nullptr;
}

