#include<bits/stdc++.h>
using namespace std;

int main(){
    /*
    char s[10]="Hello";
    char s2[10]=" Hi";
    cout<<strlen(s)<<endl;
    cout<<strcat(s,s2)<<endl;
    cout<<s<<endl;
    cout<<strcpy(s,s2)<<endl;
    */

    /*
    char s[120]="Harmanjot Kaur";
    char s2[100]="nan";
    if (strstr(s,s2)!=NULL){
        cout<<strstr(s,s2)<<endl;
    }
    else{
        cout<<"Match not found "<<endl;
    }
    */

   /*
    char s[120]="Harmanjot Kaur";
    cout<<strchr(s,'a')<<endl;
    cout<<strrchr(s,'a');
    */


   /*
   char s[20]="hello";
   char s2[20]="Hello";
   cout<<strcmp(s,s2);
   */


    /*
    char s1[100]="235";
    char s2[100]="167.89";
    cout<<"Size of s1 and s2 is "<<sizeof(s1)<<" "<<sizeof(s2)<<endl;
    cout<<strtof(s2,NULL)<<endl<<strtol(s1,NULL,10)<<endl;
    cout<<"Size of s1 and s2 is "<<sizeof(s1)<<" "<<sizeof(s2)<<endl;
    */


    char s1[100]="x=10;y=90;z=89";
    char *token=strtok(s1,"=;");
    while(token!=NULL){
        cout<<token<<endl;
        token=strtok(NULL,"=;");
    }
    
    return 0;
}