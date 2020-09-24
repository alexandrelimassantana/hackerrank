#include <bits/stdc++.h>

using namespace std;

// Complete the strangeCounter function below.
long strangeCounter(long t) {
    long c = 3;
    while(t > c) {
        t -= c;
        c *= 2;
    }
    return c-t+1;
}

int main(int argc, const char *argv[])
{
    cout << strangeCounter(atoi(argv[1])) << endl;
    return 0;
}