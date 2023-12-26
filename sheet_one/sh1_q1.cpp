#include <iostream>
using namespace std;

void freq_v1(int a[], int n)
{
    int freq[1001] = {};

    for (int i = 0; i < n; i++)
    {
        freq[a[i]]++;
    }

    for (int i = 0; i <= 1000; i++)
    {
        if (freq[i])

            cout << "The element " << i << " exists " << freq[i] << " time" << endl;
    }
}

int main()
{
    int n = 10;
    int a[] = { 3, 2, 2, 6, 5, 5, 9, 9, 3, 1 };

    freq_v1(a, n);
}
                                                    //another answer
/*
* int main (){
  int arr[]={3,5,5,6,3,7,5,6};
   int empty[]={};
   for (int i=0;i<8;i++){
    if (empty[i]!=1){
        int count =1;
        for (int j=i+1;j<8;j++){
            if (arr[i]==arr[j]){
                count++;
                empty[j]=1;
            }
        }
        cout << "The Element "<< arr[i] << " exists " <<count << " Time"<<endl;
    }
   }
}
*/