#include <iostream>
using namespace std;

int main(void){
    int a, b, n, m;
    cin>>a>>b>>n>>m;
    int b1 = (a+1)*n-a, e1 = (a+1)*n + a, b2 = (b+1)*m - b, e2 = (b+1)*m + b;
    //cout<<b1<<" "<<e1<<" "<<b2<<" "<<e2<<endl;
    if(b1>b2){
        swap(b1, b2);
        swap(e1, e2);}

    if(e1 < b2)
        cout<<-1;
    else if(e1 > e2)
        cout<<b2<<" "<<e2;
    else
        cout<<b2<<" "<<e1;

    return 0;
}
