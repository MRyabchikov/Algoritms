#include <iostream>
#include <vector>
using namespace std;

int main(void){
    int n; cin>>n;
    vector <int> v(n);
    for(int i=0; i<n; i++)
        cin>>v[n-i-1];
    for(auto it : v)
        cout<<it<<" ";
    return 0;
}
