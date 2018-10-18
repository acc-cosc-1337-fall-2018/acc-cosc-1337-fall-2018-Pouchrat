#include <iostream>
#include <vector>
#include <string>
#include <memory>

using std::cout; using std::cin; using std::vector; using std::endl; using std::string;

vector<int> dna_letters_count(string dna);
void grades(vector<int>g);

#ifndef RECEIPT_H
#define RECEIPT_H

class Receipt {
public:
	Receipt() = default;
	Receipt(double bill) : bill_amount(bill) {}
	friend std::istream & operator >> (std::istream& in, Receipt& r);
	friend std::ostream & operator << (std::ostream&out, Receipt&r);
	double total_amount();

private:
	double bill_amount;
	double tip_amount;
	double tax_amount;
};

#endif // !RECEIPT_H
