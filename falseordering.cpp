#include <iostream>
#include <algorithm>
#include <vector>
#include <stdio.h>
using namespace std;


bool cmp(pair <int, int> a, pair<int,int> b)
{

	if(a.first < b.first) {
            //cout<<a.first<<" "<<a.second<<" "<<b.first<<" "<<b.second<<endl;
		return 1;
	}

	if(a.first > b.first) {
		return 0;
	}

	if(a.second > b.second) {
		return 1;
	}

	return 0;

}




int main()
{


	int x;
	int t;

	vector < pair <int, int> > a(1001);

	for (int i = 1; i <= 1000; i++) {
		a[i].second = i;
		//cout<<a[i].second<<" ";
		a[i].first = 0;
		//cout<<a[i].first<<" ";
	}

	for (int i = 1; i <= 1000; i++) {
			for (int j = i; j <= 1000; j = j + i) {
				a[j].first++;
				//cout<<a[j].first<<" ";
			}
			//cout<<a[i].first<<" ";


	}
	//cout<<cmp<<endl;

	sort(a.begin(), a.end(), cmp);

	scanf("%d", &t);


	for (int i = 1; i <= t; i++) {
		scanf("%d", &x);
		printf("Case %d: %d\n", i, a[x].second);

	}


}
