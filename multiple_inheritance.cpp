#include<bits/stdc++.h> 
using namespace std;

class A{
    protected:
    int a;

    public:
    void get_a(int x){
        a = x;
    }
};

class B{
    protected:
    int b;

    public:
    void get_b(int y){
        b = y;
    }
};

class C : public A, public B{
    public:
    void display()
    {
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<a+b;
    }
};

int main(){
    C c1;
    c1.get_a(10);
    c1.get_b(20);
    c1.display();
    return 0;
}