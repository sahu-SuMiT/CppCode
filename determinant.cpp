#include <iostream>
using namespace std;

// Function to get the cofactor matrix
void getCofactor(int mat[10][10], int temp[10][10], int p, int q, int n) {
    int i = 0, j = 0;
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            if (row != p && col != q) {
                temp[i][j++] = mat[row][col];
                if (j == n - 1) {
                    j = 0;
                    i++;
                }
            }
        }
    }
}

// Recursive function to calculate the determinant
int determinant(int mat[10][10], int n) {
    int D = 0;
    if (n == 1)
        return mat[0][0];

    int temp[10][10];
    int sign = 1;
    for (int f = 0; f < n; f++) {
        getCofactor(mat, temp, 0, f, n);
        D += sign * mat[0][f] * determinant(temp, n - 1);
        sign = -sign;
    }
    return D;
}

int main() {
    int mat[10][10]; int n,D;
    cout<<"Enter order,n for matrix:\n";cin>>n;
    cout<<"Enter the elements\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    D = determinant(mat,n);
    cout<<"Determinant: "<<D<<"\n";
    (D==0)?cout<<"NOT Invertible":cout<<"Invertible";
    
    return 0;
}
