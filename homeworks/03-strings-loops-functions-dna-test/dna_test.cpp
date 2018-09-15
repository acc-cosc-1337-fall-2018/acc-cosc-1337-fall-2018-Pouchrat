#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "dna.h"

TEST_CASE("Test round with precision")
{
	REQUIRE(round_to_precision(55.95963, 2) == 55.96);
	REQUIRE(round_to_precision(55.95463, 2) == 55.95);
}


TEST_CASE("Test get point mutations", "Dna strings ") {
	//test not equal in length return value of -1
	REQUIRE(get_point_mutations("GAGCCTACTAACGGGAT", "CATCGTAATGACGG") == -1);

	REQUIRE(get_point_mutations("GAGCCTACTAACGGGAT", "GAGCCTACTAACGGGAT") == 0);
	REQUIRE(get_point_mutations("GAGCCTACTAACGGGAT", "GATCGTAATGACGGCAT") == 5);
	REQUIRE(get_point_mutations("GAGCCTACTAACGGGAT", "CATCGTAATGACGGCCT") == 7);
}

/*
Create a test case for std::string get_dna_complement(std::string dna_string)
with arguments: 
AAAACCCGGT result should be ACCGGGTTTT
CCCGGAAAAT result should be ATTTTCCGGG
*/




/*
Create a test case for transrcribe_dna_into_rna with arguments:
GATGGAACTTGACTACGTAAATT result should be GAUGGAACUUGACUACGUAAAUU
AAATTGATCTTGACTACGTGGAA result should be AAAUUGAUCUUGACUACGUGGAA

*/




/*create a test case for function get_gc_content with arguments
CCACCCTCGTGGTATGGCTAGGCATTCAGGAACCGGAGAACGCTTCAGACCAGCCCGGACTGGGAACCTGCGGGCAGTAGGTGGAAT
the result should be 60.92*/
TEST_CASE("Test get gc content")
{
	REQUIRE(get_gc_content("CCACCCTCGTGGTATGGCTAGGCATTCAGGAACCGGAGAACGCTTCAGACCAGCCCGGACTGGGAACCTGCGGGCAGTAGGTGGAAT") == 60.92);
}