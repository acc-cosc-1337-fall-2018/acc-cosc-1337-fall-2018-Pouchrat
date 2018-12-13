#include "review.h"

/*void Receipt::display()
{
	cout << "Bill Amount:     " << amount << endl;
	cout << "Tip Amount:      " << tip_amount << endl;
	cout << "Tax Amount:      " << tax_amount << endl;
	cout << "Total Amount:    " << calculate_bill_total() << endl << endl;
}*/

double Receipt::calculate_bill_total()
{
	return amount + tip_amount + tax_amount;
}

std::ostream & operator<<(std::ostream & o, Receipt & r)
{
	cout << "Bill Amount:     " << r.amount << endl;
	cout << "Tip Amount:      " << r.tip_amount << endl;
	cout << "Tax Amount:      " << r.tax_amount << endl;
	cout << "Total Amount:    " << r.calculate_bill_total() << endl << endl;
	return o;
}

std::istream & operator>>(std::istream & i, Receipt & r)
{
	cin >> r.amount;
	return i;
}
