#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string.h>
#include <vector>
#include <string>
#include <cmath>
#include <map>
#include <algorithm>
using namespace std;

typedef long long ll;
#define debug(args...) dbg(),args
#define S(N) scanf("%d", &N)
#define SS(N) scanf("%s", N)
#define FOR(A,B,C) for(int A=B;A<C;++A)
#define RFOR(A,B,C) for(int A=B;A>=C;--A)
#define PB(A,B) A.push_back(B);)
#define MEM(A,B) memset(A,B,sizeof(A))
#define MAX(A,B) ((A > B) ? A : B)
#define MIN(A,B) ((A < B) ? A : B)
#define MAXLIM 100000

bool DBG;
struct dbg { template<typename T> dbg& operator , (const T& v) { if (DBG)
 cerr << v << " "; return *this; } ~dbg() { if (DBG) cerr << endl; } };

int main (int argc, char *argv[]) {
    DBG = (argc > 1 && *argv[1]);

    int t;
    S(t);

    while (t-- > 0) {

    }

    return 0;
}
