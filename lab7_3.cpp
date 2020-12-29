/*
"Enter your age: "
"Enter your height: "
"Enter your property: "
"Your status = "
"UNFRIEND"
"FRIEND"
"BEST FRIEND"
"ONE-NIGHT-STAND"
"MARRIED"
*/
#include<iostream>
#include<string>
using namespace std;

int main(){
    string status;
    int age,height,money;
    cout << "Enter your age: ";
    cin >> age;
    if(age <= 20){
        cout << "Enter your height: ";
        cin >> height;
        if (height<160)
        {
            status = "Your status = UNFRIEND";
        }else if(height <175)
        {
            status = "Your status = FRIEND";
        }else{
            cout <<"Enter your property: ";
            cin >> money;
            if(money>69000000){
                status = "Your status = MARRIED";
            }else{
                status = "Your status = ONE-NIGHT-STAND";
            }
        }

}    else if(age<30){
        cout <<"Enter your property: ";
        cin >>money;
        if(money >10000000){
            status ="Your status = BEST FRIEND";
        }else
        {status = "Your status = UNFRIEND";
        }
    }else{status = "Your status = UNFRIEND";
        }
        cout << status;

}   
