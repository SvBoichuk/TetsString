#pragma once

enum RET_VALUES{LESS = -1,EQUAL = 0, GREAT = 1};
typedef unsigned int size_t;

int m_strcmp	(const char* str1, const char* str2);

size_t m_strlen	(const char* str);

char* m_strcpy	(char* dest, const char* src);

char* m_strncpy	(char* dest, size_t n, const char* src);

char* m_strcat	(char* dest, const char* src);

char* m_strncat	(char* dest, size_t n, const char* src);

void * m_memset	(char * dest, int z, size_t size);

char* m_strchr	(const char* s, int c);

char* m_strtok	(char* str, const char* delim);

size_t m_strspn (const char* str, const char* accept);

size_t m_strcspn(const char* str, const char* reject);

void* m_memchr	(const char* str, char c, size_t size);

int m_memcmp	(const void* s1, const void* s2, size_t n);

char* m_strpbrk (const char* str, const char* accept);