// 04_simple_lambda.cpp 

#include <iostream>

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool GreaterThanTwo(int i) {
    return i > 2;
}

int CountIf(vector<int>::iterator first, vector<int>::iterator last, bool(*function)(int)) {
    int count = 0;
    for (auto it = first; it != last; it++) {
        int value = *it;
        if (function(value)) {
            count++;
        }
    }
    return count;
}

int main()
{
    vector<int> data = { 1,2,3,4,5,3,1,2,1,4,2,2 };

    cout << CountIf(data.begin(), data.end(), GreaterThanTwo) << endl;

    auto function = [](int i) {return i > 2; }; //lambda
    cout << CountIf(data.begin(), data.end(), function) << endl;


    cout << CountIf(data.begin(), data.end(), [](int i) {return i > 2; }) << endl; //lambda inline
}
