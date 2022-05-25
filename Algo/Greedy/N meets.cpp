// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    struct meeting{
        int start;
        int end;
        int pos;
    }
    
    bool comparator(struct meeting m1, meeting m2){
        if(m1.end<m2.end)return true;
        else if(m1.end>m2.end) return false;
        else if(m1.pos<m2.pos) return true;
        return false;
    }
    int maxMeetings(int start[], int end[], int n)
    {
        struct meeting meets[n];
        
        for(int i=0; i<n; ++i){
            meets[i].start=start[i], meets[i].end=end[i], meets[i].pos=i+1;
        }
        
        sort(meets, meets+n, comparator);   //nlogn
        // Your code here
        int count =1;
        int limit =meets[0].end;
        for(int i=1; i<n; ++i){
            if(meets[i].start>limit) {
                count++;
                limit=meets[i].end;
            }
        }
        cout<<count;
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
