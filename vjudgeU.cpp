#include<bits/stdc++.h>
using namespace std;
map<string, int> mmap;
int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        int typ;
        scanf("%d",&typ);
        if(typ==0){
            char key[21];int val;
            scanf("%s %d",key,&val);
            map<string,int>::iterator it;
            it = mmap.find(key);
            if (it != mmap.end())
                it->second=val;
            else
                mmap.insert(make_pair(key,val));

        }
        else if(typ==1){
            char key[21];
            scanf("%s",key);

            map<string,int>::iterator it;
            it = mmap.find(key);
            if (it != mmap.end())
                cout<<it->second<<endl;
            else
                cout<<"0"<<endl;
        }
        else if(typ==2){
            char key[21];
            scanf("%s",key);
            map<string,int>::iterator it;
            it = mmap.find(key);
            if (it != mmap.end())
                mmap.erase(it);
        }
        else if(typ==3){
            char lc[24],rc[24];
            int cnt=1;
            //cin>>l>>r;
            scanf("%s %s",lc,rc);
            string l(lc),r(rc);
            map<string,int>::iterator itr;
            map<string,int>::iterator itlow,itup;
            itlow=mmap.lower_bound(l);
            itup=mmap.upper_bound(r);

            for(itr=itlow;itr!=itup;++itr){
                // if(r.compare(itr->first)<0)
                //    break;
                //if(l.compare(itr->first) <= 0 && r.compare(itr->first)>=0){
                    //cout<<itr->first<<" "<<itr->second<<endl;
                printf("%s %d\n",itr->first.c_str(),itr->second);

                cnt++;
                    if(cnt==1000000)
                        break;
                }


            }
        }
    }

