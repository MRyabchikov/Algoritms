#include <iostream>
#include <vector>
using namespace std;

int main(void){
    int n, m;
    cin>>n>>m;
    vector<int> ans(n+1);
    ans[1] = 1;
    for(int i=2; i<=n; i++)
        ans[i] = 1+(ans[i-1] + m - 1)%i;
    cout<<ans[n];
}
