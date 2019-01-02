#include <iostream>
using namespace std;

int main() {
    
    //task 1
    /* 
    cout<<"hello"<<endl;
    cout<<"welcome to C++!"<<endl;
    */
    
    //task2
    /*
    int score = 60;
    cout<< (score >= 60 ? "pass": "fail");
    */
    
    //task 3
    /*
    float z=7.56;
    int wholePart;
    wholePart = int(z);
    cout<< wholePart << endl;
    float fracz = z - int(z);
    cout<< fracz << endl;
    */
    
    //task 4
    /*
    int year;
    bool isLeapYear;
    cout<< "enter the year" <<endl;
    cin >>year;
    isLeapYear = ((year%4==0 && year%100 ==0) || (year%400==0));
    if(isLeapYear){
        cout<< year << "is a leap year"<<endl;
    }else{
        cout<< year << "is not a leap year"<< endl;
    }
    */
    
    //task 5
    /*
    int x ,y;
    cout<<"enter x and y";
    cin>>x>>y;
    if(x> y){
        cout<< x << "is greater than" << y << endl;
    } else if(x==y){
        cout<< x << "is equal to" << y << endl;
    }else{
        cout<< x << "is less than" << y << endl;
    }
    */
    
    
    //task 6
    /*
    int day;
    cin >> day;
    day = day % 7;
    switch (day){
        case 0:
            cout<<"sunday"<<endl;
            break;
        
        case 1:
            cout<<"Monday"<<endl;
            break;
        case 2:
            cout<<"Tuesday"<<endl;
            break;
        case 3:
            cout<<"wednesday"<<endl;
            break;
        case 4:
            cout<<"thursday"<<endl;
            break;
        case 5:
            cout<<"Friday"<< endl;
            break;
        case 6:
            cout<<"Saturday"<<endl;
            break;
        default:
            cout<<"wtf"<<endl;
            break;
    }
    */
    
    //task 7
    /*
    int i =1, sum =0;
    while(i<=10){
        sum = sum + i++;
    }
    cout<<"sum="<< sum<< endl;
    */
    
    //task 8
    /*
    typedef double Area, volume;
    enum Weekdays{mon, tue, wed, thu, fri, sat, sun}
    volume v;
    */
    
    //task 9
    
    
    
    
    return 0;
}
