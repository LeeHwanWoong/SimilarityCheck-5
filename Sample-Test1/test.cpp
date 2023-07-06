#include "pch.h"
#include "../SimilarityCheck/source.cpp"

class SimilarityCheckerFixture : public testing::Test
{
public:
	SimilarityChecker sc;
};

TEST_F(SimilarityCheckerFixture, TC_CheckLength_1) {
	EXPECT_EQ(sc.CheckLength("ASD", "DSA"), 60);
}

TEST_F(SimilarityCheckerFixture, TC_CheckLength_2) {
	EXPECT_EQ(sc.CheckLength("A", "BB"), 0);
}

TEST_F(SimilarityCheckerFixture, TC_CheckLength_3) {
	EXPECT_EQ(sc.CheckLength("AAABB", "BAA"), 60);
}

TEST_F(SimilarityCheckerFixture, TC_CheckLength_4) {
	EXPECT_EQ(sc.CheckLength("AA", "AAE"), 60);
}

TEST_F(SimilarityCheckerFixture, TC_CheckLength_5) {
	EXPECT_EQ(sc.CheckLength("A", "BBB"), 0);
}

TEST_F(SimilarityCheckerFixture, TC_CheckAlpha_1) {
	EXPECT_EQ(sc.CheckAlpha("ASD", "DSA"), 40);
}

TEST_F(SimilarityCheckerFixture, TC_CheckAlpha_2) {
	EXPECT_EQ(sc.CheckAlpha("A", "BB"), 0);
}

TEST_F(SimilarityCheckerFixture, TC_CheckAlpha_3) {
	EXPECT_EQ(sc.CheckAlpha("AAABB", "BA"), 40);
}

TEST_F(SimilarityCheckerFixture, TC_CheckAlpha_4) {
	EXPECT_EQ(sc.CheckAlpha("AA", "AAE"), 20);
}

TEST_F(SimilarityCheckerFixture, TC_CheckSimilarity_1) {
	EXPECT_EQ(sc.CheckSimilarity("ASD", "DSA"), 100);
}

TEST_F(SimilarityCheckerFixture, TC_CheckSimilarity_2) {
	EXPECT_EQ(sc.CheckSimilarity("A", "BB"), 0);
}

TEST_F(SimilarityCheckerFixture, TC_CheckSimilarity_3) {
	EXPECT_EQ(sc.CheckSimilarity("AAABB", "BAA"), 100);
}

TEST_F(SimilarityCheckerFixture, TC_CheckSimilarity_4) {
	EXPECT_EQ(sc.CheckSimilarity("AA", "AAE"), 80);
}