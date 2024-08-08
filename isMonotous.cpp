
/* Cho một mảng các số nguyên, bạn hãy viết hàm kiểm tra xem các phần tử của mảng có tạo thành một dãy số tăng dần hoặc giảm dần hay không, nếu có return true, ngược lại return false.

Ví du

Với sequence = [1, 4, 5, 7, 9], thì kết quả là isMonotonous(sequence) = true
Với sequence = [0], thì kết quả là isMonotonous(sequence) = true;
Với sequence = [3, 3], thì kết quả là isMonotonous(sequence) = false.
Giải thích: 2 phần tử bằng nhau không tạo thành dãy tăng hay dãy giảm */

#include<iostream>
#include<vector>
using namespace std;


bool isMonotous(vector<int> sequence){
    bool isIncrease = true;
    bool isDecrease = true;
    for(int i = 0; i < sequence.size() - 1; i++){
        if(sequence[i] > sequence[i + 1]){
            isIncrease = false;
        }
        if(sequence[i] < sequence[i + 1]){
            isDecrease = false;
        }
    }
    return isIncrease || isDecrease;
}
int main(){
    int n;
    cin >> n;
    vector<int> sequence(n);
    for(int i = 0; i < n; i++){
        cin >> sequence[i];
    }
}