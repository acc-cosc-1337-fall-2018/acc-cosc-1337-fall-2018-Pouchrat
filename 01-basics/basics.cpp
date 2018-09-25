#include "basics.h"


int sum_numbers(int num1, int num2)
{
	return num1 + num2;
}

//write code for multiply_numbers function here

int multiply_numbers(int num1, int num2)
{
	return num1 * num2;
}

void pass_by_val_by_ref(int val, int& ref)
{
	val = 100;
	ref = 99;
}

void const_pass_by_val_by_ref(int val, const int & ref) {
	val = 99;
	//ref = 99, cant be modified bc it's a constant
}

void initialize_vector_of_ints() {
	vector<int> numbers = { 5,7,9,4,6,8 };
	
	numbers.push_back(1);

	for (auto n : numbers) {
		cout << n << "\n";
	}

	cout << numbers[1];
}

void initialize_vector_of_strings() {
	vector<string> philosphers = {"hume", "kierkagagagaga", "plato", "kant"};

	philosphers.push_back("socrates");

	for (auto p : philosphers) {
		cout << p << endl;
	}
}