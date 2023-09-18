#include<bits/stdc++.h> 
using namespace std;

class Sample{
    public:

    Sample()
    {
        cout<<"Constructor exectued"<<endl;
    }

    ~Sample()
    {
        cout<<"Destructor executed"<<endl;
    }
};

int main(){
    Sample s1, s2, s3;
    return 0;
}