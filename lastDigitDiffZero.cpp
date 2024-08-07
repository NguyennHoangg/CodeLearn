#include<iostream> 
using namespace std;

int lastDigitDiffZero(int n){
    int total = 1;
    if(n == 1){
        return total;
    }
    else{
        return total *= n * lastDigitDiffZero(n - 1);
    }
    
}

    int Check(int Digit){
        int temp = 0;
        while(Digit > 0){
            temp = Digit % 10;
            if(temp == 0){
                Digit /= 10;
            }else{
                return temp;
                break;
            }
        }
    }
int main(){
    int n; cin >> n;
    int Digit = lastDigitDiffZero(n);
    cout << Digit << endl;
    int c = Check(Digit);
    cout << c << endl;
    system("pause");
    return 0;
}