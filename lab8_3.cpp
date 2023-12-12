#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int age;
    int height;
    int bounty;
    cout << "Enter your age: ";
    cin >> age;
   
        if (age <= 25){
            cout << "Enter your height: ";
            cin >> height;
            if(height < 100){
                cout << "Your character = Chopper";
            }
            if(height < 180 && height >=100){
                cout << "Your character = Usopp";
            }
            if(height >= 180){
                 cout << "Enter your bounty: ";
                 cin >> bounty;
                if(bounty > 1.1*pow(10,9)){
                    cout << "Your character = Zoro";
                }
                if(bounty <= 1.1*pow(10,9)){
                    cout << "Your character = Sanji";
                }
            }
        }
        if (age > 60) { 
            cout << "Your character = Brook";
            }
        if (age > 25 && age <= 60 ) {
                 cout << "Enter your bounty: ";
                 cin >> bounty;
                if (bounty > 5*pow(10,8)) { 
                cout << "Your character = Jinbe";
                }
                if (bounty <= 5*pow(10,8)){
                    cout << "Your character = Franky";
                }
                }
return 0;
}