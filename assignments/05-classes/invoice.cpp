#include "invoice.h"
#include "invoice_detail.h"

/*function that returns double named get_total that sums up the get_extended_cost of all
     values in the private vector invoice_details*/

void Invoice::add_invoice_detail(InvoiceDetail detail)
{
	invoice_details.push_back(detail);
}

double Invoice::get_total() const
{
	double total = 0.0;
	for (auto detail : invoice_details) {
		total += detail.get_extended_cost();
	}

	return total;
}
