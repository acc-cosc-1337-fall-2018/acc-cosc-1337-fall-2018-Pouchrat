#include <iostream>
#include <string>
#include <vector>

using std::cout; using std::cin; using std::string; using std::vector;

//class start
#ifndef INVOICE_D
#define INVOICE_D

class InvoiceDetail {
public:
	InvoiceDetail(double c, int u) : cost(c), units(u) {}
	double get_extended_cost() const;

private:
	double cost;
	int units;
};


#endif //INVOICE_D
//class end