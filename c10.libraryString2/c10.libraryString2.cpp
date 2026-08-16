
#include <iostream>
#include "clsString.h"
using namespace std;

int main()
{
	clsString string1("ali");
	clsString string2("ali mohammed may");
	string1.value = "ali ali";
	cout << string1.length() << endl;
	cout << string1.countValue() << endl;
	cout << clsString::upperFirstLatterOfEachWord("ali mohammed") << endl;
	cout << clsString::lowerFirstLatterOfEachWord("ali mohammed") << endl;
	string1.upperFirstLatterOfEachWord();
	cout << string1.value << endl;
	cout << clsString::upperAllString("mohammed") << endl;
	string1.lowerAllString();
	cout << string1.value << endl;
	cout << clsString::invertLetterCase('a') << endl;
	string1.invertAllLatterCase();
	cout << string1.value << endl;
	cout << clsString::countLetter("Ayman") << endl;
	cout << clsString::capitalLatter("ALI ali") << endl;
	cout << clsString::smallLatter("ali ALIaa") << endl;
	cout << clsString::countSpecificLetter("Mohammed", 'M', true) << endl;

	cout << clsString::isVowel('a') << endl;
	cout << clsString::countVowel("alia") << endl;
	vector<string>vstring;
	vstring = string2.splite(" ");

	for (string& s : vstring) {
		cout << s << endl;
	}

	string2.value = " mohammed Abo Hadhod";
	string2.TrimLeft();
	cout << string2.value << endl;

	string2.value = " mohammed Abo Hadhod";
	string2.TrimRight();
	cout << string2.value << endl;

	string2.value = " mohammed Abo Hadhod";
	string2.Trim();
	cout << string2.value << endl;

	vector<string>vString = {"ali mohammed"};
	cout << clsString::JoinString(vString, " ") << endl;
	
	cout << clsString::ReverseWordsInString("mohammed ali") << endl;

	string2.value = "mohammed ali";
	cout << string2.ReplaceWord("mohammed", "ali") << endl;

	string2.RemovePunctuations();
	cout << string2.value << endl;



}
