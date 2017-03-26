#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    long long ar[100010];
    int n;
    while(cin  >> n and n != 0){
        memset(ar,0,sizeof ar);
            int t = 0;
        for(int i = 0;i < n ; i++) cin >> ar[i];

        sort(ar,ar+n);
        for(int i= 0 ; i < n and t < 2 ;){
             if(ar[i] == ar[i+1] and i < n-1){
                i += 2;
             }else{
                 cout << ar[i];
                 cout << ((t == 1)? "\n" : " ") ;
                 i++;
                 t++;
             }
        }
    }
    return 0;
}
/*#include <bits/stdc++.h>
using namespace std;

int main() {
freopen("in.txt","r",stdin);
     int n;
      string ad;
     while(scanf("%d",&n) and n!=0){
     	map<string,long long>sd;
     	vector<string>ans;
     	for(int i =0; i<n; i++){
     		cin >> ad;
     		sd[ad]++;
     		if((sd.find(ad)->second&1) != 0){
     			ans.push_back(ad);
     		}else{
     			ans.erase(remove(ans.begin(), ans.end(), ad), ans.end());
     		}
         }
          if(ans[0] < ans[1])
     	  cout <<ans[0] << " " << ans[1] <<  endl;
     	  else
          cout <<ans[1] << " " << ans[0] <<  endl;
     }
	return 0;
}
*/

/*#include<bits/stdc++.h>
using namespace std;



int main()
{
    freopen("in.txt","r",stdin);
    vector<long long>in;
    long long c,f,s;
    int n;
    while(cin>>n and n!= 0){
    	for(int i = 0 ;i<n;i++){
    		cin>>c;
    		in.push_back(c);
    	}
    	sort(in.begin(),in.end(),((in.begin()&1) != 0));
      //partial_sort(in.begin(), in.begin()+ ,in.end(), greater<int>());
      f = in[0];
      s = in[1];
      cout<<s<<" "<<f<<endl;
      in.clear();
    }
    return 0;
}

/*#include <bits/stdc++.h>
using namespace std;

struct love{
   string name;
   long long a1;
}result[100001];
int cmp(const love &a,const love &b)
{
    if(a.a1 != b.a1)
        return a.a1 > b.a1;

}
int main()
{
    freopen("in.txt","r",stdin);
    int n;
    while(cin >> n  and n != 0)
    {
        string s;
        map<string,long long>ans;
        for(int i = 0 ; i < n ;i++){
        cin >> s;
        ans[s]++;
        }
        int i = 0;
        for(map<string,long long>::iterator it = ans.begin(); it != ans.end(); it++,i++){
                if((it->second & 1) != 0){
                result[i].name = it->first;
                result[i].a1 = it->second;
                }
        }
        stable_sort(result,result+i,cmp);
        cout << result[0].name << " " << result[1].name << endl;
        for(int j = 0; j < i ;j++){
                result[j].name.clear();
                result[j].a1 = 0;
        }
    }
    return 0;
}
*/
/*int main() {

     int n;
      string ad;
     while(cin >> n and n!=0){
     	map<string,long long>sd;
     	vector<string>ans;
     	for(int i =0; i<n; i++){
     		cin >> ad;
     		sd[ad]++;
     		if(sd.count(ad) != 0){
     		if(sd.find(ad)->second%2 != 0){
     			ans.push_back(ad);
     		}else{
     			ans.erase(remove(ans.begin(), ans.end(), ad), ans.end());
     		}
         }
     }
          if(ans[0] < ans[1])
     	  cout <<ans[0] << " " << ans[1] <<  endl;
     	  else
          cout <<ans[1] << " " << ans[0] <<  endl;
     }
	return 0;
}*/
