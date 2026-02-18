
#include "stdio.h"


// int tong_phan_tu (int a[], int n , int index ) {
//      if(index == n) return 0  ; 
//      return a[index] + tong_phan_tu (a,n,index+1) ; 
// }


// int tim_max (int a[] , int n , int index ) {
//      if (index == n-1 ) return a[index] ;  
//      int max_con_lai = tim_max(a,n,index+1) ;   
//      if (a[index]>max_con_lai) return a[index] ; 
//      else return max_con_lai ;  
// } 

// int dem_chan (int a[], int n , int index ) {
//      if(index == n ) return 0 ;  
//      if (a[index]%2==0) return 1 + dem_chan (a,n,index+1) ; 
//      else return dem_chan (a, n , index+1 ) ;  

// }

// int kiem_tra_mang_tang_dan  (int a[], int n , int index ) {
//      if (index == n ) return  1;  
//      if (a[index]>a[index+1]) return  0  ;  
//      else return kiem_tra_mang_tang_dan (a, n , index+1 ) ; 

// } 

// int linear_search (int a[], int n , int index , int x) {
//      if (index == n ) return  -1 ;  
//      if (a[index]==x ) return index ;  
//      else return linear_search (a,n ,index+1 , x ) ;  
// }
 
// int binary_search (int a[], int n , int left , int right ,int x ) {
//      if (left > right ) return -1 ;  
//      int mid  = (left+right)/2 ; 
//      if (a[mid] == x) return mid ;  
//      else if (a[mid]>x) return binary_search (a,n,left,mid-1 , x ) ; 
//      else return binary_search (a,n,mid+1,right,x ) ;   // dk mang da sort 
// }


// int tinh_tong_vi_tri_chan (int a[], int n , int index ) {
//      if (index == n ) return 0  ;  
//      if (index % 2 ==0 ) return a[index] + tinh_tong_vi_tri_chan (a,n ,index+1 ) ; 
//      else return tinh_tong_vi_tri_chan (a, n , index +1 )  ;  
// }


// int kiem_tra_mang_duong (int a[], int n , int index ) {
//      if (index == n ) return  1 ;  
//      if (a[index]<0) return  0  ; 
//      return kiem_tra_mang_duong (a,n , index+1 ) ;  
// } 


// int dem_so_phan_tu_lon_hon (int a[], int n , int index ,int x  ) {
//      if (index == n ) return 0  ;  
//      if(a[index]>x) return 1+ dem_so_phan_tu_lon_hon (a,n , index+1 , x ) ; 
//      else return dem_so_phan_tu_lon_hon (a, n , index+1 , x ) ;  
// }

// int kiem_tra_mang_tang_dan (int a[], int n , int index  ) {
//      if (index == n ) return 1 ; 
//      if (a[index]>a[index+1]) return 0 ; 
//      else kiem_tra_mang_tang_dan (a,n,index+1) ; 
// }

// int kiem_tra_mang_doi_xung (int a[] , int left, int right ) {
//      if (left >=right ) return  1 ;  
//      if (a[left] != a[right]) return 0 ;   
//      else kiem_tra_mang_doi_xung (a, left+1, right+1 ) ; 

// } 


int main () {
     int a[] = {1,2,2,1 } ;  
     int n = 4;  
     printf ("%d",kiem_tra_mang_doi_xung(a,n ,n-1)) ;   
}