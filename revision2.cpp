// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <climits>
// using namespace std;
// int main()
// {
//    int n, t;
//    cin >> n >> t;
//    vector<int> width;
//    for (int i = 0; i < n; i++)
//    {
//       cin >> width[i];
//    }
//    for (int j = 0; j < t; j++)
//    {
//       int i, k;
//       cin >> i >> k;
//       int pass = INT_MAX;
//       for (int a = i; a <= k; a++)
//       {
//          if (width[a] < pass)
//             pass = width[a];
//       }
//       cout << pass;
//    }
//    return 0;
// }
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int my_min(const vector<int>& v, int i, int j) {
    int the_min = v[i];
    
    for (int o = i+1; o <= j;o++)
        if (v[o] < the_min)
            the_min = v[o];
        
    return the_min;
}
int main(){
    int n;
    int t;
    cin >> n >> t;
    vector<int> width(n);
    for(int width_i = 0;width_i < n;width_i++){
       cin >> width[width_i];
    }
    for(int a0 = 0; a0 < t; a0++){
        int i;
        int j;
        cin >> i >> j;
        
        cout << my_min(width,i,j) << endl;
    }
    return 0;
}