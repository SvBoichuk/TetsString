#include "MyString.h"

int m_strcmp	(const char * str1,const char * str2)
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

size_t m_strlen (const char * str)
{
	if (str == nullptr)
		return 0;

	size_t size = 0;

	while ( *(str++) != '\0')
	{
		size++;
	}

	return size;
}

char * m_strcpy (char * dest, const char * src)
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

char * m_strcat (char * dest, const char * src)
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

void * m_memset (char * dest, int z, size_t size)
{
	while (size--)
		*(dest++) = z;
	*dest = '\0';

	return (void*) dest;
}

char * m_strchr (const char * s, int c)
{
	if (s == nullptr)
		return nullptr;

	char* ret = nullptr;

	while (*s)
	{
		if (*s++ == (char)c)
			ret = (char*)s;
	}

	return ret;
}

char * m_strtok (char * str, const char * delim)
{
	static char* ptr = nullptr;

	if(str == nullptr || delim == nullptr)
		return nullptr;


}

size_t m_strspn (const char * str, const char * accept)
{
	if (str == nullptr || accept == nullptr)
		return 0;

	size_t size = 0;

	while (*str && m_strchr(accept, *str++))
		size++;
	
	return size;
}

size_t m_strcspn(const char * str, const char * reject)
{
	if (str == nullptr || reject == nullptr)
		return 0;

	size_t size = 0;

	while (*str)
	{
		if (m_strchr(reject, *str))
			return size;
		else
			size++, str++;
	}

	return size;
}

