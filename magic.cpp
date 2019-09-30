#include<iostream>
#include<stdlib.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int mat[15][15], order, count=1;
    bool err, end;

    do{
        if(argc==2){
            order = atoi(argv[1]);
            if(order%2!=1){
                err = true;
                goto step;
            }
        }else{
            step:
            if(err){
                system("cls");
                cout << "Wrong Parameters !!!" << endl;
            }
                err = true;
                cout << "Enter Order of Matrix \"Must be Odd Integer\": ";
                cin >> order;
        }
    } while ((order % 2) != 1);
    
    
    for (int i = 0; i < order; i++)
        for (int j = 0; j < order; j++)
            mat[i][j] = 0;

    system("cls");

    int max = order * order;
    int size = order - 1;
    int i = size;
    int j = size / 2;

    for ( ; i < order; ){
        for ( ; j < order; ){
            mat[i][j] = count;           
            if(count == max){
                end = true;
                break;
            }else count++;
            i++;
            if(i > size)
                i = 0;
            j--;
            if(j < 0)
                j = size;
            if (mat[i][j]!=0){
                i--;
            if(i < 0)
                i = size;
                i--;
                j++;
            if(j > size)
                j = 0;
            }
        }
        if (end){
            break;
        }
    }
        
    for (int i = 0; i < order; i++){
        for (int j = 0; j < order; j++){
            cout << mat[i][j]<<" | ";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}
