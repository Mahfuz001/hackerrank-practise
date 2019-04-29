#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>>
using namespace std;

int max_of_four(int a, int b, int c, int d){
    vector<int> mVec;
    mVec.push_back(a);
    mVec.push_back(b);
    mVec.push_back(c);
    mVec.push_back(d);
    sort(mVec.begin(),mVec.end(),greater<int>());
    return mVec[0];
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
