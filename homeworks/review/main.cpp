#include "review.h"


int main() {

	Test local;
	Test *dynamic = new Test();
	std::unique_ptr<Test> unique = std::make_unique<Test>();

	return 0;
}
