#include<iostream>
using namespace std;
int main(){
    int arr[2][3][3] =  {{1,2,3,4,5,6,7,8,9},{10,3,20,30,40,50,3,70,80}};
    int cha[9] = {0};
    int flag = 0;
    for(int fr=0;fr<3;fr++){
        for(int fc=0;fc<3;fc++){
            for(int i=0;i<3;i++){
                flag = 0;
                for(int j=0;j<3;j++){
                    if(arr[1][i][j] == arr[0][fr][fc] && cha[i*3+j]==0 ){
                        cha[i*3+j] = 1;
                        arr[1][i][j]++;
                        flag = 1;
                    }
                }
            }
            if(flag == 1)
                arr[0][fr][fc]++;
        }
    }

    for(int i=0;i<9;i++){
        cout<<cha[i]<<"\t";
    }
    cout<<"\n";

    for(int i=0;i<2;i++) {
        for(int j=0;j<3;j++) {
            for(int k=0;k<3;k++) {
                printf("%d ",arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    
    return 0;
}