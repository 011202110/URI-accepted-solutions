#include<bits/stdc++.h>

using namespace std;

int main()
{
	int i,n,j=0,k,l=0,pos=0,t = 0,u = 5;
	string ad,ab,ac;
	size_t p ;
	vector<char>pi;
	cin >> ad ;
     while(ad != "0"){
     	t++;
     	cin >> ab;
        pos = i = j = 0;
        while(ab[i]!='\0'){
        	if(ab[i]== ad[j] && j<ad.size()){
        		pi.push_back(ad[j]);
        		j++;
        	}else if(ab[i]== ad[j] && j==ad.size()){
        		break;
        	}else if(ab[i]!= ad[j] && j==ad.size()){
        		break;
        	}else if(ab[i]!= ad[j] ){
        		pi.clear();
        		j = 0;
        	}

        	i++;
        }

       cout <<"Instancia "<<t<<endl;
       if(pi.size() != ad.size())
       cout <<"falsa"<<endl;
       else
       cout <<"verdadeira"<<endl;
       cin >> ad ;
       if(ad != "0")
       cout <<endl;
       else
       break;

	}
	return 0;
}
