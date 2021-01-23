// 05_count_if.cpp
//

#include <iostream>

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

bool GreaterThanTwo(int i) {
	return i > 2;
}

//int CountIf(vector<int>::iterator first, vector<int>::iterator last, bool(*function)(int)) {
//    int count = 0;
//    for (auto current = first; current != last; current++) {
//        int value = *current;
//        if (function(value)) {
//            count++;
//        }
//    }
//    return count;
//}

template <typename TIter, typename TFunc>
int CountIf(TIter first, TIter last, TFunc function) {
	int count = 0;
	for (auto current = first; current != last; current++) {
		if (function(*current)) {
			count++;
		}
	}
	return count;
}


int main()
{
	vector<int> data = { 1,2,3,4,5,3,1,2,1,4,2,2 }; vector<int> data2 = { 3,4 };
	vector<int> data2 = { 3,4 };

	cout << count_if(data.begin(), data.end(), GreaterThanTwo) << endl;

	cout << count_if(data.begin(), data.end(), [](int i) {return i > 2; }) << endl;
}

