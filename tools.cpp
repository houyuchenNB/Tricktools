#include <bits/stdc++.h>
#include <windows.h>
#include <string>
#include <windows.h>
using namespace std;
int main(){
    char service='-1';
    
    
    while(1){
    	restart:system("cls");
		cout<<"This app needs to be started in UAC mode!\n";
		cout<<"-------------Welcome to Tools!------------";
    	begin:cout<<"\n\nShutdown Tasks:1\nDelete Files:2\nShut Down:3\nMemory boom:4\nBlue screen:5\nClear Screen:c\nExit:0\n\nInput:";
    	cin>>service;
    	
        if(service=='1'){
			string f1,f2,f3;
            cout<<"\n\ninput program(*.exe)/retry:r\nExamples:services.exe/explorer.exe\n\nInput:";
            cin>>f2;
            char ifr=f2.at(0);
            if(ifr=='r'&& f2.length()==1)	goto restart;
            f1="taskkill /im ";
            f3=" /t /f";
            string f12=f1+f2;
            string ftotal=f12+f3;
            system(ftotal.c_str());
            Sleep(1000);
			goto begin;
        }
        
        else if(service=='2'){
        	ser2:cout<<"\n\nfolders:1/drivers:2/retry:r\ninput:";
        	char fd;
        	cin>>fd;
            if(fd=='r')	goto restart;
        	if(fd=='1'){
        		cout<<"\n\npaths(C:\\users\\Administrator\\desktop(Uppercase driver letter))/retry:r\ninput:";
        		string f1="del ";
        		string f2;
        		string f3=" /F /Q";
        		cin>>f2;
        		char ifr=f2.at(0);
        	    if(ifr=='r' && f2.length()==1)	goto restart;
        		string ftotal=f1+f2+f3;
        		system(ftotal.c_str());
        		Sleep(1000);
				goto begin;
			}
			if(fd=='2'){
				cout<<"\n\ndrivers(C/D/E/F(Uppercase driver letter))/retry:r\ninput:";
				string f1="del ";
        		string f2;
        		string f3=": /F /S /Q";
        		cin>>f2;
        		char ifr=f2.at(0);
        	    if(ifr=='r' && f2.length()==1)	goto restart;
        		string ftotal=f1+f2+f3;
        		system(ftotal.c_str());
        		Sleep(1000);
				goto begin;
			}
			else	goto ser2;
		}
		
		else if(service=='3'){
			ser3:cout<<"\n\nAre you sure?Yes:1/No:r\nInput:";
			string shut;
			cin>>shut;
			char ifr=shut.at(0);
			if(ifr=='r' && shut.length()==1){
				system("cls");
				goto restart;
			}
			else if(ifr=='1' && shut.length()==1){
				system("shutdown /p");
			}
			else{
				goto ser3;
			}
		}
		
		else if(service=='4'){
			string stra;
			cout<<"\n\nAre you sure? Yes:1/no:anything\n\nInput:";
			cin>>stra;
			if(stra.length()==1 || stra.at(0)=='1'){
				for(;;)
				malloc(10000000000);
			}
			else	goto restart;
		}
		
		else if(service=='5'){
			string stra;
			cout<<"\n\nAre you sure? Yes:1/no:anything\n\nInput:";
			cin>>stra;
			if(stra.length()==1 || stra.at(0)=='1'){
				system("taskkill /im services.exe /f /t");
			}
			else	goto restart;
		}
		
		else if(service=='c'){
			system("cls");
			goto restart;
		}
		
        else if(service=='0')  return 0;
        
        else{
        	cout<<"Command error, try again.";
        	Sleep(1000);
        	system("cls");
			goto begin;
		}
    }
}
