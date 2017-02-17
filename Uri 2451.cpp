#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j,k = 0,t,ans = 0;
    string s,s1;
    cin >> n;
    for(i = 0; i < n ; i++){
            cin >> s;
            if(i%2 != 0){
               reverse(s.begin(),s.end());
               for( j = i*n ,t = 0; j < (i+1)*n ; j++ , t++)
                 s1 += s[t];
               } else {
                for( j = i*n,t = 0; j < (i+1)*n ; j++,t++)
                 s1 += s[t];
               }

        s.clear();
       }
 for(i = 0; i < s1.size() ;i++){

    while(s1[i] != 'A'){
            if(s1[i] == 'o'){
             k++;
            }
            if(s1[i+1] == 'A' or s1[i] == '\0'){
                ans = max(ans,k);
                k = 0;
            }
          if(s1[i] == '\0') break;
    i++;
    }
 }
    cout << ans << endl;
    return 0;
}

