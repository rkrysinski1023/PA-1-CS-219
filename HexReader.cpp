//HexReader.cpp
//Ryan Krysinski
//Professor Dwight Poppin
//1-28-2022

#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ifstream readfile;
	//op is the operation (ie. ADD, SUBTRACT) etc.
	std::string op;
	//int i is used purely for the UI, to list the operations in order
	int i = 1, sum;
	uint32_t hexone, hextwo;
	readfile.open("Hex.txt");
	if(!readfile.is_open()){
		cout << "ERROR: File could not be opened" << endl;
	}
	else{
		//While loop ecexutes as long as file can be read 
		while(readfile >> op >> std::hex >> hexone >> hextwo){
			//Conditional to check for operation
			if(op == "ADD"){
				//std::hex is used to convert hex to integers and vice versa. 
				cout << i << ". " << std::hex << hexone << " + " << hextwo << " = 0x" << hexone + hextwo << endl;
			}
			i++;
		}
	}
	readfile.close();
	return(0);
}
