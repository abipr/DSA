// Program to find whether a number and word is palindrome or not.

#include<iostream>				//header file
using namespace std;
int main()						//Main function
{
	string num_str = "";		//define variable
	cin >> num_str;				//taking input from user
	string new_str = "";		//define a new variable
	
	//make num_str all lower case and remove all punctuation and spaces
	string test_str = "";		//define a new variable for the cleaned input
	for(int i = 0; i < num_str.size(); i++){
		string temp = num_str[i];
		if(ispunct(temp) || isspace(temp)){
			continue;
		}
		else if(isalpha(temp)){
			test_str += tolower(temp);
		}
		else{
			test_str += temp;
		}
		cout<< test_str;
	}
	for(int x = (num_str.size()-1); x >= 0; x--){		//for loop started
		new_str += num_str[x];							//assigning the value input by user to new variable in reverse order
	}													//for loop end

	cout << (num_str == new_str ? "palindrome" : "Non-palindrome");			//checking whether the value assigned to both variables is equal or not using ternary operator and printing whether it's palindrome or non-palindrome

	return 0;					//returning the main function
}

//complexity of the program is O(n)
//test cases:- 101,pop,asdfgfdsa,123454321,obobo,nancyiycnan etc.
//addtional edge cases: "Sit on a potato pan, Otis"
