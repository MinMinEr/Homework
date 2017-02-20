// Àý4-11
#include<iomanip>
#include<iostream>
using namespace std ;
void fun( int, int, int );
int main()
{ int i , a[3] = { 1, 2, 3 } ;
   fun ( a[0] ,  a[1] ,  a[2] ) ;
   for ( i = 0 ; i < 3 ;  i ++ ) cout << setw( 4 ) << a [ i ] ;
   cout << endl ;
}
void fun ( int a, int b, int c )
{ a++ ;  b++ ;  c++ ;
   cout  << setw( 4 ) << a << setw( 4 ) << b << setw( 4 ) << c << endl ;
   return ;
}
