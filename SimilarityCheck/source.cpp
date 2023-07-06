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
private:
};