
/* Tìm chữ số khác không cuối cùng của n!(giai thừa)

Ví dụ:

Với n = 5, kết quả lastDigitDiffZero(n) = 2.
5! = 1 · 2 · 3 · 4 · 5 = 120.
Với n = 6, kết quả lastDigitDiffZero(n) = 2.
6! =1 · 2 · 3 · 4 · 5 · 6 = 720.
Với n = 10, kết quả lastDigitDiffZero(n) = 8.
10! = 3628800.
Đầu vào/Đầu ra

[Thời gian chạy] 0.5 giây
[input] integer n
Điều kiện:
1 ≤ n ≤ 10^6.
[output] integer
Chữ số cuối cùng khác 0 của n! */



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
