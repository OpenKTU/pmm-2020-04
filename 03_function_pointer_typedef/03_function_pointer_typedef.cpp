// 03_function_pointer_typedef.cpp 

#include <iostream>

using namespace std;

void Print() {
    cout << "Something" << endl;
}

void PrintValue(int value) {
    cout << "Value: " << value << endl;
}

int Sum(int a, int b) {
    return a + b;
}

int main()
{
    int x;
    x = 5;

    void(*function)();
    function = &Print; //& galima praleisti. Nėra skliaustelių!

    function();

    void(*f2)(int);
    f2 = PrintValue;
    f2(42);

    //Kaip atrodytų Sum tipas?

    //typedef void(*PrintValueFunction)(int);
    //PrintValueFunction f3 = &PrintValue;
    //f3(24);
}
