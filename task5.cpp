#include <iostream>
#include <string.h> //for using strlen()
#include <algorithm> // for using remove()

using namespace std;

void removeVowels(string &text)
{
	char chars[] = "aeiouy";
    for (unsigned int i = 0; i < strlen(chars); ++i)
    {
		text.erase( remove( text.begin(), text.end(), chars[i] ), text.end() );
	}
    cout << text;
}
// the result of searching from stackoverflow.com :)
int main() {
	string sentence = "The cat fell off the three.";
    cout << sentence << endl;
    removeVowels(sentence);
    cout << endl;

	return 0;
}
