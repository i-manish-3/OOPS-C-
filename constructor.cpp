#include<bits/stdc++.h> 
using namespace std;

class myClass{
    public:

    int x;
    myClass(int x1)
    {
        x = x1;
    }


    string name;
    // myClass(string n){
    //     // this->name = n;
    //     name = n;
    // }                //parametrized constructor

    void display();
};

// myClass :: myClass(string n)
// {
//     name = n;
// }

void myClass :: display()
{
    cout<<"My name is "<<x<<endl;
}
int main(){
    
    myClass obj(6);
    obj.display();
    return 0;
}