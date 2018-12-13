#include <iostream>
#include <vector>
#include <string>
#include <memory>

using std::cout; using std::cin; using std::endl; 
using std::string; using std::vector;

#ifndef RECEIPT_H
#define RECEIPT_H

class Receipt {
public:
	/*Receipt(double a, double tr = .075) : amount(a), tax_rate(tr) { 
		display();
	}
	void display();*/
	Receipt(double a = 0, double tr = .075) : amount(a), tax_rate(tr) {}
	friend std::ostream & operator<<(std::ostream& o, Receipt& r);
	friend std::istream & operator>>(std::istream& i, Receipt& r);

private:
	double amount{ 0 };
	double tip_amount = amount * .10;
	double tax_rate{ .075 };
	double tax_amount = amount * tax_rate;
	double calculate_bill_total();

};

#endif // !RECEIPT_H

#ifndef TEST_H
#define TEST_H

class Test {
public:
	Test() {
		Receipt *r1 = new Receipt(10);
		delete r1;
	}
	void execute() {
		//Receipt display();
	}

private:
	Receipt* receipt;
};

#endif // !TEST_H

#ifndef TEST_3_H
#define TEST_3_H

class Test3 {
public:
	Test3() {}
	void execute() {
		
	}
private:

};

#endif // !TEST_3_H
