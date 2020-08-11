#include <stdio.h>
#include <assert.h>

int main() {
    int N,a,b;
    long long result=0;
    assert(1 == scanf("%d", &N));

    // insert your code here
    a=N/2;
    b=N-a;
    result=(a+1)*(b+1);

    printf("%lld", result);
    return 0;
}
