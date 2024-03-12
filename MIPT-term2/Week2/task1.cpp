#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
    stack<int> maximums;
    int n; cin>>n;
    vector <int> a(n), b(n);
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=0; i<n; i++)
        cin>>b[i];
    for(int i=n-1; i>=0; i--)
        maximums.push(i==n-1 || b[i]>=b[maximums.top()]?i:maximums.top());
    int i0 = 0, j0 = 0;
    for(int i=0; i<n; i++){
        if(a[i0] + b[j0] < a[i]+b[maximums.top()]){
            i0 = i;
            j0 = maximums.top();}
        maximums.pop();}
    cout<<i0<<" "<<j0;

}
