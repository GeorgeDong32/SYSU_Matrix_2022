#include<string>
using namespace std;


class FriendsFinder3{
    public:
    string persons[10];
    string friends[10][10];
    FriendsFinder3(string persons[],string friends[][10]){
        for(int i=0;i<10;i++){
            this->persons[i]=persons[i];
            for(int j=0;j<10;j++){
                this->friends[i][j]=friends[i][j];
            }
        }
    }
    void operator()(){
        string output[100];
        int cnt=0;
        for(int i=0;i<10;i++){//for each person
            for(int j=0;j<10;j++){// for each of his friend
                int mark=1;
                for(int k=0;k<100;k++){// for each of friend other people
                    if(k/10==i)continue;
                    if(friends[k/10][k%10]==friends[i][j]){
                        mark=0;
                        break;
                    }
                }
                if(mark){//record it
                    output[cnt]=friends[i][j];
                    cnt++;
                }
            }
        }
        //bubble sort
        for(int i=0;i<cnt;i++){
            for(int j=0;j<cnt-i-1;j++){
                if(output[j]>output[j+1]){
                    string t=output[j];
                    output[j]=output[j+1];
                    output[j+1]=t;
                }
            }
        }
        //output
        for(int i=0;i<cnt;i++){
            cout<<output[i]<<" ";
        }
    }
};