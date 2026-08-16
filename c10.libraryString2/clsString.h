#pragma once
#include<iostream>
#include<vector>
#include<string>
using namespace std;
class clsString
{
	

private:
	string _value;
public:
	clsString() {
		_value = "";
	}
	clsString(string value) {
		_value = value;
	}
	void setValue(string value) {
		_value = value;
	}
	string getValue() {
		return _value;
	}
	__declspec(property(get = getValue, put = setValue)) string value;


	static short length(string s1) {
		return s1.length();
	}
	short length() {
		return _value.length();
	}

	static short countValue(string s1) {
		string sword;
		short count = 0;
		string delim = " ";
		short pos = 0;
		while ((pos = s1.find(delim)) != std::string::npos) {
			sword = s1.substr(0, pos);
			if (sword != " ") {
				count++;
			}
			s1.erase(0, pos + delim.length());
		}

		if (s1 != " ") {
			count++;

		}
		return count;

	}
	short countValue() {
		return countValue(_value);
	}

	static string upperFirstLatterOfEachWord(string s1) {
		bool isFirstLatter = true;
		for (int i = 0; i < s1.length(); i++) {
			if (s1[i] != ' ' && isFirstLatter) {
				s1[i] = toupper(s1[i]);
			}
			isFirstLatter = (s1[i] == ' '?true:false);
		}
		return s1;
	}
	void upperFirstLatterOfEachWord() {
		_value= upperFirstLatterOfEachWord(_value);
	}
	static string lowerFirstLatterOfEachWord(string s1) {
		bool isLowerLatter = true;
		for (int i = 0; i < s1.length(); i++) {
			if (s1[i] != ' ' && isLowerLatter) {
				s1[i] = tolower(s1[i]);
			}
			isLowerLatter = (s1[i] == ' ' ? true : false);
		}
		return s1;
	}
	void lowerFirstLatterOfEachWord() {
		_value = lowerFirstLatterOfEachWord(_value);
	}
	static string upperAllString(string s1) {
		for (int i = 0; i < s1.length(); i++) {
			s1[i] = toupper(s1[i]);
		}
		return s1;
	}
	void upperAllString() {
		_value = upperAllString(_value);
	}
	static string lowerAllString(string s1) {
		for (int i = 0; i < s1.length(); i++) {
			s1[i] = tolower(s1[i]);
		}
		return s1;
	}
	void lowerAllString() {
		_value = lowerAllString(_value);
	}
	static char invertLetterCase(char c) {
		return (isupper(c) ? tolower(c) : toupper(c));
	}
	static string invertAllLatterCase(string s1) {
		for (int i = 0; i < s1.length(); i++) {
			s1[i] = invertLetterCase(s1[i]);
		}
		return s1;
	}
	void invertAllLatterCase() {
		_value = invertAllLatterCase(_value);
	}
	enum enwhatToCount {
		capitalized=1,smallest=2,all=3
	};
	static short countLetter(string s1, enwhatToCount whatToCount = enwhatToCount::all) {
		if (whatToCount == enwhatToCount::all) {
			return s1.length();

		}
		short count = 0;
		for (int i = 0; i < s1.length(); i++) {
			if (whatToCount == enwhatToCount::capitalized && isupper(s1[i])) {
				count++;
			}
			if (whatToCount == enwhatToCount::smallest && islower(s1[i])) {
				count++;
			}
		}
		return count;
	}
	static short capitalLatter(string s1) {
		int count = 0;
		for (int i = 0; i < s1.length(); i++) {
			if (isupper(s1[i])) {
				count++;
			}
		}
		return count;
	}
	short capitalLatter() {
		return capitalLatter(_value);
	}
	static short smallLatter(string s1) {
		int count = 0;
		for (int i = 0; i < s1.length(); i++) {
			if (islower(s1[i])) {
				count++;
			}
		}
		return count;
	}
	short smallLatter() {
		return smallLatter(_value);
	}
	static short countSpecificLetter(string s1, char latter, bool matchCase = true) {
		short count = 0;
		for (int i = 0; i < s1.length(); i++) {
			if (matchCase) {
				if (s1[i] == latter) {
					count++;
				}
			}
	        else {

				if (tolower(s1[i]) == tolower(s1[latter])) 
						count++;
					
				
			}
		}
		return count;
	}
	short countSpecificLetter(char latter,bool matchCase) {
		return countSpecificLetter(_value,latter, matchCase);
	}
	static bool isVowel(char c) {
		c = tolower(c);
		return (c == 'a' || c == 'e' || c == 'o' || c == 'u' || c == 'i');
	
	}
	static short countVowel(string s1) {
		short count = 0;
		for (int i = 0; i < s1.length(); i++) {
			if (isVowel(s1[i]))
				count++;
		}
		return count;
	}
	short countVowel() {
		return countVowel(_value);
	}

	static vector<string>splite(string s1, string delim) {
		vector<string>vstring;
		string sword;
		short pos = 0;
		while ((pos = s1.find(delim)) != std::string::npos) {
			sword = s1.substr(0, pos);
			if (sword != " ") {
				vstring.push_back(sword);
			}
			s1.erase(0, pos + delim.length());

		}
		if (s1 != " ") {
			vstring.push_back(s1);
		}
		return vstring;
			
		}
	vector<string>splite(string delim) {
		return splite(_value, delim);
	}


	static string TrimLeft(string s1)
	{


		for (short i = 0; i < s1.length(); i++)
		{
			if (s1[i] != ' ')
			{
				return s1.substr(i, s1.length() - i);
			}
		}
		return "";
	}
	void TrimLeft() {
		_value = TrimLeft(_value);

	}
	static string TrimRight(string s1)
	{


		for (short i = s1.length() - 1; i >= 0; i--)
		{
			if (s1[i] != ' ')
			{
				return s1.substr(0, i + 1);
			}
		}
		return "";
	}

	void TrimRight()
	{
		_value = TrimRight(_value);
	}

	static string Trim(string s1)
	{
		return (TrimLeft(TrimRight(s1)));

	}

	void Trim()
	{
		_value = Trim(_value);
	}
	static string JoinString(vector<string> vString, string delim)
	{

		string S1 = "";

		for (string& s : vString)
		{
			S1 = S1 + s + delim;
		}

		return S1.substr(0, S1.length() - delim.length());


	}


	static string JoinString(string arrString[], short Length, string Delim)
	{

		string S1 = "";

		for (short i = 0; i < Length; i++)
		{
			S1 = S1 + arrString[i] + Delim;
		}

		return S1.substr(0, S1.length() - Delim.length());

	}


	static string ReverseWordsInString(string S1)
	{

		vector<string> vString;
		string S2 = "";

		vString = splite(S1, " ");


		vector<string>::iterator iter = vString.end();

		while (iter != vString.begin())
		{

			--iter;

			S2 += *iter + " ";

		}

		S2 = S2.substr(0, S2.length() - 1);

		return S2;
	}
		void ReverseWordsInString()
		{
			_value = ReverseWordsInString(_value);
		
	}

		static string ReplaceWord(string S1, string StringToReplace, string sRepalceTo, bool MatchCase = true)
		{

			vector<string> vString = splite(S1, " ");

			for (string& s : vString)
			{

				if (MatchCase)
				{
					if (s == StringToReplace)
					{
						s = sRepalceTo;
					}

				}
				else
				{
					if (lowerAllString(s) == lowerAllString(StringToReplace))
					{
						s = sRepalceTo;
					}

				}

			}

			return JoinString(vString, " ");
		}

		string ReplaceWord(string StringToReplace, string sRepalceTo)
		{
			return ReplaceWord(_value, StringToReplace, sRepalceTo);
		}


		static string RemovePunctuations(string S1)
		{

			string S2 = "";

			for (short i = 0; i < S1.length(); i++)
			{
				if (!ispunct(S1[i]))
				{
					S2 += S1[i];
				}
			}

			return S2;

		}

		void RemovePunctuations()
		{
			_value = RemovePunctuations(_value);
		}







	






};

