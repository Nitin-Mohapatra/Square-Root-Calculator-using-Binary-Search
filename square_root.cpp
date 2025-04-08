#include <iostream>
using namespace std;
int main(){
    float ans,no,error_allowed,low = 0 , mid = 0,high = 0;
    cout << "Enter the no: ";
    cin >> no;
    no < 0 ? no = 1 : no;
    if(no <= 0 ){
        cout << "Please eneter no greater than 0: ";
        cin >> no;
    }
    cout << "Enter the error allowed: ";
    cin >> error_allowed;
    high = no;

    while(true){
        mid = (high + low)/2;
        if (mid*mid > no){
            high = mid;
        }else{
            low = mid;
        }
        
        //checking the error precision
        float sub  = no - (mid*mid);
        float absSub = sub < 0 ? sub*-1 : sub;
        if(absSub <= error_allowed){
            ans = mid;
            break;
        }
    }
    cout << ans;
    return 0;
}
