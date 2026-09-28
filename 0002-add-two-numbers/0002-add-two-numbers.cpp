/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    string add_numbers(string s1, string s2){
        string res;
        int n1=s1.size(),n2=s2.size();
        int v=n1>n2?n1:n2;
        int v1=0,hi=0,v2=0;
        for(int i=0;i<v;i++){
            v1=(i<n1)?(s1[n1-i-1]-'0'):0;
            v2=(i<n2)?(s2[n2-i-1]-'0'):0;
           // cout<<v1<<" "<<v2;
            int sum=v1+v2+hi;
            int rem=sum%10;
            res+=(rem+'0');
            hi=sum/10;
            
        }
        if(hi>0) res+=(hi+'0');
        //reverse(res.begin(),res.end());
        return res;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        string s1,s2;
        while(l1!=NULL){
            s1+=(l1->val)+'0';
            // cout<<l1->val<<" ";
            l1=l1->next;
        }
        while(l2!=NULL){
            s2+=(l2->val)+'0';
            l2=l2->next;
        }
        reverse(s1.begin(),s1.end());
        reverse(s2.begin(),s2.end());
        // cout<<s1<<" "<<s2;
        // 342 + 465 
        // long long sum=v1+v2; 
        string s=add_numbers(s1,s2);
        //cout<<endl;
        //cout<<s<<endl;
        // cout<<s;
        vector<char>arr;
        for(int i=0;i<s.size();i++) arr.push_back(s[i]);
        ListNode* head= new ListNode(arr[0]-'0');
        ListNode* cur=head;
        for(int i=1;i<arr.size();i++){
            cur->next=new ListNode(arr[i]-'0');
            cur=cur->next;
        }
        return head;
    }
};