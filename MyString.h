#pragma once

enum RET_VALUES{LESS = -1,EQUAL = 0, GREAT = 1};
typedef unsigned int size_t;


int m_strcmp(const char* str1, const char* str2);

size_t m_strlen(const char* str);

char* m_strcpy(char* dest, const char* src);

char* m_strncpy(char* dest, size_t n, const char* src);

char* m_strcat(char* dest, const char* src);

char* m_strncat(char* dest, size_t n, const char* src);

void* m_memset(char* dest, size_t size ,char symbol = '\0');

char* m_strchr(const char* str, char c);