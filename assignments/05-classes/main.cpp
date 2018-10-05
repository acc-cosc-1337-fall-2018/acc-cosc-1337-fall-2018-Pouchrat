#include "invoice.h"

int main() {
	InvoiceDetail d(10, 10);
	std::cout << d.get_extended_cost();
	
	int num;
	std::cin >> num;

	Invoice invoice;
	InvoiceDetail detail;
	std::cin >> detail;

	invoice.add_invoice_detail(InvoiceDetail(10, 10));
	invoice.add_invoice_detail(InvoiceDetail(5, 5));
	invoice.add_invoice_detail(InvoiceDetail(100, 2));
	
	std::cout << invoice.get_total();

	return 0;
}