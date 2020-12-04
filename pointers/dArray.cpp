#include <iostream>
using namespace std;
/*
In this code, I used dynmic memory to allocate array.
This code is to find the largest element in the array.
*/
int main()
{
    int n;
    cin >> n; //size of the array
 int *nums =NULL;
 nums=new int [n];
 for(int i =0; i<n;i++){
     cin>>nums[i];
 }
 cout<<"Nums is : "<<nums<<endl;
    int max = nums[0];
    for (int i = 0; i < n; i++)
    {
        if (nums[i] > max)
            max = nums[i];
    }
    cout << max;

    return 0;
}