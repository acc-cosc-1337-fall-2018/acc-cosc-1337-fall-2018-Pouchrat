//write include statement for vectors header
//write include statement for cout object
#include "vectors.h"
#include <iostream>
using std::cout; using std::cin;

//dont forget using statement for cout object
int main() 
{
	//Write code to call get_max_from_vector with argument
	//vector of values 4, 5, 1, 50, 6, 77, 0 and display max
	vector<int> vals{ 4,5,1,50,6,77,0 };
	cout << get_max_from_vector(vals) << std::endl;


	//write code to call the sum_of_square function with argument
	//vector of values 2, 3, 4 and display result
	vector<int> squaresum = { 2,3,4 };
	cout << sum_of_squares(squaresum) << std::endl;

	//write code to call the replace function with argument 
	//vector of strings "Joe", "joe", "mary", old argument "joe", new argument "John"
	vector<string> names = { "Joe", "joe", "mary" };
	replace(names, "joe", "John");
	for (auto n : names) {
		cout << n << std::endl;
	}
	
	//write code to call is_prime with value 3 output result
	cout << is_prime(3) << std::endl;

	//write code to call vector_of_primes, save return value to a vector of ints
	//output each int in the return vector
	vector<int> primes_up_to_10{ 2,3,5,7 };
	vector<int> primes = vector_of_primes(10);

	for (auto p : primes) {
		cout << p << std::endl;
	}


	return 0;
}