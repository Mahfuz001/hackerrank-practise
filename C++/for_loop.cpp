#include <iostream>
#include <cstdio>
using namespace std;
string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
int main() {
    int a,b;
    cin >> a >> b;
    
    for(int i=a;i<=b;i++){
        
        if(i>9){
            if(i%2 == 0) cout << "even\n";
            else cout << "odd\n";
        }else{
            cout << arr[i] << endl;
            continue;
        }
    }
    return 0;
}
