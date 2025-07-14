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
    int getDecimalValue(ListNode* head) {
        // take a string, concatenate all the head values to the string
        string s="";
        ListNode* temp=head;
        while(temp!=NULL){
            s.append(to_string(temp->val));
            // cout<<s<<endl;
            temp=temp->next;
        }
        int len=s.length();
        int sum=0,ct=0;
        for(int i=len-1;i>=0 && ct<len;--i){
            int x=s[i]-'0';
            sum+=(x*(pow(2,ct)));
            ct++;
        }
        return sum;
    }
};