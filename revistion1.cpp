#include<iostream>
#include<algorithm>
using namespace std;
void chocolateFeast(int n, int c, int m) {
int count = 0, w;
    count = n / c;
    w = count;
    if (w >= m)
    {
        while (w % m != 0)
        {
            count += w / m;
            w = w / m + w % m;
        }
        cout << count << endl;
    }
    
}
int main(){
        int t;
        cin>>t;
        int n,c,m;
        while(t--){
                cin>>n>>c>>m;
                chocolateFeast(n,c,m);
        }
        return 0;
}