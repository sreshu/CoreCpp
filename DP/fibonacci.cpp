#include <iostream>
using namespace std;

//iterative dp

int fib_3(int n){
    int *ans = new int[n+1];

    ans[0] = 0;
    ans[1] = 1;

    for(int i =2; i<=n; i++){
        ans[i] = ans[i-1] + ans[i-2];
    }

    return ans[n];
}

//simple recursion

int fibo(int n){
    if(n<=1){
        return n;
    }
    int a = fibo(n-1);
    int b = fibo(n-2);
    return a+b;
}

//recursive dp

int fib_helper(int n, int *ans){
    if(n<=1){
        return n;
    }

    //check if o/p already exists

    if ans[n] != -1{
        return ans[n];
    }

    int a = fibo_helper(n-1, ans);
    int b = fib_helper(n-2, ans);

    //Save output for future checks
    ans[n] = a+b;

    //return final o/p

    return ans[n];

}

int fib_2(int n){
    int *ans = ne int[n+1];

    for(int i = 0; i <= n; i++){
        ans[i] = -1
    }
    return fibo_helper(n.ans);
}