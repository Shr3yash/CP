// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

    struct meeting{
        int start;
        int end;
        int pos;
    };
class Solution
{
     public:
      int maxMeetings(int start[], int end[], int n)
   {
       // Your code here
     vector<pair<int ,int>> v;
     int starting,ending;
     int count=1;
     for(int i=0;i<n;i++){
         v.push_back(make_pair(end[i],start[i]));
     }
     sort(v.begin(),v.end());
     starting=v[0].second;
     ending=v[0].first;
     for(int i=1;i<n;i++){
         if(v[i].second>ending){
             ending=v[i].first;
             count++;
         }
     }
     return count;
       
   
   }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends
