#include <iostream>
#include <vector>
using namespace std;

int main(void){
    int n, m, k;
    cin>>n;
    int *a = new int[n], *b = new int[m];
    for(int i=0; i<n; i++)
        cin>>a[i];
    cin>>m;
    for(int i=0; i<m; i++)
        cin>>b[i];
    cin>>k;
    int i=0, j=m-1, ctr = 0;
    while(i<n && j>=0){
        if(a[i] + b[j] < k)
            i++;
        else if(a[i] + b[j] > k)
            j--;
        else{
            ctr++;
            if(i==n && j==0)
                break;
            else if(i!=n-1 && a[i+1] == a[i])
                i++;
            else if(j!=0 && b[j-1] == b[j])
                j--;
            else
                j--;
    }}
    delete [] a;
    delete [] b;
    cout<<ctr;
    return 0;
}
