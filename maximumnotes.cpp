#include<iostream>
using namespace std ;
int main ()
{
    int x ;
    int n5 , n10 , n20 , n50 , n100 , n200 , n500 , n2000 ;
    n5 = n10 = n20 = n50 = n100 = n200 = n500 = n2000 = 0 ;
    cout << " enter the amount ";
    cin >> x;
    switch (x>=10){
            n10 = x/10 ;
            x -= n10 * 10 ;
            break ;
    }
    switch (x>=5 ){
            n5 = x /5 ;
            x -= n5 * 5 ;
            break ;
    }
    cout << n10 + n5 ;
    return 0 ;
}