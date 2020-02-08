#include "std_lib_facilities.h"

int main(){
	vector<string> enteredWords;
	vector<string> badWords = { /*Here you put the words to be filterd ex: "bitch" */ };
	
	for(string temp; cin>>temp;)
		enteredWords.push_back(temp);

	cout << "-----------------------" << endl;

	cout << "Entered words: " << endl;
	
	for(int i = 0 ; i < enteredWords.size() ; i++)
		cout << enteredWords[i] << endl;
	
	
	cout << "--------------" << endl;

	cout << "Sorting... " << endl;
	sort(enteredWords);
	cout << "Sorted: " << endl;

	cout << "-----------------------" << endl;

	for(int i = 0 ; i < enteredWords.size() ; i++)
		cout << enteredWords[i] << endl;

	cout << "-----------------------" << endl;

	cout << "removing bad words\n";
	bool bad = false;
	for(int i = 0 ; i < enteredWords.size(); i++){
		for(int j = 0 ; j < badWords.size(); j++){
			if(enteredWords[i] == badWords[j]){
				bad = true;
				break;
			}
		}
		
		if(!bad)
			cout << enteredWords[i] << endl;
		else
			cout << "BLEEP" << endl;
		bad = false;
	}
		






	

		return 0;

}
