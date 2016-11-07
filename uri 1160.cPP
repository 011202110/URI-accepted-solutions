#include <iostream>
using namespace std;

int main () {
     int pa, pb, years=0,n;
        double ga, gb;
    cin >> n;
    while (n--) {
        years=0;
        cin >> pa >> pb >> ga >> gb;
        while (pa <= pb && years < 101) {
            years++;
            pa *= (100.0+ga)/100.0;
            pb *= (100.0+gb)/100.0;
        }
        if (years <= 100)
            cout << years << " anos.\n";
        else
            cout << "Mais de 1 seculo.\n";
    }
    return 0;
}
