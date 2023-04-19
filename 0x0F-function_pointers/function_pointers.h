#ifndef function_pointers_h_
#define function_pointers_h_

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
typedef __SIZE_TYPE__ size_t;
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
#endif
