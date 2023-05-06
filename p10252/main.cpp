#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string a,b;//輸入用字串 
	
	while(getline(cin, a))//輸入資料 
	{
        getline(cin, b);
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        if(a.length() > b.length())
            swap(a, b);

        for(int i=0; i<a.length(); i++)
            for(int j=0; j<b.length(); j++)
            {
                if(a[i] == b[j])
                {
                    cout << a[i];
                    b.erase(0, j+1);
                    break;
                }
            }
        cout << endl;
	}
	return 0;
	
}

//#include <iostream>
//using namespace std;
//
//string a, b;
//int cnta[26], cntb[26];
//
//int main() {
//    while (cin >> a >> b){
//        for (int i = 0; i < 26; i++){
//            cnta[i] = 0;
//            cntb[i] = 0;
//        }
//        for (int i = 0; i < a.length(); i++){
//            cnta[a[i]-'a']++;
//        }
//        for (int i = 0; i < b.length(); i++){
//            cntb[b[i]-'a']++;
//        }
//        for (int i = 0; i < 26; i++){
//            for (int j = min(cnta[i], cntb[i]); j > 0; j--){
//                cout << (char)('a'+i);
//            }
//        }
//        cout << "\n";
//    }
//}
