#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main(void) {
    double a, b, c, d, e, f;
    cin>>a>>b>>d>>e>>c>>f;
    if(a == 0 && b == 0 && d== 0 && e == 0) {
        if(c == 0 && f == 0)
            cout<<5;
        else
            cout<<0;
    } else if(b == 0) {
        if(a == 0) {
            if(c != 0)
                cout<<0;
            if(c == 0) {
                if(d != 0 && e!= 0)
                    cout<<1<<" "<<-d/e<<" "<<f/d;
                else if(e == 0)
                    cout<<3<<" "<<f/d;
                else
                    cout<<4<<" "<<f/e;
            }
        } else {
            if(e == 0) {
                if(d*c/a == f)
                    cout<<3<<" "<<c/a;
                else
                    cout<<0;
            } else
                cout<<2<<" "<<c/a<<" "<<(f-d*c/a)/e;
        }
    } else if(e == 0) {
        if(d == 0) {
            if(f != 0)
                cout<<0;
            if(f == 0) {
                if(a != 0 && b!= 0)
                    cout<<1<<" "<<-a/b<<" "<<c/a;
                else if(e == 0)
                    cout<<3<<" "<<c/a;
                else
                    cout<<4<<" "<<c/b;
            }
        } else {
            if(b == 0) {
                if(a*f/d == c)
                    cout<<3<<" "<<f/d;
                else
                    cout<<0;
            } else
                cout<<1<<" "<<f/d<<" "<<(c-a*f/d)/b;
        }
    } else {
        double k1 = -a / b, k2= -d / e, c1= c / b, c2 = f / e;
        if(k1 == k2) {
            if(c1 == c2) {
                if(k1 == 0)
                    cout<<4<<" "<<c1;
                else
                    cout<<1<<" "<<k1<<" "<<c1;
            } else
                cout<<0;
        } else {
            double det = a*e-b*d;
            cout<<2<<" "<<(c*e-f*b)/det<<" "<<(a*f-d*c)/det;
        }
    }
    return 0;
}
