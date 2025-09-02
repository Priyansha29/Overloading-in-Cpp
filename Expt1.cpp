//PRIYANSHA 
//24070123079
//ENTC-A3
#include <iostream>
using namespace std;
class Add{
    int a;
    int b;
    int c;
    public:
    Add(){
        cout<<"Enter no. 1: "<<endl;
        cin>>a;
        cout<<"Enter no.2: "<<endl;
        cin>>b;
        cout<<"Addition of the numbers is : "<<a+b<<endl;
    }
    Add(int m,int n){
        a=m;
        b=n;
        cout<<"Addition is : "<<m+n<<endl;
        
    }
    Add(int d, int e, int f){
        a=d;
        b=e;
        c=f;
        cout<<"Addition is : "<<d+e+f;
        
    }
};

int main() {
    Add a;
    Add b(5,7);
    Add c(2,3,4);

    return 0;


//OUTPUT:
  /*
  Enter no. 1: 
20
Enter no.2: 

23
Addition of the numbers is : 43
Addition is : 12
Addition is : 9

*/
}
