#include<bits/stdc++.h>
#include <stdio.h>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]) {
  int i, k, n, q, p = 0, sz;
  int arr[100010];
  int brr[100010];


  while(scanf("%d%d", &k, &n) == 2) {
    p++;
    int j=0;
    for(i = 0; i < k; i++) {
      scanf("%d", & q);
      if(arr[q] != p) {
        arr[q] = p;
        brr[j++] = q;
      }
    }
    printf("%d", brr[0]);
    for(i = 1; i < j; i++)
      printf(" %d", brr[i]);
    printf("\n");
  }

  return 0;
}
