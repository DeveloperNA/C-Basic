#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;
    
    for(int i=1; i<=2*num; i++){
        for(int j=1; j<=2*num; j++){
            
            if((j<=i && i+j <= 2*num+1) || (i+j >= 2*num+1 && j >=i))     
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}