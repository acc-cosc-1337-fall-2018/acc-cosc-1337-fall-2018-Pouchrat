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