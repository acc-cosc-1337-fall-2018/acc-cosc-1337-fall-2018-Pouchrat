#include "invoice.h"

double InvoiceDetail::get_extended_cost() const
{
	double product = 0.0;

	product = cost * units;

	return product;
}

std::istream & operator>>(std::istream& in, InvoiceDetail & d)
{
	cout << "Enter cost: ";
	in >> d.cost;
	cout << "Enter units: ";
	in >> d.units;

	return in;
}
