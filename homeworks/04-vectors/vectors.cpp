#include "vectors.h"
#include <algorithm>

int get_max_from_vector(vector<int>& numbers)
{
	//write your code here
	/*
	Write a value return function with a vector of ints list reference parameter
	that returns the maximum value of the list

	@param numbers is a reference to a vector of integers
	@return the max value in the vector

	*/
	int max = 0;
	for (auto n: numbers) {
		if (n > max) {
			max = n;
		}
	}

	return max;
}

//write the code for sum_of_squares function here

int sum_of_squares(vector<int>& numbers) {
	int sum = 0;
	int square = 0;

	for (auto n : numbers) {
		square = n * n;
		sum += square;
	}
	
	return sum;
}


//write the code for function replace here
void replace(vector<string>& strings, const string& old, const string& new_val)
{
	//write code here. 
	//Remember passing by reference without keyword const makes the string vector
	//read/write meaning you can modify strings in the vector
	//Also there is no need to return the strings vector because a reference
	//points to a previously declared vector of strings variable(see test case 
	//in vectors_test.cp)

	std::replace(strings.begin(), strings.end(), old, new_val);
}

//write is_prime function code here

bool is_prime(int num) {

	if (num <= 1) {
		return false;
	}
	else {
		for (int i = 2; i < num; i++) {
			if (num%i == 0) {
				return false;
			}
		}
	}
	return true;
}



//write vector_of_primes function code here
vector<int> vector_of_primes(int n) {
	/*Psuedocode:
	Create a variable vector of ints named primes
		loop from 1 to the value of n
		in the loop call is_prime function you created with an argument of
		the current vector value at the current loop index
		if the return value of is_prime is true add the value to the primes vector

			make sure to return vector of ints primes after loop exits
	*/
	vector<int> primes;
	for (int i = 0; i < n; i++) {
		if (is_prime(i) == true) {
			primes.push_back(i);
		}
	}
	return primes;
}