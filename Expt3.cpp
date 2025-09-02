//FUNCTION OVERLOADING
//PRIYANSHA 
//24070123055
//ENTC-A3
#include <iostream>
using namespace std;
class Add{
    public:
    int a;
    int b; 
    int c;
    double d;
    double f;
};


int add(int a, int b) {
    return a + b;
}

int add(int a, int b, int c) {
    return a + b + c;
}

double add(double d, double f) {
    return d + f;
}

int main() {
    int sum1 = add(5, 10);
    cout << "Sum of two integers: " << sum1 <<endl;

    int sum2 = add(1, 2, 3);
    cout << "Sum of three integers: " << sum2 <<endl;

    double sum3 = add(3.14, 2.71);
    cout << "Sum of two doubles: " << sum3 <<endl;

    return 0;
}

//OUTPUT:
/*
Sum of two integers: 15
Sum of three integers: 6
Sum of two doubles: 5.85

*/
