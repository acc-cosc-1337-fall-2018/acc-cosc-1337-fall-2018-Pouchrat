#include "basics.h"
#include <memory>

using std::cout;

int main()
{
	/*cout << sum_numbers(5, 5) << std::endl;
	//initialize_vector_of_ints();
	//initialize_vector_of_strings();
	int num = 10;
	pass_by_pointer(&num); //changes num to 99
	cout << num;

	MyClass c;
	MyClass a = c; //only works for non-ptr when not overriden
	std::unique_ptr<MyClass> ptr_cls = std::make_unique<MyClass>();
	ptr_cls->set_ptr_num(50);*/

	#ifndef DYNAMIC_PTR
	#define DYNAMIC_PTR
	class DynamicPtr {
	public:
		DynamicPtr() {
			ptr_num = 0;
			cout << "Constructor. ptr_num: " << ptr_num << "\n";
		}
		~DynamicPtr() {
			delete ptr_num;
			ptr_num = nullptr;
		}
	private:
		int* ptr_num;
	};
	#endif // !DYNAMIC_PTR

	DynamicPtr a;
	DynamicPtr *b = new DynamicPtr();
	std::unique_ptr<DynamicPtr> c = std::make_unique<DynamicPtr>();
	

	return 0;
}
