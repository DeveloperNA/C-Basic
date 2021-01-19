
#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;
    
    for(int i=1; i<=2*num; i++){
        for(int j=1; j<=2*num; j++){
            
            if((j<= num-i+1 ||  j-i>=num) || (i-j >= num || i+j >= 3*num +1) )     
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}