#include <iostream>
using namespace std;


int main(void){
    int a, b, c;
    cin>>a>>b>>c;
    if(c < 0)
        cout<<"NO SOLUTION";
    else if(a == 0){
        if(c*c - b == 0)
            cout<<"MANY SOLUTIONS";
        else
            cout<<"NO SOLUTION";}
    else if(double(c * c - b) / a == (c * c - b) / a)
        cout<<(c * c - b) / a;
    else
        cout<<"NO SOLUTION";

    return 0;
}
