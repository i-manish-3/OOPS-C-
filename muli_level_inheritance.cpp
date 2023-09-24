#include<bits/stdc++.h> 
using namespace std;

class Animal{
    public:
    void eat()
    {
        cout<<"eating..\n";
    }
};

class Dog : public Animal{
    public:
    void bark()
    {
        cout<<"barking..\n";
    }
};

class BabyDog :public Dog{
    public:
    void weep(){
        cout<<"weaping..\n";
    }
};

int main(){

    BabyDog b1;
    b1.bark();
    b1.eat();
    b1.weep();    
    return 0;
}