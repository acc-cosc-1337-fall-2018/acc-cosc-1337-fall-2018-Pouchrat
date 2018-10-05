#include <iostream>
#include <vector>
#include <istream>

using std::vector; using std::cin; using std::cout;

#ifndef INVOICE_DETAIL_H
#define INVOICE_DETAIL_H

class InvoiceDetail {
public:
	InvoiceDetail() = default;
	InvoiceDetail(double c, int u) : cost(c), units(u) {}
	double get_extended_cost() const;
	friend std::istream & operator >> (std::istream& in, InvoiceDetail& d);

private:
	double cost;
	int units;

};


#endif // ! INVOICE_DETAIL_H
