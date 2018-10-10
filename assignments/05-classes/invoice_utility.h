#include "invoice.h"


#ifndef INVOICE_UTILITY
#define INVOICE_UTLITIY

class InvoiceUtility: public Invoice {
public:
	InvoiceUtility(double fc) : fixed_costs(fc) {}
	double get_total() const;

private:
	double fixed_costs;

};

#endif // !INVOICE_UTILITY
