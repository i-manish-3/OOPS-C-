#include<bits/stdc++.h> 
using namespace std;

class test{
    public:

    int x;
    void publicx()
    {
        cout<<x;
    }
    private:

    int y;

    void privatey(int a)
    {
        cout<<y<<endl;
    }

    protected:

    int z;

    void protectedz()
    {
        cout<<z<<endl;
    }


};


int main(){
    
    test t;
    t.x = 10;
    t.publicx();

    return 0;
}