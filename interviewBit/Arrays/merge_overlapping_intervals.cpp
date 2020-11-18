// Problem Link :
// https://www.interviewbit.com/problems/merge-overlapping-intervals/

/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
 
bool cmp(Interval A, Interval B){
    if(A.start==B.start){
        return A.end<B.end;
    }
    return A.start<B.start;
}

vector<Interval> Solution::merge(vector<Interval> &A) {

    sort(A.begin(), A.end(), cmp);
    
    int start = A[0].start;
    int end = A[0].end;
    vector<Interval> ans;
    int n  = A.size();
    if(n==1){
        ans.push_back(A[0]);
    }
    int f =0;
    
    for(int i=1; i<n; i++){
        if(A[i].start<=end){
            end = max(end, A[i].end);
            f=1;
        }
        else if(A[i].start > end){
            Interval x = Interval(start, end);
            ans.push_back(x);
            start = A[i].start;
            end = A[i].end;
            f=0;
            
        }
        
        if(i==n-1){
            Interval x = Interval(start, end);
            ans.push_back(x);
        }
        
    }
    
    return ans;
}
