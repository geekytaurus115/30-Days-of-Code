/*************************************************************************************************************
 
                          Day 3: Intro to Conditional Statements
                                Author : MAMATA SHEE  
                                    ( @mpscoder ) 

*************************************************************************************************************/



#include <bits/stdc++.h>
#define endl "\n"

using namespace std;



int main()
{
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    if( N % 2 != 0){
        cout << "Weird" << endl;
    }
    else{
        if(2 <= N && N <= 5){
            cout << "Not Weird" << endl;
        }
        else if(6 <= N && N <= 20){
            cout << "Weird" << endl;
        }
        else if(N > 20){
            cout << "Not Weird" << endl;
        }
    }

    return 0;
}
