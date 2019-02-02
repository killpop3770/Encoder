					//Please do not judge strictly :3
					//It's my first work - encoder Caesar cipher.

#include <string>
#include <iostream>
#include <fstream>
using namespace std;

int main(){	
	string str1 = "";
	string str2 = "";
	string str3 = "abcdefghijklmnopqrstuvwxyz";
	int n;
	
	


cout << "                                               __                      \n";
cout << "                                              /  |                     \n";
cout << "  ______   _______    _______   ______    ____$$ |  ______    ______   \n";
cout << " /      \  /       \  /        | /      \  /     $$ | /      \  /      \  \n";
cout << "/$$$$$$  |$$$$$$$  |/$$$$$$$/ /$$$$$$  |/$$$$$$$ |/$$$$$$  |/$$$$$$  | \n";
cout << "$$    $$ |$$ |  $$ |$$ |      $$ |  $$ |$$ |  $$ |$$    $$ |$$ |  $$/  \n";
cout << "$$$$$$$$/ $$ |  $$ |$$ \_____ $$ \_____$$|$$ \__ $$ |$$$$$$$$/ $$ |       \n";
cout << "$$       |$$ |  $$ |$$       |$$    $$/ $$    $$ |$$       |$$ |       \n";
cout << " $$$$$$$/ $$/   $$/  $$$$$$$/  $$$$$$/   $$$$$$$/  $$$$$$$/ $$/        \n";
                                                                      
cout << "\n\n#######################################################################\n" <<endl;                                                                     
                                                                                                                                             

	
	cout << "Enter the sentence: \n";
	getline(cin, str1);								
	cout << "Enter the key: \n";
	cin >> n;
	
	for(int i=0; i<str1.length(); i++)
	{
		str1[i] = tolower(str1[i]);
		for(int j=0; j<str3.length(); j++)
		{
			if(str1[i]==str3[j])
			{
				int c = j+n;
				if(c<25)
				{
					int key0 = 97+c;
					str2[i] = key0;
				}
				else
				{
					int key1 = 97+(c-25);
					str2[i] += key1;
				}
			}
		}
	}
	
	string exit = "";
	for(int i=0; i<str1.length(); i++)
	{
		 exit[i]=str2[i];
		 cout << exit[i];
	}
	cout << "\n";
		
//	cout << "The recording was made to a file: ";
//	
//    ofstream fout("encode_text.txt");
//	fout << exit;
//    fout.close(); 

	system("pause");
	return 0;
}
