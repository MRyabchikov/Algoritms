#include <iostream>
using namespace std;

int min_divider(int n){
    for(int i=2; i<n; i++)
        if (n % i == 0)
            return i;
    return 1;}

int main(void){
    int n; cin>>n;
    if(min_divider(n) == 1)
        cout<<1<<" "<<(n-1);
    else{
        int q = min_divider(n);
        cout<<n/q<<" "<<n/q*(q-1);
    }
    return 0;
}
