#include <bits/stdc++.h>

using namespace std;

string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    if(n>9) cout << "Greater than 9"<<endl;
    else cout << arr[n] << endl;

    return 0;
}

