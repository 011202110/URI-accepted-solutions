#include<bits/stdc++.h>
using namespace std;

int x_dr[] = {0,-1,0,1};
int y_dr[] = {1,0,-1,0};
int x,y;

void show_result(vector< vector<char> > &ch){
  for (int i = 0; i < ch.size(); ++i) {
    for (int j = 0; j < ch.size(); ++j) {
      cout << ch[i][j];
    }
    cout << endl;
  }
  cout << "@" << endl;
}

bool moving(vector< vector<char> > &ch,int item,int d){
    int n = ch.size();
    for(int i = 0; i<item ;i++){
        int new_x = x + x_dr[d],new_y = y + y_dr[d];

        if(new_x < 0 or new_x >= n or new_y < 0 or new_y >= n) return false;

        ch[x][y] = 'O';
        x = new_x ,y = new_y;
        ch[x][y] = 'X';
        show_result(ch);
    }
 return true;
}

int main()
{
    int n;
    while(cin >> n and n != 0){
        vector< vector<char> > ch(n,vector<char> (n, 'O'));
        int item = 0;
        x = n >> 1;
        y = n >> 1;
        ch[x][y] = 'X';
        show_result(ch);
        while(true){
            item++;
        if(!moving(ch,item,0)) break;
        if(!moving(ch,item,1)) break;
        item++;
        if(!moving(ch,item,2)) break;
        if(!moving(ch,item,3)) break;
        }
    }
    return 0;
}

