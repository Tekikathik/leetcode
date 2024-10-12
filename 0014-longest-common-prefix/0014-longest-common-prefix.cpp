struct Node{
    char data;
    struct Node* next;
    Node(char val){
        data=val;
        next=NULL;
    }
};
class Solution {
public:
    static bool cmp(string &s1,string &s2){
        return s1.size() < s2.size();
    }
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size()==0) return "";
        if (strs.size()==1) return strs[0];
        sort(strs.begin(),strs.end(),cmp);
        int  i=0;
        Node * head=NULL;
        while (i<strs[0].size()){
            Node * newnode= new Node(strs[0][i]);
            if (head==NULL) {
                head=newnode;
            }
            else{
                Node *tail=head;
                while (tail->next!=NULL){
                    tail=tail->next;
                }
                tail->next=newnode;
            }
            i++;
        }
        for (i=1;i<strs.size();i++){
            int c=0;
            if (head==NULL) return "";
            Node * temp=head->next;
            Node * prev=head;
            if (head->data != strs[i][0]){
                return "";
            }
            for(int j=1;i<strs.size() && temp != NULL;j++){
                if (strs[i][j] == temp->data){
                    temp=temp->next;
                    prev=prev->next;
                }
                else {
                    c=1;
                    break;
                }
                // temp=temp->next;
            }
            if (c==1){
                prev->next=NULL;
            }
        }
        string s="";
        if (head==NULL) return "";
        while ( head != NULL){
            s+=head->data;
            head=head->next;
        }
        return s;
    }
};