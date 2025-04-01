class Solution {
public:
    int trap(vector<int>& height) {
        // we're using plain math here
        // the diagram is a main part of this method
        // we find the sum of all buildings -> sum
        // we find the sum of max heights from left most to the max height (included) -> one
        // we find the sum of max height from right to max height (excluded) -> two
        int i=0,m_ind=0;
        int n=height.size();
        int m=0,sum=0;
        for(int i=0;i<n;++i){
            sum+=height[i];
            if(m<height[i]){
                m=height[i];
                m_ind=i;
            }
        }
        int one=0;
        m=0,i=0;
        while(i<=m_ind){ // include max height
            if(m<height[i]){
                m=height[i];
            }
            one+=m;
            i++;
        }
        int two=0;
        m=0,i=n-1;
        while(i>m_ind){
            if(m<height[i]){
                m=height[i];
            }
            two+=m;
            i--;
        }
        // cout<<one<<" "<<two<<" "<<sum;
        return one+two-sum;
    }
};