#include <iostream>
using namespace std;

int main(void){
    int a, b, c; cin>>a>>b>>c;
    int maxi = max(a, max(b, c)), mini = min(a, min(b, c)), midi = a+b+c - max(a, max(b, c)) - min(a, min(b, c));
    if (maxi >= mini + midi)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}
