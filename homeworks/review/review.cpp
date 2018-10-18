#include "review.h"

void grades(vector<int> g) {
	int a{ 0 };
	int b{ 0 };
	int c{ 0 };
	int d{ 0 };
	int f{ 0 };

	for (auto gr : g) {
		if (gr >= 90) {
			a++;
		}
		else if (gr >= 80) {
			b++;
		}
		else if (gr >= 70) {
			c++;
		}
		else if (gr >= 60) {
			d++;
		}
		else f++;
	}
	cout << "A:     " << a << endl;
	cout << "B:     " << b << endl;
	cout << "C:     " << c << endl;
	cout << "D:     " << d << endl;
	cout << "F:     " << f << endl;

}

std::istream & operator>>(std::istream & in, Receipt & r)
{
	double amount;

	cin >> amount;

	r.bill_amount = amount;

	return in;
}

std::ostream & operator<<(std::ostream & out, Receipt & r)
{
	cout << "Bill: $" << r.bill_amount << endl;
	cout << "Tip: $" << r.tip_amount << endl;
	cout << "Tax: $" << r.tax_amount << endl;
	cout << "------------" << endl;
	cout << "Total: $" << r.total_amount() << endl;

	return out;
}

vector<int> dna_letters_count(string dna) {
	vector<int> letters;
	int a{ 0 }; int c{ 0 }; int g{ 0 }; int t{ 0 };
	
	for (auto d : dna) {
		if (d == 'A') {
			a++;
		}
		else if (d == 'C') {
			c++;
		}
		else if (d == 'G') {
			g++;
		}
		else if (d == 'T') {
			t++;
		}
	}

	letters.push_back(a);
	letters.push_back(c);
	letters.push_back(g);
	letters.push_back(t);

	return letters;
}

double Receipt::total_amount()
{
	double total = 0;

	tax_amount = bill_amount * .08;
	tip_amount = bill_amount * .2;

	total = bill_amount + tax_amount + tip_amount;

	return total;
}
