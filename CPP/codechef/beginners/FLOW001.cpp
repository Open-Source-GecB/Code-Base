//https://www.codechef.com/problems/FLOW001

#include<cstdio>

int main(){
    int t, a, b;

    scanf("%d",&t);

    while(t--){
        scanf("%d %d",&a, &b);

        int ans = a + b;
        printf("%d\n",ans);
    }

}