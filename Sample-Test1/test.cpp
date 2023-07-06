#include "pch.h"
#include "../SimilarityCheck/source.cpp"

class SimilarityCheckerFixture : public testing::Test
{
public:
	SimilarityChecker sc;
};

TEST_F(SimilarityCheckerFixture, TC1) {
	EXPECT_EQ(sc.CheckLength("ASD", "DSA"), 60);
}

TEST_F(SimilarityCheckerFixture, TC2) {
	EXPECT_EQ(sc.CheckLength("A", "BB"), 0);
}

TEST_F(SimilarityCheckerFixture, TC3) {
	EXPECT_EQ(sc.CheckLength("AAABB", "BAA"), 60);
}

TEST_F(SimilarityCheckerFixture, TC4) {
	EXPECT_EQ(sc.CheckLength("AA", "AAE"), 60);
}

TEST_F(SimilarityCheckerFixture, TC5) {
	EXPECT_EQ(sc.CheckLength("A", "BBB"), 0);

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