#include<bits/stdc++.h>
using namespace std;
list<int> lis;
int main(){
    int n;
    list<int>::iterator it=lis.end();
    cin>>n;
    while(n--){
        int typ;
        cin>>typ;
        if(typ==0){
            int val;
            cin>>val;

            //else
            // lis.push_front(val);
            //list<int>::iterator insert_it=lis.begin();
            //advance(insert_it,distance(lis.begin(), it));
            lis.insert(it, val);

            advance(it,-1);

            // cout<<distance(lis.begin(), it)<<endl;
            //it=lis.begin();
            /*for(list<int>::iterator i=lis.begin(); i!=lis.end(); i++)
            {
                if(i==it)
                    cout<<"It blasts:: ";
                cout << *i <<endl;
            }*/
        }
        if(typ==1){
            int mov;
            cin>>mov;

            if(mov>0)
            {
                if(distance(lis.begin(), it)+mov>distance(lis.begin(),lis.end()))
                    it=lis.end();
                else
                    advance(it,mov);
            }
            else{
                if(distance(lis.end(), it)-mov>distance(lis.begin(),lis.end()))
                    it=lis.begin();
                else
                    advance(it,mov);
            }
            /*for(list<int>::iterator i=lis.begin(); i!=lis.end(); i++)
            {
                if(i==it)
                    cout<<"It blasts:: ";
                cout << *i <<endl;
            }*/

        }
        if(typ==2){
            list<int>::iterator delit=it;

            advance(it,1);
            lis.erase(delit);

            for(list<int>::iterator i=lis.begin(); i!=lis.end(); i++){
                //if(i==it)
                //    cout<<"It blasts:: ";
                cout << *i <<endl;
            }
        }
    }
}
