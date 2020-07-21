#include<iostream>

using namespace std;
int main(){
  int n;
  cin>>n;
  int catalan[n];
  catalan[0]=1;
  catalan[1]=1;
  for(int i=2;i<n;i++){
    catalan[i]=0;
    for (int j=0;j<i;j++){
      catalan[i]+=catalan[j]*catalan[i-j-1];
    }

  }
  for (int i=0;i<n;i++){
    cout<<catalan[i]<<" ";
  }
  return 0;
}
