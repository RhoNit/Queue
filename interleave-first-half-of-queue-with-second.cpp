// https://www.codingninjas.com/codestudio/problems/interleave-the-first-half-of-the-queue-with-the-second-half_1169450?leftPanelTab=1

#include <bits/stdc++.h>
using namespace std;

void interLeaveQueue(queue<int> &q) {
    stack<int> st;
    int n = q.size()/2;

    for(int i = 0; i < n; i++) {
        st.push(q.front());
        q.pop();
    }
    
    while(!st.empty()) {
        q.push(st.top());
        st.pop();
    }
    
    for(int i = 0; i < n; i++) {
        q.push(q.front());
        q.pop();
    }
    
    for(int i = 0; i < n; i++) {
        st.push(q.front());
        q.pop();
    }
    
    while(!st.empty()) {
        q.push(st.top());
        st.pop();
        q.push(q.front());
        q.pop();
    }
    
    //printing the queue
    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
   return;
}