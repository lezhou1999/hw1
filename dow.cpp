#include <iostream>
using namespace std;


int main(){
    int inputNum;
    
    
    cout << "Number:"<<endl;
    cin >> inputNum;
    if (inputNum<SHRT_MIN || inputNum>SHRT_MAX){
        cout << inputNum << "? Are you serious?" << endl;
        cout << "The only valid number is 0-6"<<endl;
        return 2;


    }
    else if(inputNum<=6 && inputNum>=0){
        if(inputNum == 0)
        {
            cout << "Sunday"<< endl;
        }
        else if (inputNum == 1)
        {
            cout << "Monday"<< endl;
        }
        else if (inputNum == 2)
        {
            cout << "Tuesday"<< endl;
        }
        else if (inputNum == 3)
        {
            cout << "Wednesday"<< endl;
        }
        else if (inputNum == 4)
        {
            cout << "Thursday"<< endl;
        }
        else if (inputNum == 5)
        {
            cout << "Friday"<< endl;
        }
        else if (inputNum == 6)
        {
            cout << "Saturday"<< endl;
        }
        
        return 0;

    }
    else{
        cout << "invalid input!"<<endl;
        return 1;
    }


return 0;

}
