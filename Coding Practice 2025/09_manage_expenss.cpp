// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int totalIncome = 0;
//     int totalExpenss = 0;
//     cin>>totalIncome;
//     cin.ignore();

//     unordered_map <string, int> mp;
//     vector<string> v;
//     while(true){
//         int exp;
//         string cat;

//         getline(cin, cat);
//         if(cat == "done"){
//             break;
//         }
//         cin>>exp;
//         cin.ignore();

//         if(mp.find(cat) == mp.end()){
//             v.push_back(cat);
//         }
//         mp[cat] += exp;
//         totalExpenss += exp;
//     }
//     cout<<totalIncome<<endl;
//     cout<<totalExpenss<<endl;
//     cout<<(totalIncome-totalExpenss)<<endl;
//     for(string s: v){
//         cout<<s<<":"<<mp[s]<<endl;
//     }
//     return 0;
// }














#include <bits/stdc++.h>
using namespace std;

int main() 
{
  string input;
  getline(cin,input);
  
  stringstream ss(input);
  string token;
  vector<string>tokens;
  while(getline(ss,token,',')) {
    tokens.push_back(token);
  }
  
  int total_money = stoi(tokens[0]);
  vector<pair<string,int>>lists;
  int i = 1;
  int total_expense = 0;
  int total_saving  = 0;

  while(i < tokens.size()) {
    string itemName = tokens[i];
    i++;
    if(tokens[i] != "done") {
  
    int item_price = stoi(tokens[i]);
    total_expense += item_price;
    lists.push_back({itemName,item_price});
    }
    i++;
    if(tokens[i] == "done") {
      break;
    }
  }
  
  total_saving = total_money-total_expense;
  
  cout<<"Total Income: "<<total_money<<endl;
  cout<<"Total Expense: "<<total_expense<<endl;
  cout<<"Total Savings: "<<total_saving<<endl;
  cout<<"Category:"<<endl;
  
  for(auto &ele:lists) {
    cout<<ele.first<<": "<<ele.second<<endl;
  }
  
   
    return 0;
}