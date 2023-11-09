#include <iostream>
#include <cmath>
using namespace std;

int main(void){
    int k1, m, k2, p2, n2;
    cin>>k1>>m>>k2>>p2>>n2;
    int flats_per_stage = ceil(double(k2)/(n2*p2));
    int flats_per_pod = flats_per_stage * m;
    //cout<<flats_per_stage<<" "<<flats_per_pod<<endl;
    int pure_flat = k1%flats_per_pod, pod = ceil(double(k1)/flats_per_pod);
    cout<<pod<<" "<<ceil(double(pure_flat)/flats_per_stage);
    return 0;
}
