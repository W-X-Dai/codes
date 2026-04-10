#include <stdio.h>
#include <stdlib.h>

int main(){
    int test_cases;
    scanf("%d", &test_cases);
    for(int t = 0; t < test_cases; t++){
        int x, y;
        scanf("%d%d", &x, &y);
        if(x > y){
            printf("NO\n");
            continue;
        }
        if(x == 0 && y % 2 == 0){
            printf("NO\n");
            continue;
        }
        if(x == y || x + 1 == y){
            printf("YES\n");
            int n = x + y;
            for(int i = 1; i < n; i++){
                printf("%d %d\n", i, i + 1);
            }
            continue;
        }
        if((x % 2 == 1 && y % 2 == 1) || (x % 2 == 0 && y % 2 == 0)){
            printf("YES\n");
            int d = y - x;
            int n = x + y;
            for(int i = 2; i <= 2 + d && i <= n; i++){
                printf("1 %d\n", i);
            }
            for(int i = d + 2; i < n; i++){
                printf("%d %d\n", i, i + 1);
            }
            continue;
        }
        else{
            printf("YES\n");
            int d = y - x;
            int n = x + y;
            for(int i = 2; i < 2 + d && i <= n; i++){
                printf("1 %d\n", i);
            }
            for(int i = d + 1; i < n; i++){
                printf("%d %d\n", i, i + 1);
            }
            continue;
        }
    }
}
