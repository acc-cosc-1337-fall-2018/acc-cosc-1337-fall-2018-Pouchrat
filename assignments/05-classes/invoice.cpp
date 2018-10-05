#include "invoice.h"


void Invoice::add_invoice_detail(InvoiceDetail detail)
{
	invoice_details.push_back(detail);
	total += detail.get_extended_cost();
}

double Invoice::get_total() const
{
	return total;
}

Invoice operator+(const Invoice & i, const Invoice & i2)
{
	Invoice invoice;
	invoice.total = i.total + i2.total;
	return invoice;
}
