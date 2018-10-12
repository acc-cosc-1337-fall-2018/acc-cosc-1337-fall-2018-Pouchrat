#include "invoice_detail.h"

#ifndef INVOICE_H
#define INVOICE_H

class  Invoice {
public:
	void add_invoice_detail(InvoiceDetail detail);
	virtual double get_total() const;
	friend Invoice operator+(const Invoice& i, const Invoice& i2);

private:
	vector<InvoiceDetail> invoice_details;
	double total{ 0 };
};

#endif