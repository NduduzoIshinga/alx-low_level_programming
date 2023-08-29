#ifndef main_h
#define main_h

char *_memset(char *s, char b, unsigned int n);
void _putchar(char c);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
int isin(char *str, char c);
char *_strpbrk(char *s, char *accept);
int allin(char *str, char *c, int n);
int lenstr(char *s);
char *_strstr(char *haystack, char *needle);

#endif
