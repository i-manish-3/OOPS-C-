#include<bits/stdc++.h> 
using namespace std;

// base class or super class
class Vechile{
    public:
    string brand = "Ford";
    void horn(){
        cout<<"Pooo Pooo"<<endl;
    }
};

// derived class or sub class
class Car : public Vechile{
    public:
    string model = "Mustang GT";
};


int main(){
    Car myCar;
    cout<<myCar.brand<<" "<<myCar.model<<endl;
    myCar.horn();
    return 0;
}