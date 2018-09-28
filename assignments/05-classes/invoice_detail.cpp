#include "invoice_detail.h"

double InvoiceDetail::get_extended_cost() const
{
	double product = 0.0;

	product = cost * units;

	return product;
}
