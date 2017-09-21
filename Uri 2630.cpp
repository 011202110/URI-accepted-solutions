#include<bits/stdc++.h>
using namespace std;

int maxR(int r_p, int g_p, int b_p){
    return max(r_p,max(g_p,b_p));
}

int minR(int r_p, int g_p, int b_p){
    return min(r_p,min(g_p,b_p));
}

int meanR(int r_p, int g_p, int b_p){
    return (r_p+g_p+b_p) / 3;
}

int eyeR(int r_p, int g_p, int b_p){
    return  ((r_p*0.3) + (g_p*0.59) + (b_p*0.11));
}

int main()
{
    freopen("in.txt","r",stdin);
    int n,rp,bp,gp;
    string line;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> line >> rp >> gp >> bp ;
        printf("Caso #%d: ",i);
        if(line == "max") cout << maxR(rp,gp,bp) << endl;
        else if(line == "min") cout << minR(rp,gp,bp) << endl;
        else if(line == "mean") cout << meanR(rp,gp,bp) << endl;
        else if(line == "eye") cout << eyeR(rp,gp,bp) << endl;
    }
    return 0;
}
