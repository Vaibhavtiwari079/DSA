#include<bits/stdc++.h>
using namespace std;
class abc{
    public:
    static int x,y;
     void print() const{
     cout<<x<<" "<<y<<endl;

    }
};
int abc::x;
int abc::y;
int main(){

    abc object1;
    object1.x=10;
    object1.y=10;

    object1.print();

    abc obj2;
    obj2.x=20;
    obj2.y=20;

    object1.print();
    obj2.print();
    
    return 0;

}