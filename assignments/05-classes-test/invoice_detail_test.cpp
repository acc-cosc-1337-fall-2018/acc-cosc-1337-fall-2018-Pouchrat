#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "invoice.h"

TEST_CASE("invoice detail", "get extended cost") {
	InvoiceDetail detail(10,10);
	REQUIRE(detail.get_extended_cost() == 100);
}

TEST_CASE("test invoice get total") {
	Invoice invoice;

	invoice.add_invoice_detail(InvoiceDetail(10, 10));
	invoice.add_invoice_detail(InvoiceDetail(5, 5));
	invoice.add_invoice_detail(InvoiceDetail(100, 2));

	REQUIRE (invoice.get_total() == 325);

}

TEST_CASE("test invoice operator overloading", "answer 10 cost, 10 units") {
	Invoice invoice;

	invoice.add_invoice_detail(InvoiceDetail(10, 10));
	invoice.add_invoice_detail(InvoiceDetail(5, 5));
	invoice.add_invoice_detail(InvoiceDetail(100, 2));

	Invoice invoice1;
	invoice1.add_invoice_detail(InvoiceDetail(100, 2));

	Invoice result = invoice + invoice1;
	REQUIRE(result.get_total() == 525);
}
