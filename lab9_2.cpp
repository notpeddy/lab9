#include<iostream>
using namespace std;

void printO(int column, int row)
{

if(column<=0 || row<=0){

cout << "Invalid input";

}else{

for(int c=0; c<column; c++){

for(int r=0; r<row; r++){

cout<<"O";

}

cout << "\n";

} }

}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
