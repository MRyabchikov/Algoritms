#include <iostream>
#include <vector>
using namespace std;

int main(void){
    int n;
    cin>>n;
    vector<double> x(n), y(n);
    for(int i=0; i<n; i++)
        cin>>x[i]>>y[i];
    double summa = 0;
    for(int i=0; i<n-1; i++)
        summa = summa + x[i]*y[i+1] - x[i+1]*y[i];
    summa = summa + x[n-1]*y[0] - x[0]*y[n-1];
    cout<<abs(summa)/2;


    return 0;
}
