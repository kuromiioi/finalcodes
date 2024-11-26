//filling jars problem
#include <stdio.h>

int main() {
    long long N, M; 
    scanf("%lld %lld", &N, &M);

    long long totalCandies = 0;
    
    for (long long i = 0; i < M; i++) {
        long long a, b, k;
        scanf("%lld %lld %lld", &a, &b, &k);
// Add the candies contributed by this operation
        totalCandies += (b - a + 1) * k;
    }
// Calculate the average number of candies per jar (rounded down)
    printf("%lld\n", totalCandies / N);

return 0;
}
