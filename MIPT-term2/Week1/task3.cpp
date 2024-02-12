#include <iostream>
using namespace std;

int find_nod(int a, int b){
    if(a == 0)
        return b;
    return find_nod(b%a, a);
}

int main(void){
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    int num = a*d+b*c, denom = b*d;
    int nod = find_nod(num, denom);
    cout<<num/nod<<" "<<denom/nod;
    return 0;
}
