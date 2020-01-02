/* C++ Program to find sum of Diagonal elements of Square matrix. */

#include<iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    int order, diag1 = 0, diag2 = 0;
    cout << "Enter order of Matrix: ";
    cin >> order;
    int mat[order][order];
    for (int i = 0; i < order; i++) {
        for (int j = 0; j < order; j++) {
            cout << "Enter element " << j + 1 << " of Row " << i + 1 << ": ";
            cin >> mat[i][j];
            if(i == j){
                diag1 += mat[i][j];
            }
            if(i+j == order-1){
                diag2 += mat[i][j];
            }
        }
    }
    cout << "Sum of First Diagonal (Left to Right): " << diag1 << endl;
    cout << "Sum of Second Diagonal (Right to Left): " << diag2 << endl;
    system("pause");
    return 0;
}
