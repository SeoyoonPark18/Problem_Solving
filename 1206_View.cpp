#include<iostream>
#include<algorithm>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T = 10;
	int n;
    int height;
    int arr[1000];
    
	for(test_case = 1; test_case <= T; ++test_case)
	{
		cin>>n;
        for(int i=0; i<n; i++){
        	cin>>height;
            arr[i] = height;
        }
    	int sum = 0;
        for(int i=2; i<=n-3; i++){
        	int left = max(arr[i-2], arr[i-1]);
            int right = max(arr[i+1], arr[i+2]);
            int maxV = max(left, right);
            if((arr[i] - maxV) > 0){
            	sum += arr[i] - maxV;
            }
        }
        cout<<"#"<<test_case<<" "<<sum<<"\n";
	}
	return 0;
}
