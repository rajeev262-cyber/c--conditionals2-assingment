#include<iostream>
using namespace std ;
int main ()
{
    int x;
    int  n5 ,n10 ,  n20 , n50 , n100 , n200 ,n500 , n2000 ;
    n5 = n10 = n20 = n50 = n100 = n200 = n500 = n2000 = 0 ;
    cout << "enter the amount " ;
    cin >> x;
    switch (x >=2000){
        case 1  :
            n2000 = x / 2000  ;
            x -= n2000 * 2000;
            break ;
    }
    switch (x>=500){
        case 1 :
            n500 = x / 500 ;
            x -= n500 * 500 ;
            break ;
    }
    switch (x>=200){
        case 1 :
            n200 = x / 200 ;
            x -= n200 * 200 ;
            break ;
    }
    switch (x>=100 ){
        case 1 :
            n100 =  x /100 ;
            x -= n100  *100 ;
            break ;
    }
    switch (x>=50 ){
        case 1 :
            n50 = x/50;
            x -= n50 * 50 ;
            break ;
    }
    switch (x>= 20){
        case 1 :
            n20 = x / 20 ;
            x -= n20 * 20 ;
            break ;
    }
    switch (x>=10 ){
        case 1 :
            n10 = x /10 ;
            x -= n10 *10 ;
            break ;
    }
    switch (x>=5){
        case 1 :
            n5 = x/ 5;
            x -= n5 * 5 ;
            break ;
    }
    cout << n5 + n10 + n20 + n50 + n100 + n200 + n500 + n2000 ;
    return 0 ;
}