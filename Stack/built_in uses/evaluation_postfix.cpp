#include<bits/stdc++.h>
using namespace std;

int main()
{
string s;
cin>>s;
stack<int> st;
double result;
for(int i=0;i<s.size();i++)
{
char now = s[i];
if(now  == '+'||now=='-'||now=='*'||now=='/')
{
  double A = st.top();
  st.pop();
  double B = st.top() ;
  st.pop();
  result = B now A;
  st.push(result); 
}
else
{
st.push(now);

}





}






}