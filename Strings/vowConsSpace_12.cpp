#include<bits/stdc++.h>
using namespace std;

int main(){
    int vowel=0,consonent=0,space=0;
    string str="Harmanjot Kaur";
    for (int i=0;str[i]!='\0';i++){
        if (str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||
        str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            vowel++;
        }
        else if(str[i]==' '){
            space++;
        }
        else{
            consonent++;
        }
    }
    cout<<vowel<<endl;
    cout<<space<<endl;
    cout<<consonent<<endl;
     
    return 0;
}