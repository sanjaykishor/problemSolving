#include <bits/stdc++.h>
using namespace std;
class solution
{
    public:
    int static max_sum_consecutive_elements(const vector<int> &arr,int k)
    {
        int sum = 0,start = 0,max_sum = 0;
        for(int i = 0; i < arr.size(); i++)
        {
            sum += arr[i];
            if( i >= k-1)
            {
                max_sum = max(max_sum,sum);
                sum -= arr[start];
                start++;
            }
        }
        return max_sum;
    }
    
};

int main() {
	cout<<"Maximum sum of K consecutive elements: "
	    << solution::max_sum_consecutive_elements(vector<int>{1,2,3,1,4,5},3)<<endl;
	return 0;
}
