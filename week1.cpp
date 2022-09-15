#include <iostream>

using namespace std;
void print1(int *ptr, int rows){
    int i;
    for( i=0;i<rows;i++)
    {
        cout<<ptr+i<<endl;
        cout<<*(ptr+i)<<endl;
    }

}

int main()
{
    int  one[][5] = {0,1,2,3,4,
                        5,6,7,8,9};
    print1(one[0],10);



    cout << "Hello world!" << endl;
    return 0;
}

