void reverseQueue(queue<int> &Q) {
    if(Q.size() != 0) {
        int data = Q.front();
        Q.pop();
        reverseQueue(Q);
        Q.push(data);
    }
}

queue<int> rev(queue<int> Q) {
    reverseQueue(Q);
    return Q;
}