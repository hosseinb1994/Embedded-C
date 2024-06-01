#include "EX.h"

//-----Shifting---------//
void Shifting() {
	int b = 5;
	printf("b is:%d\n", b);
	int a = b << 2;
	printf("a is :%d\n", a);
	int a1 = b >> 2;
	printf("a1 is :%d\n", a1);
}
//-----Stack overflow---------//
int fill_stack(int n)
{
	if (n <= 1) /* This limits the depth of recursion. */
		return 1;
	else
		return fill_stack(n - 1);
}
//-----Fibonacci---------//
unsigned long long fib(int n) {
	unsigned long long last = 1, prev = 0, i;
	printf("Fibonaci nums are :%llu\n", prev);
	for (i = 1; i <= n; ++i)
	{
		unsigned long long next = prev + last;
		prev = last;
		last = next;
		printf("Fibonaci nums are:%llu\n", next);
	}
	return last;
}
//-----Double example---------//
double average_of_three(double a, double b, double c)
{
	double res = (a + b + c) / 3;
	printf("Average is: %f\n", res);
	return res;
}
//-----Array example---------//
double avg_of_double(int length, double input_data[])
{
	double sum = 0;
	int i;
	for (i = 0; i < length; i++) {
		sum = sum + input_data[i];
	}
	double res = sum / length;
	printf("Result is:%f\n", res);
	return res;
}
//-----Pointer-Structure-Array_element---------//

//-----Condition expression---------//

int Condition_EX(int condition_value)
{
	condition_value >= 10 ? printf("True\n") : printf("false\n");
	return 0;
}
//-----Functions add---------//
int funca(int a)
{
	return a;
}
int funcb(int b)
{
	return b;
}
int func(int funca, int funcb)
{
	printf("result is: %d\n", funca + funcb);
	return 0;
}
//-----Integer data types size---------//
void Intsize()
{
	printf("size of signed char is:%d\n", sizeof(signed char));
	printf("size of short is:%d\n", sizeof(short));
	printf("size of short int is:%d\n", sizeof(short int));
	printf("size of long int is:%d\n", sizeof(long int));
	printf("size of int is:%d\n", sizeof(int));
	printf("size of long is:%d\n", sizeof(long));
	printf("size of long long is:%d\n", sizeof(long long));
	printf("size of unsigned long long is:%d\n", sizeof(unsigned long long));
	printf("size of long long int is:%d\n", sizeof(long long int));
	printf("size of double is:%d\n", sizeof(double));
	printf("size of float is:%d\n", sizeof(float));
	printf("size of long double is:%d\n", sizeof(long double));
}
//-----Print array---------//
char PrintArray(char string_array_1[])
{
	printf(string_array_1);
}
//-----Function pointer---------//
int add(int a, int b)
{
	return a + b;
}
int subtract(int a, int b)
{
	return a - b;
}
int (*func_ptr)(int a, int b);
//-----Print pointer---------//
void Print_pointer(void* ptr)
{
	printf("Pointer value is %p\n", ptr);
	printf("------------------------\n");
	printf("Pointer value is %s\n", (char*)ptr);
}
//-----Allocating Memory---------//
void Malloc_func()
{
	printf("-----------Allocating Memory-------------\n");
	int* arr;
	int n = 50;

	// Allocate memory for an array of 5 integers
	arr = (int*)malloc(n * sizeof(int));

	if (arr == NULL) {
		printf("Memory allocation failed\n");
		return 1;
	}

	// Use the allocated memory
	for (int i = 0; i < n; i++) {
		arr[i] = i * 2;
		printf("arr[%d] = %d\n", i, arr[i]);
	}

	// Free the allocated memory
	free(arr);
	printf("-----------Allocating Memory-------------\n");
}
//-----Allocating Memory for Structures---------//
void alloc_mem_struct()
{
	printf("-----------Allocating Memory for Structures-------------\n");
	typedef struct {
		int id;
		char name[50];
	} Person;
	Person* p;

	// Allocate memory for a Person structure
	p = (Person*)malloc(sizeof(Person));

	if (p == NULL) {
		printf("Memory allocation failed\n");
		return 1;
	}

	// Use the allocated memory
	p->id = 1;
	strcpy(p->name, "John Doe");

	printf("Person ID: %d, Name: %s\n", p->id, p->name);

	// Free the allocated memory
	free(p);
	printf("-----------Allocating Memory for Structures-------------\n");

}

//-----enum---------//
enum Day {
	SUNDAY,
	MONDAY,
	TUESDAY,
	WEDNESDAY,
	THURSDAY,
	FRIDAY,
	SATURDAY
};
// Define an enumeration for value types with unique names to avoid conflicts
typedef enum {
	VALUE_INT,
	VALUE_FLOAT,
	VALUE_STRING
} ValueType;

// Define a union to hold different types of values
typedef union {
	int i;
	float f;
	char str[20];
} Value;

// Define a structure that combines the ValueType and the Value union
typedef struct {
	ValueType type;
	Value value;
} TypedValue;

//-----------enum & union----------//
void enum_union()
{
	printf("-----------enum & union-------------\n");
	// Create an instance of TypedValue and set it to hold an integer
	TypedValue v1;
	v1.type = VALUE_INT;
	v1.value.i = 42;

	// Check the type and print the value if it is an integer
	if (v1.type == VALUE_INT) {
		printf("Integer: %d\n", v1.value.i);
	}

	// Create another instance of TypedValue and set it to hold a string
	TypedValue v2;
	v2.type = VALUE_STRING;
	strcpy(v2.value.str, "Hello, World!");

	// Check the type and print the value if it is a string
	if (v2.type == VALUE_STRING) {
		printf("String: %s\n", v2.value.str);
	}
	printf("-----------enum & union-------------\n");
}
void enum_func()
{
	printf("-----------enum-------------\n");
	enum Day today = WEDNESDAY;

	switch (today) {
	case SUNDAY:
		printf("Today is Sunday.\n");
		break;
	case MONDAY:
		printf("Today is Monday.\n");
		break;
	case TUESDAY:
		printf("Today is Tuesday.\n");
		break;
	case WEDNESDAY:
		printf("Today is Wednesday.\n");
		break;
	case THURSDAY:
		printf("Today is Thursday.\n");
		break;
	case FRIDAY:
		printf("Today is Friday.\n");
		break;
	case SATURDAY:
		printf("Today is Saturday.\n");
		break;
	default:
		printf("Invalid day.\n");
		break;
	}
	printf("-----------enum-------------\n");
}