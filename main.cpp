#include "io.hpp"
#include <iostream>
#include <algorithm>
using namespace std;


NetIO *io;
int main(){

    int id,port;
    char s[111];
    scanf("%d%d",&id,&port);
    scanf("%s",s);

    io=new NetIO(id==1?NULL:s,port);


    
    if(id==1){
        string s="hwllo";
        io->send_string(s);
    }else{
        string s;
        io->recv_string(s);
        cout<<s<<endl;
    }

    return 0;
}