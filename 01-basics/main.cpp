#include "basics.h"

using std::cout;

int main()
{
	//cout << sum_numbers(5, 5) << std::endl;

	//initialize_vector_of_ints();

	//initialize_vector_of_strings();

	/*int num = 10;
	pass_by_pointer(&num); //changes num to 99

	cout << num;*/

	MyClass c;
	MyClass a = c; //only works for non-ptr when not overriden

	c.set_ptr_num(5000);

	return 0;
}
