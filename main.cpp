#include <iostream>

using namespace std;
void swap (int [][3],int, int);
void sort (int [][3],int);
void sort_same (int [][3],int);
int main()
{
    int numbers;
    cin>>numbers;
    int List[numbers][3];

    for (int i=0; i<numbers; i++) {
        List[i][0] = i;
        cin>>List[i][1];
        cin>>List[i][2];
    }
    sort(List, numbers);
    sort_same(List, numbers);

    cout<<List[0][1];
    for(int i=1; i<numbers; i++){
        cout<<"\n"<<List[i][1];
    }

    return 0;
}

void sort(int List[][3], int numbers)
{
    int i, j, Max, temp, Front, Back ;
    for(int i = 0; i < numbers-1; i++){
        Max = i;

        for(int j = i+1; j < numbers; j++){
            if(List[j][2] > List[Max][2]){
                Max = j;
            }//end if
        }//end for
      swap(List,i,Max);


    }//end for
}
void swap(int List[][3],int a ,int b){
    int temp[3];
    temp[0] = List[a][0];
    temp[1] = List[a][1];
    temp[2] = List[a][2];

    List[a][0] = List[b][0];
    List[a][1] = List[b][1];
    List[a][2] = List[b][2];

    List[b][0] = temp[0];
    List[b][1] = temp[1];
    List[b][2] = temp[2];
}
void sort_same(int List[][3], int numbers)
{
    int i, j, Min ;
    for(int i = 0; i < numbers-1; i++){
        Min = i;
        for(int j = i+1; j < numbers; j++){
            if( (List[j][0] < List[Min][0])&&(List[j][2] == List[Min][2]) ){
                Min = j;
            }//end if
        }//end for
      swap(List,i,Min);


    }//end for
}
