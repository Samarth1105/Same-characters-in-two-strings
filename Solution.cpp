class Solution{
    public:
    int sameChar(string A, string B)
    {
        int n=A.size();
        int count=0;
        int i=0,j=0;
        while(i<n && j<n){
            if(tolower(A[i])==tolower(B[j])) {
                count++;
            }
            i++;j++;
        }
        return count;
    }
};
