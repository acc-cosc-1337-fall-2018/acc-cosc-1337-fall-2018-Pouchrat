#include <vector>
#include <iostream>
#include <string>
using std::endl; using std::cout; using std::vector; using std::string;


int sum_numbers(int num1, int num2);

//write function prototype for multiply_numbers with two integer parameters

int multiply_numbers(int num1, int num2);

void pass_by_val_by_ref(int val, int& ref);

void const_pass_by_val_by_ref(int val, const int & ref);

void initialize_vector_of_ints();

void initialize_vector_of_strings();

void pass_by_pointer(int* ptr);

#ifndef MY_CLASS_H
#define MY_CLASS_H

class MyClass { //rule of 3
public:
	MyClass();
	MyClass(MyClass& my_class); //lets us copy stuff w/o copying the address in the "=" overload //copy constructor
	~MyClass(); //destructor
	void set_ptr_num(int val);
	MyClass&operator=(MyClass other); //needs the extra MyClass& constructor
private:
	int num = 5;
	int * ptr_num = new int(10);
};

#endif // !MY_CLASS_H
