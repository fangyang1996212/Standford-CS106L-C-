/*素数一般指质数。质数是指在大于1的自然数中，除了1和它本身以外不再有其他因数的自然数。
 所以 1 不是素数哦！
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// 判断一个数是否位素数
//bool is_prime(size_t n){
//    bool flag = true;
//
//    if(n<3) return flag;
//
//    for(int i=2; i <= sqrt(n); ++i){
//        if(n%i == 0)
//            flag = false;
//    }
//
//    return flag;
//}

bool is_prime( int n ) {
  if( n <= 2 || n % 2 == 0 ) {
    return ( n == 2 );
  }
 
  for( int i = 3; i * i <= n; i += 2 ) {
    if( n % i == 0 ) {
      return false;
    }
  }
 
  return true;
}

int main(int argc, char *argv[]){
    
    int a = -1;
    
    if(is_prime(a))
        printf("It is prime.\n");
    else
        printf("Not prime.\n");
    
    return 0;
}
