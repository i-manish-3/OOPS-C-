#include<bits/stdc++.h> 
using namespace std;

class test{
    public:

    int x;

    void init(int x1)
    {
        x = x1;
    }

    void display()
    {
        cout<<x<<endl;
    }
};


int main(){
    
    test t;
    t.init(10);
    t.display();

    test t1(t);
    t1.display();
    return 0;
}