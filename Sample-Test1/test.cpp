#include "pch.h"
#include "../SimilarityCheck/source.cpp"

TEST(AlphaCheck, TC1) {
	SimilarityChecker sc;

	EXPECT_EQ(sc.CheckAlpha("ASD", "DSA"), 40);
}

TEST(AlphaCheck, TC2) {
	SimilarityChecker sc;

	EXPECT_EQ(sc.CheckAlpha("A", "BB"), 0);
}

TEST(AlphaCheck, TC3) {
	SimilarityChecker sc;

	EXPECT_EQ(sc.CheckAlpha("AAABB", "BA"), 40);
}

TEST(AlphaCheck, TC4) {
	SimilarityChecker sc;

	EXPECT_EQ(sc.CheckAlpha("AA", "AAE"), 20);
}