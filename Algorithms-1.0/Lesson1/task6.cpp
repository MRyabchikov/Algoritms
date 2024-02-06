#include <iostream>
using namespace std;

int main(void){
    int n, k, m, q;
    cin>>n>>k>>m;
    q = k/m;
    if(q == 0)
        cout<<0;
    else{
        m *= q;
        cout<<(((n - k + 1) / m + bool((n - k + 1) % m)) * q);}
}
