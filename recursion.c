#include "stdio.h"

// int giai_thua (int n ) {
//      if (n==0 ) return 1 ;  
//      return n* giai_thua (n-1) ;  
// } 

// int tong (int n ) {
//      if (n==0) return  0 ; 
//      return n + tong (n-1) ; 
// }

// int tong_chan (int n ) 
// {
//     if (n==0) return 0 ;  
//     if (n%2==0) return n + tong_chan (n-1) ; 
//     else return tong_chan (n-1) ;  
// }

// int luy_thua  (int a, int n  ) {
//      if (n==1) return a ;  
//      if (a==0) return 0  ;  
//      if (a==1 ) return 1 ;  
//      return a*luy_thua (a,n-1) ;  
// }

// int fibo (int n ) {
//      if (n==0) return 0 ; 
//      if (n==1 ) return  1 ; 
//      return  fibo (n-2) +fibo (n-1) ; 
// }

// int dem_so_chu_so (int n ) {
//      if (n <10) return 1  ;  
//      return 1 + dem_so_chu_so (n/10) ;  
// }

// int tong_chu_so (int n ) {
//      if (n== 0) return 0  ;  
//      return n%10 + tong_chu_so (n/10) ;  
// }

// int dao_nguoc_so (int n , int result ) {
//      if (n == 0 ) return  result ;  
//      int chu_so = n%10  ;  
//      return dao_nguoc_so (n/10,result * 10+chu_so ) ;   //  gan result = 0 ; 
// }


int main () 
{
     printf ("%d",dao_nguoc_so(1234,0)) ;  
}