#include <string>
using namespace std;

class SimilarityChecker
{
public:

	int CheckLength(string s1, string s2)
	{
		int longer, shorter, GAP;

		if(s1.length() > s2.length())
		{
			longer = s1.length();
			shorter = s2.length();
		}
		else
		{
			longer = s2.length();
			shorter = s1.length();
		}

		if(longer/shorter >=2)
		{
			return 0;
		}

		GAP = longer - shorter;
		return ((1.0 - GAP / shorter) * 60);
	}
  
  void CountDiffAlhpa(string s, bool* AllAlpha)
	{
		for (int i = 0; i < s.length(); ++i)
		{
			AllAlpha[s[i] - 'A'] = true;
		}
	}

	int CheckAlpha(string s1, string s2)
	{
		bool alpha_s1[26] = { false, }, alpha_s2[26] = { false, };
		float totalCnt = 0;
		float sameCnt = 0;

		CountDiffAlhpa(s1, alpha_s1);
		CountDiffAlhpa(s2, alpha_s2);

		for (int i = 0; i < 26; ++i)
		{
			if(alpha_s1[i] == true || alpha_s2[i] == true)
			{
				totalCnt++;
			}
			if (alpha_s1[i] == true && alpha_s2[i] == true)
			{
				sameCnt++;
			}
		}

		return static_cast<int>((sameCnt / totalCnt) * 40);
	}
private:
};