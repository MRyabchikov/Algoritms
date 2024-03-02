#include <iostream>
using namespace std;

int main(void){
    int a, b, c, d, e;
    cin>>a>>b>>c>>d>>e;
    if( min(a, min(b, c)) <= min(d, e) && (a+b+c-min(a, min(b, c))-max(a,max(b,c)) <= max(d, e)))
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
