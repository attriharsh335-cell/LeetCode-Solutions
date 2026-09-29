class Solution {
public:
    void merge(vector<int>& a,int low,int mid,int high){
        int i=low,j=mid+1;
        vector<int> temp;
            while(i<=mid && j<=high){
                if(a[i]<a[j]){
                    temp.push_back(a[i++]);
                }
                else{
                     temp.push_back(a[j++]);
                }
            }
            while(i<=mid){
                  temp.push_back(a[i++]);
            }
            while(j<=high){
                  temp.push_back(a[j++]);
            }
            for(int k=low;k<=high;k++){
                a[k]=temp[k-low];
            }

    }


    void mergesort(vector<int>& a,int low,int high){
        if(low<high){
            int mid=low+(high-low)/2;
            mergesort(a,low,mid);
            mergesort(a,mid+1,high);
            merge(a,low,mid,high);
        }
    }
    vector<int> sortArray(vector<int>& a) {
        int n=a.size();
        mergesort(a,0,n-1);
        return a;
    }
};