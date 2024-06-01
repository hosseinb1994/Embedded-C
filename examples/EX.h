#ifndef EX_H
#define EX_H


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void Shifting();
int fill_stack(int n);
unsigned long long fib(int n);
double average_of_three(double a, double b, double c);
double avg_of_double(int length, double input_data[]);
int Condition_EX(int condition_value);
int funca(int a);
int funcb(int b);
int func(int funca, int funcb);
void Intsize();
char PrintArray(char string_array_1[]);
int add(int a, int b);
int subtract(int a, int b);
int (*func_ptr)(int a, int b);
void Print_pointer(void* ptr);
void Malloc_func();
void alloc_mem_struct();
void enum_func();
void enum_union();

#endif // !EX_H
