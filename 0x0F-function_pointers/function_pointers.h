#ifndef function_pointers_h_
#define function_pointers_h_

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
int int_index(int *array, int size, int (*cmp)(int));
#endif
