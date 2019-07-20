int simpleArraySum(vector<int> ar,int count) {
    int sum = 0;
    for(int i=0; i<count; i++){
        sum += ar[i];
    }
    return sum;
}
