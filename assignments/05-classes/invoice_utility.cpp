#include "invoice_utility.h"

double InvoiceUtility::get_total() const
{
	return Invoice::get_total() + fixed_costs;
}
