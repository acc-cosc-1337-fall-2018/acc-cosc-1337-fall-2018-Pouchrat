#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "review.h"

TEST_CASE("receipt test") {
	Receipt rec(10.00);
	
	REQUIRE(rec.total_amount() == 12.8);
	
}

TEST_CASE("dna letters test") {
	vector <int> dna = dna_letters_count("AGCTTTTCATTCTGACTGCAACGGGCAATATGTCTCTGTGTGGATTAAAAAAAGAGTGTCTGATAGCAGC");

	REQUIRE(dna[0] == 20);
	REQUIRE(dna[1] == 12);
	REQUIRE(dna[2] == 17);
	REQUIRE(dna[3] == 21);
}