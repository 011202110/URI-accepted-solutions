#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n,count,i;
  while(scanf("%d", &n), n != 0)
    {
        string str;
        cin >> str;
        count = 0;
        char side[4] = {'N','L','S','O'};
        for(i=0; i <n; i++){
            if(str[i] == 'D')
                count++;
            if(str[i] == 'E')
                count--;
            if(count > 3)
                count =0;
            if(count < 0)
                count =3;
        }
        cout << side[count] << endl;
    }
    return 0;
}
