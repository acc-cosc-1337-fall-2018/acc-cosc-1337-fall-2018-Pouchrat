#include "basics.h"

#include "references.h"

void pass_by_val_by_ref(int val, int& ref)
{
	val = 100;
	ref = 99;
}

int sum_numbers(int num1, int num2)
{
	return num1 + num2;
}

//write code for multiply_numbers function here

int multiply_numbers(int num1, int num2)
{
	return num1 * num2;
}
