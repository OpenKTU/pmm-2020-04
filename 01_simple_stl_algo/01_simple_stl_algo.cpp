// 01_simple_stl_algo.cpp 
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool GreaterThanTwo(int i) {
    return i > 2;
}

int main()
{
    vector<int> data = { 1,2,3,4,5,3,1,2,1,4,2,2 };
    
    cout << count(data.begin(), data.end(), 2) << endl; //4

    cout << count_if(data.begin(), data.end(), GreaterThanTwo) << endl; //5
}

