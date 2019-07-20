vector<int> compareTriplets(vector<int> a, vector<int> b) {
    int alice_point = 0, bob_point= 0;

    int i=0;
    while(i < 3){
        if(a[i] > b[i])
            alice_point++;
        else if(a[i] != b[i])
            bob_point++;
        i++;
    }

    return {alice_point, bob_point};

}
