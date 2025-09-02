//PRIYANSHA 
//24070123079
//ENTC-A3
#include <iostream>
using namespace std;

class Car_count{
    int car_number;
    int hours;
    int fee;
    int token_number;
    float total_cars;
    public:
    Car_count(int n1, int h, int f, int t){
        car_number=n1;
        hours=h;
        fee=f;
        token_number=t;
        cout<<"Car number "<<n1<<endl;
        cout<<"Parked for "<<h<<" hours"<<endl;
        cout<<"Parking Fees is "<<f<<" ruppees"<<endl;
        cout<<"Token number is "<<t<<"\n"<<endl;
        
    }
    Car_count(int n1, int h, int f, float e){
        car_number=n1;
        hours=h;
        fee=f;
        total_cars=e;
        cout<<"Car number "<<n1+1111<<endl;
        cout<<"Parked for "<<h<<" hours"<<endl;
        cout<<"Parking Fees is "<<f<<" ruppees"<<endl;
        cout<<"total cars are "<<e+1<<endl;
    }
    
};
int main() {
    Car_count a(2365,3,60,78);
    Car_count b(4587,5,70,34.55f);
    

    return 0;
}

//OUTPUT:
/*
Car number 2365
Parked for 3 hours
Parking Fees is 60 ruppees
Token number is 78

Car number 5698
Parked for 5 hours
Parking Fees is 70 ruppees
total cars are 35.55
*/
