#include "basics.h"
#include <memory>

using std::cout;

int main()
{
	//cout << sum_numbers(5, 5) << std::endl;

	//initialize_vector_of_ints();

	//initialize_vector_of_strings();

	/*int num = 10;
	pass_by_pointer(&num); //changes num to 99

	cout << num;*/

	//MyClass c;
	//MyClass a = c; //only works for non-ptr when not overriden


	std::unique_ptr<MyClass> ptr_cls = std::make_unique<MyClass>();
	ptr_cls->set_ptr_num(50);
	

	return 0;
}
