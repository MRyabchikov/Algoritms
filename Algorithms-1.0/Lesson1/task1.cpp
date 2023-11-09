#include <iostream>
using namespace std;

int main(void){
    int tcond, troom; cin>>troom>>tcond;
    string regime; cin>>regime;
    if(regime == "heat")
        cout<<max(tcond, troom);
    if(regime == "freeze")
        cout<<min(tcond, troom);
    if(regime == "auto")
        cout<<tcond;
    if(regime == "fan")
        cout<<troom;
    return 0;
}
