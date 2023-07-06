#include "pch.h"
#include "../SimilarityCheck/source.cpp"

TEST(LengthCheck, TC1) {
	SimilarityChecker sc;

	EXPECT_EQ(sc.CheckLength("ASD", "DSA"), 60);
}

TEST(LengthCheck, TC2) {
	SimilarityChecker sc;

	EXPECT_EQ(sc.CheckLength("A", "BB"), 0);
}

TEST(LengthCheck, TC3) {
	SimilarityChecker sc;

	EXPECT_EQ(sc.CheckLength("AAABB", "BAA"), 60);
}

TEST(LengthCheck, TC4) {
	SimilarityChecker sc;

	EXPECT_EQ(sc.CheckLength("AA", "AAE"), 60);
}