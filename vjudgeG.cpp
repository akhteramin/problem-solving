#include<bits/stdc++.h>
using namespace std;
stack<int> st;

int main(){
    int sum=0;
    string line;
    while (getline(cin, line))
    {

        int pivot=0;
        for(int i=0;i<line.length();i++){
            if(line[i]==' '){
                string a=line.substr(pivot,i-pivot);
                pivot=i+1;

                if(a=="+" || a=="-" || a=="*" || a=="/"){
                    int val1,val2;
                    val1=st.top();
                    st.pop();
                    val2=st.top();
                    st.pop();
                    if(a=="+")
                        st.push(val1+val2);
                    if(a=="-")
                        st.push(val2-val1);
                    if(a=="*")
                        st.push(val2*val1);
                    if(a=="/")
                        st.push(val2/val1);
                }
                else
                {
                    stringstream geek(a);
                    int x = 0;
                    geek >> x;
                    st.push(x);
                }
            }
        }
        char a= line[line.length()-1];
        if(a=='+' || a=='-' || a=='*' || a=='/'){
            int val1,val2;
            val1=st.top();
            st.pop();
            val2=st.top();
            st.pop();
            if(a=='+')
                st.push(val1+val2);
            if(a=='-')
                st.push(val2-val1);
            if(a=='*')
                st.push(val2*val1);
            if(a=='/')
                st.push(val2/val1);
        }
        cout<<st.top()<<endl;
        break;

    }


}
