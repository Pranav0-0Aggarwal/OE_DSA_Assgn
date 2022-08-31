#include<iostream>
#include<iterator>
using namespace std;

string::iterator it;

bool isEmpty(string s){
    if(s.begin()==s.end()){
        return true;
    }
    return false;
}
void push(string& s, string a){
    s=a + s;
}
void s_pop(string& s){
    string p;
    for(it=s.begin()+1;it<s.end();it++){
        p=p+ *it;
    }
    s=p;
}
void peek(string s){
    if(isEmpty(s)==true){
        cout<<" Stack is empty"<<"\n";
    }
    else{
        cout<<s[0]<<"\n";
    }
}
void display(string s){
    for(it=s.begin();it<s.end();it++){
        cout<<(*it);
    }
    cout<<"\n";
}
int main(){
    string s;
    string stack;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i] == '{'){
            push(stack,"{");
        }
        else{
            s_pop(stack);
        }
    }
    if(stack=="\0"){
        cout<<"Balanced"<<"\n";
    }
    else{
        cout<<"Unbalanced"<<"\n";
    }

    return 0;
}
