#ifndef MAIN_H
#define MAIN_H

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _putchar(char c);
char *_strcpy(char *dest, char *src);
unsigned int _strlen(char *s);
char *_strncat(char *dest, char *src, unsigned int n);
char *_memcpy(void *dest, void *src, unsigned int n);

#endif /* MAIN_H */
