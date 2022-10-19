#include <bits/stdc++.h>
using namespace std;

long long int maxSub(vector<int> &arr, int n){
      long long int sum=0;
      long long int maxi = arr[0];
      for(int i=0;i<n;i++){
            sum=sum+arr[i];
            maxi=max(maxi,sum);
            if(sum<0)
            sum=0;
      }
      
      return maxi;
}

int main(){
      int n;
      cin>>n;
      vector<int> arr(n);
      for(int i=0;i<n;i++){
            cin>>arr[i];
      }
      long long int ans = maxSub(arr,n);
      cout<<ans;
}
