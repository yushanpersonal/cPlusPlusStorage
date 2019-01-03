#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

// task 9
bool symm(unsigned n){
    unsigned i = n;
    unsigned m = 0;
    while (i > 0){
        m = m * 10 + i%10;
        i = i/10;
    }
    return (m == n);
    
} 

//task 10
const double TINY_VALUE = 1e-10;
double tsin(double x){
    double g = 0;
    double t = x;
    int n = 1;
    do{
        g +=t;
        n++;
        t = -t*x*x/(2*n-1)/(2*n-2);
    }while( fabs(t) >= TINY_VALUE);
   return g;
}

//task11
void move(char src, char dest){
    cout<< src << "->" << dest << endl ;
}

void hanoi(int m, char src, char med, char dest){
    if(m == 1){
        move(src, dest);
    } else{
        hanoi(m-1,src, dest, med);
        move(src, dest);
        hanoi(m-1,med, src, dest);
    }
}

//task 12
void swap(int &a, int &b){
    int p = a;
    a = b;
    b = p;
}


int main() {
    //task 9
    //function
    /*
    for(unsigned i =11; i <1000; i++ ){
        if(symm(i)&&symm(i*i)&&symm(i*i*i)){
            cout << i << endl;
        }
    }
    */
    
    //task 10
    /*
    double r,s;
    cin>>r>>s;
    if(fabs(r) <= fabs(s)){
        cout << sqrt(tsin(r)*tsin(r)+ tsin(s)*tsin(s)) <<endl;   
    }else{
        cout << tsin(r*s)/2 << endl;
    }
    */
    
    //task 11
    //hanoi
    /*
    int m;
    cout << "please enter the number of plates:" << endl;    
    cin >> m;
    hanoi(m, 'A','B','C');
    */
    
    //task 12
    /*
    int a = 5;
    int b = 9;
    swap( a, b);
    cout << "a= "<< a << endl;
    cout << "b= "<< b << endl;
    */
    
    
    return 0;
}
