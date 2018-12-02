#include <iostream>

using namespace std;

int main(){

int a=0,max=0;
do{
    cin>>a;

    if(max<a){
        max=a;
    }
}while (a !=0);
cout<<max;

}
