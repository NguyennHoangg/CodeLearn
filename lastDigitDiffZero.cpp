
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



#include <iostream>
using namespace std;

int lastDigitDiffZero(int n) {
    int a = 1;
    for (int i = 2; i <= n; i++) {
        a *= i;

        // Loại bỏ các chữ số 0 ở cuối
        while (a % 10 == 0) {
            a /= 10;
        }

        // Giữ lại 4 chữ số cuối để tránh tràn số
        a %= 10000;
    }

    // Trả về chữ số cuối cùng khác 0
    return a % 10;
}

int main() {
    int n;
    cout << "Nhập một số: ";
    cin >> n;
    cout << "Chữ số cuối cùng khác 0 của " << n << "! là: " << lastDigitDiffZero(n) << endl;
    return 0;
}
