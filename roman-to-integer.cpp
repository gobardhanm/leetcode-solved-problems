#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)
#define pb push_back
#define pp pop_back
#define mp make_pair
#define ff first
#define ss second
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int ans = 0;
    for(int i= s.size() - 1 ; i >= 0; ++i){
        if(i == 'I') ans+= 1;
        else if(i == 'V') ans += 5;
        else if( i == 'I' ) ans -= 1;
        else if(i == 'X') ans += 10;
        else if( i == 'I' ) ans -= 1;
        else if(i == 'L') ans += 50;
        else if
    }
}
