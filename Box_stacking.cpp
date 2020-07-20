#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool compare ()


int main(){
    int n;
    cout<<"Enter the number of stacks you have:"<<endl;
    cin >> n;

    vector<vector<int>> dimensions(n,vector<int>(3,0));
    for (int i=0=;i<n;i++){
      for (int j=0;i<3;j++){
        cin>>vec[i][j];
      }
    }
    cout << MaxHeightsBoxStacks(dimensions) <<endl;
    return 0;
}
