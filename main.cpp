#include <iostream>

extern "C" {
	#include "EX.h"
}

double input_data[] = { 1.2,4.1,5.9,5,10.5 };
char string_array_1[] = { 'F','O','O','!','\0' };
char string_array_2[] = "FOO!";
struct person
{
	char name[50];
	int age;
	float height;
};
typedef struct
{
	char name[50];
	int age;
	float height;
}persondetails;

typedef struct {
	int day;
	int month;
	int year;
} Date;

typedef struct {
	char name[50];
	int age;
	float height;
	Date birthdate;
} Persondetails1;

typedef union {
	int i;
	float f;
	char str[20];
} Data1;

typedef struct {
	char name[50];
	int age;
	union {
		int id_number;
		char passport_number[20];
	} id;
	int is_id_number;  // 1 if id_number is valid, 0 if passport_number is valid
} Person4;
struct line {
	int length;
	char contents[0];
};

int main() {

	//Shifting();
	//fill_stack(10);
	//fib(200);
	//average_of_three(1.1,9.8,3.62);
	//avg_of_double((sizeof(input_data)/ sizeof(input_data[0])), input_data);
	//Condition_EX(50);
	//func( funca(1), funcb(10));
	//Intsize();
	//PrintArray(string_array_2);//or string_array_1
	//func_ptr = add;
	//int result = func_ptr(5, 3);
	//printf("result is:%d\n", (unsigned int) & result);
	//func_ptr = subtract;
	//result = func_ptr(5, 3);
	//printf("result is:%d\n", result);
	//const char* ptr = "ham";
	//Print_pointer((char *)ptr);
	//Malloc_func();
	//alloc_mem_struct();
	enum_func();
	enum_union();
	struct person person1;
	strcpy(person1.name, "Hossein");
	person1.age = 30;
	person1.height = 5.9;
	// Accessing structure members
	printf("Name: %s\n", person1.name);
	printf("Age: %d\n", person1.age);
	printf("Height: %.1f\n", person1.height);
	persondetails person2;
	strcpy(person2.name, "Hossein");
	person2.age = 30;
	person2.height = 5.9;
	// Accessing structure members
	printf("Name: %s\n", person2.name);
	printf("Age: %d\n", person2.age);
	printf("Height: %.1f\n", person2.height);

	Persondetails1 p;
	strcpy(p.name, "John Doe");
	p.age = 30;
	p.height = 5.9;
	p.birthdate.day = 15;
	p.birthdate.month = 4;
	p.birthdate.year = 1990;

	printf("Name: %s\n", p.name);
	printf("Age: %d\n", p.age);
	printf("Height: %.1f\n", p.height);
	printf("Birthdate: %02d/%02d/%d\n", p.birthdate.day, p.birthdate.month, p.birthdate.year);
	/*
	A union is similar to a struct but with one major
	difference: in a union, all members share the same
	memory location. This means that only one member
	can hold a value at any given time.
	*/
	Data1 data;

	data.i = 10;
	printf("data.i : %d\n", data.i);

	data.f = 220.5;
	printf("data.f : %.1f\n", data.f);

	strcpy(data.str, "C Programming");
	printf("data.str : %s\n", data.str);

	// Note: At this point, accessing data.i or data.f will give unpredictable results.

	Person4 person8;

	// Initialize data
	strcpy(person8.name, "John Doe");
	person8.age = 30;
	person8.id.id_number = 12345;
	person8.is_id_number = 1;

	// Print data
	printf("Name: %s\n", person1.name);
	printf("Age: %d\n", person1.age);

	if (person8.is_id_number) {
		printf("ID Number: %d\n", person8.id.id_number);
	}
	else {
		printf("Passport Number: %s\n", person8.id.passport_number);
	}

	return 0;
}