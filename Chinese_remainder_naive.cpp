/*  CHINESE REMAINDER THEOREM:
    find the minimum value of x such that
        if x%num[i]==rem[i] --> for i in range (n)
    PROVIDED THAT: every pair in num is co-prime

 */

#include<iostream>

using namespace std;

int findMinX(int num[],int rem[],int n){
  int x=1;
  int i;
  while (true){
    i=0;
    while (i<n){
      if (x%num[i]!=rem[i])
         break;
       i+=1;

    }
    if (i==n) return x;
    x++;
  }
}
int main(){
  int n;
  cin>>n;
  int num[n],rem[n];
  for (int i=0;i<n;i++){
    cin>>num[i];
  }
  for (int i=0;i<n;i++){
    cin>>rem[i];
  }

  int temp=findMinX(num,rem,n);
  cout<<temp;
  return 0;
}
