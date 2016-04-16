//
// Created by Rachel Ren on 4/16/16.
// This file is to solve Hackerrank Problem Interval Selection
//
#include <algorithm>
#include <cstdio>
using namespace std;

pair<int,int> a[1002];

int main() {
    int i,m,n,x,y,z,may;


    for (scanf("%d",&z);z;--z) {
        scanf("%d",&n);
        for (i=1;i<=n;++i) {
            scanf("%d%d",&a[i].second,&a[i].first);
        }
        sort(a+1,a+n+1);
        a[x=y=m=0]=make_pair(-1,-1);
        for (i=1;i<=n;++i) {
            may=-1;
            if (a[x].first<a[i].second) {
                may=x;
            }
            if ((y>may) && (a[y].first<a[i].second)) {
                may=y;
            }
            if (may==x) {
                x=i;
                ++m;
            }
            else if (may==y) {
                y=i;
                ++m;
            }
        }
        printf("%d\n",m);
    }
    return 0;
}

