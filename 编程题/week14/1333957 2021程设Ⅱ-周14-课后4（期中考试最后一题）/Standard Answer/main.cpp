#include<iostream>
using namespace std;
class Judge{
	public:
		int con_idx[20],con_val[20];
		int N;
		int valid(int arr[]){
			for(int i=0;i<N;i++){
				if(arr[i]){//第i个正在说真话 
					if(arr[con_idx[i]]!=con_val[i]){//i说con_idx[i]取值为con_val[i]，但实际不是，所以不逻辑自治 
						return 0;
					}
				}else{//第i个正在说假话 
					if(arr[con_idx[i]]==con_val[i]){//i撒谎说con_idx[i]取值为con_val[i]，实际真的是，所以不逻辑自治 
						return 0;
					}
				} 
			}
			return 1;
		}
};

int main(){
	Judge jud;
	cin>>jud.N;
	for(int i=0;i<jud.N;i++){
		cin>>jud.con_idx[i]>>jud.con_val[i];
	}
	
	int arr[20],res=0;
	for(int i=0;i< (1<<jud.N);i++){
		for(int j=0;j<jud.N;j++){
			arr[jud.N-j-1]=(i>>j)&1;
		}
		res+=jud.valid(arr);
		if(jud.valid(arr)){
			for(int k=0;k<jud.N;k++)cout<<arr[k]<<" ";
			return 0;
		}

	}
	// cout<<0<<endl;
}