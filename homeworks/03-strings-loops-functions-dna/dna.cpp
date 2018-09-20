#include<math.h>
#include "dna.h"

int get_point_mutations(std::string dna1, std::string dna2)
{	//write the function code 
	int i = 0;
	int ham = 0;
	if (dna1.size() != dna2.size()) {
		return -1;
	}
	else
		while (i <= dna1.size()) {
			if (dna1[i] == dna2[i])
			{
				i++;
			}
			else
			{
				ham++;
				i++;
			}

		}
	return ham;
}


//write function code for std::string get_dna_complement(std::string dna)

std::string get_dna_complement(std::string dna) {
	std::string comp = "";

	for (int i = dna.size() - 1; i != -1; --i) {
		comp += dna[i];
	} //reverses the order

	for (int j = 0; j <= comp.size(); ++j) {
		if (comp[j] == 'C') {
			comp[j] = 'G';
		}
		else if (comp[j] == 'G') {
			comp[j] = 'C';
		}
		else if (comp[j] == 'A') {
			comp[j] = 'T';
		}
		else if (comp[j] == 'T') {
			comp[j] = 'A';
		}
		else { break; }
	} //changes the characters to their complements

	return comp;
}


//write function code for std::string transcribe_dna_into_rna(std::string dna);

std::string transcribe_dna_into_rna(std::string dna) {
	std::string rna = dna;
	
	for (int i = 0; i <= dna.size(); ++i) {
		if (dna[i] == 'G') {
			rna[i] = 'G';
		}
		else if (dna[i] == 'C') {
			rna[i] = 'C';
		}
		else if (dna[i] == 'A') {
			rna[i] = 'A';
		}
		else if (dna[i] == 'T') {
			rna[i] = 'U';
		}
		else { break; }
	}

	return rna;
}

double get_gc_content(std::string dna)
{
	auto size = dna.size(); //get the size of string let auto handle the data type
	auto gc_count{ 0 }; //initialize to 0 (int) let auto handle data type

	//for ranged loop, for each character in loop, s holds one char
	//auto determines data type in this case s is a char data type
	for (auto s : dna)
	{
		//in C++ logical and is && and logical or is ||
		//usage (and) condition1 && condition2 --- usage (or) condition1 || condition2 
		//write code to determine if s is 'C' or 'G' then increment gc_count by 1

		if (s == 'C' || s == 'G') {
			gc_count++;
		}

	}

	//dividing two integers nets an integer
	//here we need to convert one of the integers to double to get double division
	//that is a result with decimal values
	//static_cast converts a data type from one to another
	//here temporarily convert size to double
	auto gc_content = (gc_count / static_cast<double>(size))*100;

	//custom function to round to a desired precision
	return round_to_precision(gc_content, 2);
}

double round_to_precision(double number, int precision)
{
	return (std::round(number * std::pow(10, precision))) / std::pow(10, precision);
}
