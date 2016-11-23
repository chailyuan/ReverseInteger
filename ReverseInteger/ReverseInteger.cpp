#include <iostream>
#include <vector>
#include <math.h>


using namespace std;

class Solution {
public:
	int reverse(int x) {
		int y=x;
		int i=0,j=0;
		vector<int> articles;

		while(y/10 != 0)
		{
			i++;
			articles.push_back(abs(y%10));
			y /=10;
		}

		i++;
		articles.push_back(abs(y%10));
		y /=10;

		while(i--)
		{
			if (y>INT_MAX/10||(y==INT_MAX/10 && articles[j]>1))
				return 0;			
			y = y*10+articles[j++];
		}
		if(x<0)
			return -y;				
		return y;
	}
};

int main()
{
	int a,b;
//	cin>>a;
	a = 
		-2147483412
//		1463847412
//		0
//		1
//		-1
;
	Solution s;
	b=s.reverse(a);
	return 0;
}