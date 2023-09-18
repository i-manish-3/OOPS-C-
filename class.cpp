#include<bits/stdc++.h> 
using namespace std;

class myClass{

    public:

    string name;
    string uid;
    int age;
    int year;
};


int main(){
    myClass myObj;

    cin>>myObj.name>>myObj.uid;
    myObj.age = 21;
    myObj.year = 2023;

    cout<<myObj.name<<" "<<myObj.uid<<" "<<myObj.age<<" "<<myObj.year<<endl;
    return 0;
}