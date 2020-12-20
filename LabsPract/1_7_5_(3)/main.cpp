#include <iostream>

using namespace std;

int main()
{
    int octets[4];
    int i=0;

    while(i<4)
    {
        cin>>octets[i];
        if(octets[i]>=0 && octets[i]<=255)
            i++;    //If it is incorrect just ask until it is a valid value
    }

    cout << octets[0]<< "."<<octets[1]<< "."<<octets[2]<< "."<<octets[3]<<endl;
    return 0;
}
