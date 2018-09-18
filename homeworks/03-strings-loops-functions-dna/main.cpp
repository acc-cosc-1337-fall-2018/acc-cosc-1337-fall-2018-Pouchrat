//write the dna.h include statement here
#include "dna.h"

using std::string;
using std::cout;

int main()
{
	//call the dna functions from dna.h and display output
	//Use the function arguments from the test cases in dna_test.cpp
	//Example:
	/*
	auto point_mutation = get_point_mutations("GAGCCTACTAACGGGAT", "CATCGTAATGACGG")
	cout<<point_mutation;
	*/

	auto round_prec = round_to_precision(55.95963, 2);
	cout << round_prec << std::endl;

	auto point_mutation = get_point_mutations("CAGCTTAACGACGG", "CATCGTAATGACGG");
	cout << point_mutation << std::endl;

	auto dna_comp = get_dna_complement("AAAACCCGGT");
	cout << dna_comp << std::endl;

	auto rna_transc = transcribe_dna_into_rna("GATGGAACTTGACTACGTAAATT");
	cout << rna_transc << std::endl;

	auto gc_cont = get_gc_content("CCACCCTCGTGGTATGGCTAGGCATTCAGGAACCGGAGAACGCTTCAGACCAGCCCGGACTGGGAACCTGCGGGCAGTAGGTGGAAT");
	cout << gc_cont << std::endl;

	return 0;
}