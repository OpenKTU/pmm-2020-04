// 02_function_pointer.cpp
//

#include <iostream>

using namespace std;

void Print() {
    cout << "Something" << endl;
}

void PrintValue(int value) {
    cout << "Value: " << value << endl;
}

int main()
{
    auto function = &Print; //& galima praleisti. Nėra skliaustelių!
    function();

    auto f2 = PrintValue;
    f2(42);
}
