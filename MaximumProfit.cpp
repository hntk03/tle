#include <stdio.h>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>



using namespace std;

typedef vector<int> VI;
typedef vector<string> VS;


//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)



int main(void){

	int n; scanf("%d", &n);
	int r;
	int min = 1000000;
	int min_index;
	int max = 0;
	int max_index;
	REP(i,n){
		scanf("%d", &r);
		if(r < min){
			min = r;
			min_index = i;
		}else if(r > max){
			max = r;
			max_index = i;
		}
	}

	if(min_index < max_index) printf("%d\n", max - min);
	else printf("-1\n");

	return 0;

}
