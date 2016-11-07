#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t, m;
    while(cin >> t >> m ,t != 0)
    {
        string trash;
        int ar[m], cnt =0;

        for(int i =0; i < t; i++){
            cin >> trash >> ar[i];
                cnt += ar[i];
        }
        cout <<(m*3)- cnt << endl;
    }
    return 0;
}
