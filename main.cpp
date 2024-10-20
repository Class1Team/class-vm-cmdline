//
// Created by _huanhuan_ on 24-10-20.
//
#include <iostream>
#include"readini.h"
#include<thread>
#ifdef _WIN32
#include <windows.h>
#elif __linux__
#include <unistd.h>
#endif
using namespace std;
void loadstart(){
    while(true){
        #ifdef _WINDOWS_
        Sleep(1000);
        #endif
        #ifdef __linux__
        sleep(1);
        #endif
        cout<<".";
        if(start::stopload){
            break;
        }
    }

}
int main() {
    cout<<"Welcome to class virtual machine"<<endl;
    cout<<"version: 1.0"<<endl;
    cout<<"starting";
    thread load(loadstart);
    //load.detach();
    load.join();
    return 0;
}
