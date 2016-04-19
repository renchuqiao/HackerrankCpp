//
// Created by Rachel Ren on 4/18/16.
//
#include <vector>
#include <algorithm>
using namespace std;


struct Interval {
         int start;
         int end;
         Interval() : start(0), end(0) {}
         Interval(int s, int e) : start(s), end(e) {}
     };

struct less_than_key
{
    inline bool operator() (const Interval& interval1, const Interval& interval2)
    {
        return (interval1.start < interval2.start);
    }
};

vector<Interval> merge(vector<Interval>& intervals) {
    if (intervals.size() < 2){
        return intervals;
    }
    sort(intervals.begin(), intervals.end(), less_than_key());
    vector<Interval> result(intervals.size());
    Interval common = intervals[0];
    int count = 0;
    for (int i = 1; i < intervals.size(); i++){
        if (intervals[i].start > common.end){
            result[count] = common;
            common = intervals[i];
            count++;
        }
    }
    return result;
}