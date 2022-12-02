#include<bits/stdc++.h>

#define PI 3.14159265

using namespace std;
int main(){
    int test;
    //cin>>test;
    scanf("%d",&test);
    for(int z=1;z<=test;z++){
        /*AB left line, BC mid horizontal line, CD right line*/
        double AC,BD,OE,AB,BC,CE,BE,CD;
        //cin>>AC>>BD>>OE;
        scanf("%lf %lf %lf",&AC,&BD,&OE);
        double minTH=0,highTH=min(AC,BD),midTH;
        //cos ( param * PI / 180.0 )
        while(highTH>minTH){
            midTH=(highTH+minTH)/2.0;
            BC=midTH;
            AB=sqrt(pow(AC,2)-pow(midTH,2));
            CD=sqrt(pow(BD,2)-pow(midTH,2));
            //BE=OE/tan(midTH*PI/180.0);
            //double beta=AB/BC;
            //CE=OE/beta;
            double tempOE;
            tempOE=((1.0/AB)+(1.0/CD));
            tempOE= (1.0/tempOE);
            if(abs(tempOE-OE)<0.0000001)
                break;
            if(tempOE<OE){
                highTH=midTH;
            }
            else if(tempOE>=OE){
                minTH=midTH;
            }
        }
        //cout<<BC<<endl;
        printf("Case %d: %.10lf\n",z,minTH);
    }
}
