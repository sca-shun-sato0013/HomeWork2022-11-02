#include <algorithm>
#include <cctype>
#include <ctime>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

int number = 0,count = 0;
 string str; 
  vector<string> words;
  words.push_back("おはようございます");
  words.push_back("こんにちは");
  words.push_back("こんばんわ");

  cout << words[0] << endl << endl;
  cout << words[1] << endl << endl;
  cout << words[2] << endl << endl;

  
  cout << "いまから単語あてゲームを開始します。" << endl;
  cout << "3つの単語の出力される順番を当ててください" << endl << endl;

  
  srand(static_cast<unsigned int>(time(0)));
  random_shuffle(words.begin(), words.end());

    
        for (vector<string>::const_iterator iter = words.begin(); iter != words.end();++iter) {
         
          cout << number+1 << "番目の単語を入力してください" << endl;
          cin >> str;
          if(*iter == str) ++count;
      
        }      
    

  if(count < 3){cout << "次も頑張ってください!\n応援しています!";}
  if(count == 3) cout << "おめでとうございます!!/nあなたはすべての単語を当てることが出ました" << endl;
}