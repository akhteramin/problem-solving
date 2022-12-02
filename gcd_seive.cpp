#include<bits/stdc++.h>
using namespace std;

//x = (p1^x1) * (p2^x2) * ... (pn^xn)
//y = (q1^y1) * (q2^y2) * ... (qn^yn)
//
//12 = (2^2) * (3^1)
//90 = (2^1) * (3^2) * (5^1)
//
//gcd = (2^1) * (3^1)

//12 = 1, 2, 3, 4, 6, 12
//18 = 1, 2, 3, 6, 9, 18

int isPrime[200000];
vector < int > divisors[200000];
int divcnt[2000000];
/// divisor[i] -> all divisors of i

void sieve(int n)
{
//    for(int i = 1; i <= n; i++) divisors[i].push_back(1);
    for(int i = 2; i <= n; i++){
        for(int j = i; j <= n; j += i) {
            divisors[j].push_back(i);
            divcnt[j]++;
        }
    }
}

//gcd(x, y) = gcd(x%y, y)
//gcd(x, 0) = x

int gcdRec(int x, int y)
{
    if(y == 0) return x;
    return gcdRec(y, x % y);
}


int gcd(int x, int y)
{
    if(x == 0 || y == 0) return max(x, y);
    while(true){
        if(x % y == 0 || y % x == 0) break;
        if(x > y){
            x = x % y;
        }
        else{
            y = y % x;
        }
    }

    return min(x, y);
}

//2*3*5*7*11*13*17
//2^7

//8)28( 3
//  24
//
//  4)8(2
//    8
//
//    0
int main()
{
    sieve(100);
    int x, y;
    cin >> x >> y;

    int gc = 1;

    for(int i = 0; i < divisors[x].size(); i++){
        int cur = divisors[x][i];
        if(y % cur == 0)
            gc = max(gc, cur);
    }





//    for(int i = 0; i < divisors[x].size(); i++){
//
//        int cur = divisors[x][i];
//        if(y % cur != 0)  continue;
//
//        int cntx = 0, cnty = 0;
//
//        int tmp = x;
//        while(tmp % cur == 0) {
//            cntx++;
//            tmp = tmp / cur;
//        }
//
//        tmp = y;
//        while(tmp % cur == 0) {
//            cnty++;
//            tmp = tmp / cur;
//        }
//
//        gc = gc * pow(cur, min(cntx, cnty));
//
//    }
    cout << gc << endl;


    return 0;
}
