#include<bits/stdc++.h> 
using namespace std;

// base class or super class
// class Vechile{
//     public:
//     string brand = "Ford";
//     void horn(){
//         cout<<"Pooo Pooo"<<endl;
//     }
// };

// derived class or sub class
// class Car : public Vechile{
//     public:
//     string model = "Mustang GT";
// };

// single inheritance 
class A{
    public:
    int a = 10;
    int b = 20;
    
    int mul()
    {
        int c = a * b;
        return c;
    }
};

class B : private A{
    public:
    void display()
    {
        cout<<"Multiplication is "<<mul()<<endl;
    }
};

int main(){
    // Car myCar;
    // cout<<myCar.brand<<" "<<myCar.model<<endl;
    // myCar.horn();


    B p1;
    p1.display();
    return 0;
}