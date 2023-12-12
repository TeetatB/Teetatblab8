#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

char findGrade(double s){
    if(s>90){
    return 'A';
    }
    else if(s<=90 && s > 75){
    return 'B';
    }
    else if(s<=75 && s > 60){
    return 'C';
    }
    else if(s<=60 && s > 45){
    return 'D';
    }
    else {
    return 'F';
    }
} 

int main(){
	//Input the number of students
	int N,i = 0;
	cout << "Enter the number of students: ";
	cin >> N;
	string name[N];
	float score[N];	
	
	//Store names and scores of students into an array 
	while(i < N){
		cout << "Name of student " << i+1 << ": ";
		cin.ignore();
		getline(cin,name[i]);
		cout << "Score of student " << i+1 << ": ";
		cin >> score[i];
		i++;
	}
	
	//Print names scores and grades
	i = 0;
	cout << "---------------------------------------------\n";
	cout << setw(25) << "Name" << setw(8) << "Score" << setw(8) << "Grade" << "\n";
	cout << "---------------------------------------------\n";
	while(i < N){
		cout << setw(25) << name[i] << setw(8) << score[i] << setw(8) << findGrade(score[i]) << "\n";
		i++;
	} 
	cout << "---------------------------------------------\n";

	return 0;
}