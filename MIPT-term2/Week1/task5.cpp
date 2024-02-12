#include <iostream>
using namespace std;

int main(void){
    int n; cin>>n;
    int adder = 1, prev_square = 0;
    for(int i=1; i<=n; i++){
        cout<<prev_square+adder<<" ";
        prev_square+=adder;
        adder+=2;}
    return 0;
}
