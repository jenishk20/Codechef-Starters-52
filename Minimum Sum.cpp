#include<bits/stdc++.h>
using namespace std;



#define ff              first
#define ss              second
#define int             long long
#define ll long long

#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define all(a)      (a).begin(),(a).end()
#define pb push_back

#define pi 3.1415926535
#define light             ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using vi = vector<int>;
using vvi = vector<vi>;
using vvvi = vector<vvi>;
using mii = map<int, int>;
using pii = pair<int, int>;

#define MAX 100000
const long long   M = 1e9 + 7;
void io() {
#ifndef  ONLINE_JUDGE
	freopen("i.txt", "r", stdin);
	freopen("o.txt", "w", stdout);
#endif
}

void solve()
{

	int n, i;
	cin >> n;
	vi a(n);
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int gcd = a[0];
	for (i = 1; i < n; i++)
	{
		gcd = __gcd(gcd, a[i]);
	}
	cout << gcd*n << endl;


}
int32_t main()
{


	io();
	light;

	vi check = {2, 3, 5};

	int tc = 1;
	int tt = 1;
	cin >> tc;

	while (tc--) {

		solve();
	}
}

