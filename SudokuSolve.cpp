#include <bits/stdc++.h>
using namespace std;

vector <int> a[9][9];
vector <int> d[9][9];
int b[9][9];
int c[9][9];

void copyatod(){
    int i,j,k;
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            d[i][j].clear();
        }
    }
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            for(k=0;k<a[i][j].size();k++){
                d[i][j].push_back(a[i][j][k]);
            }
        }
    }
}

void copydtoa(){
    int i,j,k;
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            a[i][j].clear();
        }
    }
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            for(k=0;k<d[i][j].size();k++){
                a[i][j].push_back(d[i][j][k]);
            }
        }
    }
}

void copybtoc(){
    int i,j;
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            c[i][j]=b[i][j];
        }
    }
}

void copyctob(){
    int i,j;
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            b[i][j]=c[i][j];
        }
    }
}

void rowcol(int i,int j,int k){
    int q,r;
    a[i][j].clear();
    for(q=0;q<9;q++){
        for(r=0;r<a[i][q].size();r++){
            if(a[i][q][r]==k){
                a[i][q].erase(a[i][q].begin()+r);
            }
        }
        for(r=0;r<a[q][j].size();r++){
            if(a[q][j][r]==k){
                a[q][j].erase(a[q][j].begin()+r);
            }
        }
    }
}

void zone1(int k){
    int i,j,l;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(l=0;l<a[i][j].size();l++){
                if(a[i][j][l]==k){
                    a[i][j].erase(a[i][j].begin()+l);
                }
            }
        }
    }
}
void zone2(int k){
    int i,j,l;
    for(i=0;i<3;i++){
        for(j=3;j<6;j++){
            for(l=0;l<a[i][j].size();l++){
                if(a[i][j][l]==k){
                    a[i][j].erase(a[i][j].begin()+l);
                }
            }
        }
    }
}
void zone3(int k){
    int i,j,l;
    for(i=0;i<3;i++){
        for(j=6;j<9;j++){
            for(l=0;l<a[i][j].size();l++){
                if(a[i][j][l]==k){
                    a[i][j].erase(a[i][j].begin()+l);
                }
            }
        }
    }
}
void zone4(int k){
    int i,j,l;
    for(i=3;i<6;i++){
        for(j=0;j<3;j++){
            for(l=0;l<a[i][j].size();l++){
                if(a[i][j][l]==k){
                    a[i][j].erase(a[i][j].begin()+l);
                }
            }
        }
    }
}
void zone5(int k){
    int i,j,l;
    for(i=3;i<6;i++){
        for(j=3;j<6;j++){
            for(l=0;l<a[i][j].size();l++){
                if(a[i][j][l]==k){
                    a[i][j].erase(a[i][j].begin()+l);
                }
            }
        }
    }
}
void zone6(int k){
    int i,j,l;
    for(i=3;i<6;i++){
        for(j=6;j<9;j++){
            for(l=0;l<a[i][j].size();l++){
                if(a[i][j][l]==k){
                    a[i][j].erase(a[i][j].begin()+l);
                }
            }
        }
    }
}
void zone7(int k){
    int i,j,l;
    for(i=6;i<9;i++){
        for(j=0;j<3;j++){
            for(l=0;l<a[i][j].size();l++){
                if(a[i][j][l]==k){
                    a[i][j].erase(a[i][j].begin()+l);
                }
            }
        }
    }
}
void zone8(int k){
    int i,j,l;
    for(i=6;i<9;i++){
        for(j=3;j<6;j++){
            for(l=0;l<a[i][j].size();l++){
                if(a[i][j][l]==k){
                    a[i][j].erase(a[i][j].begin()+l);
                }
            }
        }
    }
}
void zone9(int k){
    int i,j,l;
    for(i=6;i<9;i++){
        for(j=6;j<9;j++){
            for(l=0;l<a[i][j].size();l++){
                if(a[i][j][l]==k){
                    a[i][j].erase(a[i][j].begin()+l);
                }
            }
        }
    }
}

void operation(){
    int i,j;
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            if(b[i][j]!=0){
                rowcol(i,j,b[i][j]);
                if(i<3 && j<3){
                    zone1(b[i][j]);
                }
                else if(i<3 && j<6){
                    zone2(b[i][j]);
                }
                else if(i<3 && j<9){
                    zone3(b[i][j]);
                }
                else if(i<6 && j<3){
                    zone4(b[i][j]);
                }
                else if(i<6 && j<6){
                    zone5(b[i][j]);
                }
                else if(i<6 && j<9){
                    zone6(b[i][j]);
                }
                else if(i<9 && j<3){
                    zone7(b[i][j]);
                }
                else if(i<9 && j<6){
                    zone8(b[i][j]);
                }
                else{
                    zone9(b[i][j]);
                }
            }
        }
    }
}
// clear zeros code

void clearzeros(){
    int i,j,k;
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            if(b[i][j]!=0){
                a[i][j].clear();
            }
            for(k=0;k<a[i][j].size();k++){
                if(a[i][j][k]==0){
                    a[i][j].erase(a[i][j].begin()+k);
                    k--;
                }
            }
        }
    }
}

void checkifvalid(){
    void possibility2();
    int i,j,m;
    m=0;
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            if(b[i][j]==0){
                m=1;
            }
        }
    }
    if(m==0){
        return;
    }
    else{
        copybtoc();
        copyatod();
        possibility2();
    }
}

int checkvalid(){
    int i,j,m;
    m=0;
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            if(b[i][j]==0){
                m=1;
            }
        }
    }
    return m;
}

void possibility2(){
    int z,i,j,k,count;
    count = 1;
    for(int z=0;z<100;z++){
        for(i=0;i<9;i++){
            for(j=0;j<9;j++){
                if(a[i][j].size()==1){
                    b[i][j]=a[i][j][0];
                    rowcol(i,j,a[i][j][0]);

                    if(i<3 && j<3){
                        zone1(a[i][j][0]);
                    }
                    else if(i<3 && j<6){
                        zone2(a[i][j][0]);
                    }
                    else if(i<3 && j<9){
                        zone3(a[i][j][0]);
                    }
                    else if(i<6 && j<3){
                        zone4(a[i][j][0]);
                    }
                    else if(i<6 && j<6){
                        zone5(a[i][j][0]);
                    }
                    else if(i<6 && j<9){
                        zone6(a[i][j][0]);
                    }
                    else if(i<9 && j<3){
                        zone7(a[i][j][0]);
                    }
                    else if(i<9 && j<6){
                        zone8(a[i][j][0]);
                    }
                    else{
                        zone9(a[i][j][0]);
                    }
                }
                
                if(a[i][j].size()==2 && count==1){
                    for(k=0;k<a[i][j].size();k++){
                        b[i][j]=a[i][j][k];
                        rowcol(i,j,a[i][j][k]);
    
                        if(i<3 && j<3){
                            zone1(a[i][j][k]);
                        }
                        else if(i<3 && j<6){
                            zone2(a[i][j][k]);
                        }
                        else if(i<3 && j<9){
                            zone3(a[i][j][k]);
                        }
                        else if(i<6 && j<3){
                            zone4(a[i][j][k]);
                        }
                        else if(i<6 && j<6){
                            zone5(a[i][j][k]);
                        }
                        else if(i<6 && j<9){
                            zone6(a[i][j][k]);
                        }
                        else if(i<9 && j<3){
                            zone7(a[i][j][k]);
                        }
                        else if(i<9 && j<6){
                            zone8(a[i][j][k]);
                        }
                        else{
                            zone9(a[i][j][k]);
                        }
                        
                        if(checkvalid()){
                            copyctob();
                            copydtoa();
                        }
                        else{
                            count++;
                            break;
                        }
                    }
                }
            }
        }
    }
}

void possibility1(){
    int z,i,j;
        for(int z=0;z<100;z++){
        for(i=0;i<9;i++){
            for(j=0;j<9;j++){
                if(a[i][j].size()==1){
                    b[i][j]=a[i][j][0];
                    rowcol(i,j,a[i][j][0]);

                    if(i<3 && j<3){
                        zone1(a[i][j][0]);
                    }
                    else if(i<3 && j<6){
                        zone2(a[i][j][0]);
                    }
                    else if(i<3 && j<9){
                        zone3(a[i][j][0]);
                    }
                    else if(i<6 && j<3){
                        zone4(a[i][j][0]);
                    }
                    else if(i<6 && j<6){
                        zone5(a[i][j][0]);
                    }
                    else if(i<6 && j<9){
                        zone6(a[i][j][0]);
                    }
                    else if(i<9 && j<3){
                        zone7(a[i][j][0]);
                    }
                    else if(i<9 && j<6){
                        zone8(a[i][j][0]);
                    }
                    else{
                        zone9(a[i][j][0]);
                    }
                }
            }
        }
    }
}

void setc(int l, int e){
    int i,j,k,count;
    count=0;
    for(i=0;i<9;i++){
        for(k=0;k<a[i][e].size();k++){
            if(a[i][e][k]==l){
                count++;
            }
        }
    }
    if(count==1){
        for(i=0;i<9;i++){
            for(k=0;k<a[i][e].size();k++){
                if(a[i][e][k]==l){
                    b[i][e]=l;
                    rowcol(i,e,l);
                    operation();
                }
            }
        }
    }
}

void setr(int l, int e){
    int i,j,k,count;
    count=0;
    for(i=0;i<3;i++){
        for(k=0;k<a[i][e].size();k++){
            if(a[i][e][k]==l){
                count++;
            }
        }
    }
    if(count==1){
        for(i=0;i<9;i++){
            for(k=0;k<a[i][e].size();k++){
                if(a[i][e][k]==l){
                    b[i][e]=l;
                    rowcol(i,e,l);
                    operation();
                }
            }
        }
    }
}

void hardsolvec(){
    int i,j,l,ch,rw,m;
    int x[10];
    int cch[3]={0,0,0};
    for(i=0;i<10;i++){
        x[i]=0;
    }

    //col1
    
    for(i=0;i<9;i++){
        for(j=0;j<3;j++){
            x[b[i][j]]++;
        }
    }
    for(m=0;m<10;m++){
        if(x[m]==2){
            for(i=0;i<9;i++){
                for(j=0;j<3;j++){
                    if(x[b[i][j]]==m)
                    cch[j]++;
                }
            }
            for(int k=0;k<3;k++){
                if(cch[k]==0){
                    l=k;
                }
            }
            setc(i+1,l);
        }
        for(int o=0;o<3;o++){
            cch[o]=0;
        }
    }
    //reset
}

void hardsolver(){
    int i,j,ch,rw,l,m;
    int x[10];
    int cch[3]={0,0,0};
    for(i=0;i<10;i++){
        x[i]=0;
    }

    //row1
    
    for(i=0;i<3;i++){
        for(j=0;j<9;j++){
            x[b[i][j]]++;
        }
    }
    for(m=0;m<10;m++){
        if(x[m]==2){
            for(i=0;i<3;i++){
                for(j=0;j<9;j++){
                    if(b[i][j]==m)
                    cch[i]++;
                }
            }
            for(int k=0;k<3;k++){
                if(cch[k]==0){
                    l=k;
                }
            }
            setr(m,l);
        }
        for(int o=0;o<3;o++){
            cch[o]=0;
        }
    }
    //reset
}

void genius(){
    int i,j,k,l,m;
    int o[10];
    vector <int>checki,checkj;
    for(i=0;i<10;i++){
        o[i]=0;
    }
    
    //zones
    
    for(k=0;k<3;k++){
        for(l=0;l<3;l++){
            for(m=0;m<a[k][l].size();m++){
                o[a[k][l][m]]++;
            }
        }
    }
    for(i=1;i<10;i++){
        bool flagi=true;
        bool flagj=true;
        vector <int>checki,checkj;
        if(o[i]==1){
            for(k=0;k<3;k++){
                for(l=0;l<3;l++){
                    for(m=0;m<a[k][l].size();m++){
                        if(a[k][l][m]==i){
                            b[k][l]=i;
                            operation();
                            rowcol(k,l,i);
                        }
                    }
                }
            }
        }
        else if(o[i]<=3 && o[i]>1){
            for(k=0;k<3;k++){
                for(l=0;l<3;l++){
                    for(m=0;m<a[k][l].size();m++){
                        if(a[k][l][m]==i){
                            checki.push_back(k);
                            checkj.push_back(l);
                        }
                    }
                }
            }
            for(k=1;k<checki.size();k++){
                if(checki[k]!=checki[k-1]){
                    flagi=false;
                    break;
                }
            }
            for(k=1;k<checkj.size();k++){
                if(checkj[k]!=checkj[k-1]){
                    flagj=false;
                    break;
                }
            }
            if(flagi){
                for(k=3;k<9;k++){
                    for(m=0;m<a[checki[0]][k].size();m++){
                        if(a[checki[0]][k][m]==i){
                            a[checki[0]][k].erase(a[checki[0]][k].begin()+m);
                        }
                    }
                }
            }
            if(flagj){
                for(k=3;k<9;k++){
                    for(m=0;m<a[k][checkj[0]].size();m++){
                        if(a[k][checkj[0]][m]==i){
                            a[k][checkj[0]].erase(a[k][checkj[0]].begin()+m);
                        }
                    }
                }
            }
            //reset
            checki.clear();
            checkj.clear();
        }
    }
    for(i=0;i<10;i++){
        o[i]=0;
    }
    
    
    for(k=0;k<3;k++){
        for(l=3;l<6;l++){
            for(m=0;m<a[k][l].size();m++){
                o[a[k][l][m]]++;
            }
        }
    }
    for(i=1;i<10;i++){
        bool flagi=true;
        bool flagj=true;
        vector <int>checki,checkj;
        if(o[i]==1){
            for(k=0;k<3;k++){
                for(l=3;l<6;l++){
                    for(m=0;m<a[k][l].size();m++){
                        if(a[k][l][m]==i){
                            b[k][l]=i;
                            operation();
                            rowcol(k,l,i);
                        }
                    }
                }
            }
        }
        else if(o[i]<=3 && o[i]>1){
            for(k=0;k<3;k++){
                for(l=3;l<6;l++){
                    for(m=0;m<a[k][l].size();m++){
                        if(a[k][l][m]==i){
                            checki.push_back(k);
                            checkj.push_back(l);
                        }
                    }
                }
            }
            for(k=1;k<checki.size();k++){
                if(checki[k]!=checki[k-1]){
                    flagi=false;
                    break;
                }
            }
            for(k=1;k<checkj.size();k++){
                if(checkj[k]!=checkj[k-1]){
                    flagj=false;
                    break;
                }
            }
            if(flagi){
                for(k=0;k<3;k++){
                    for(m=0;m<a[checki[0]][k].size();m++){
                        if(a[checki[0]][k][m]==i){
                            a[checki[0]][k].erase(a[checki[0]][k].begin()+m);
                        }
                    }
                }
                for(k=6;k<9;k++){
                    for(m=0;m<a[checki[0]][k].size();m++){
                        if(a[checki[0]][k][m]==i){
                            a[checki[0]][k].erase(a[checki[0]][k].begin()+m);
                        }
                    }
                }
            }
            if(flagj){
                for(k=3;k<9;k++){
                    for(m=0;m<a[k][checkj[0]].size();m++){
                        if(a[k][checkj[0]][m]==i){
                            a[k][checkj[0]].erase(a[k][checkj[0]].begin()+m);
                        }
                    }
                }
            }
            //reset
            checki.clear();
            checkj.clear();
        }
    }
    for(i=0;i<10;i++){
        o[i]=0;
    }
    
    
    for(k=0;k<3;k++){
        for(l=6;l<9;l++){
            for(m=0;m<a[k][l].size();m++){
                o[a[k][l][m]]++;
            }
        }
    }
    for(i=1;i<10;i++){
        bool flagi=true;
        bool flagj=true;
        vector <int>checki,checkj;
        if(o[i]==1){
            for(k=0;k<3;k++){
                for(l=6;l<9;l++){
                    for(m=0;m<a[k][l].size();m++){
                        if(a[k][l][m]==i){
                            b[k][l]=i;
                            operation();
                            rowcol(k,l,i);
                        }
                    }
                }
            }
        }
        else if(o[i]<=3 && o[i]>1){
            for(k=0;k<3;k++){
                for(l=6;l<9;l++){
                    for(m=0;m<a[k][l].size();m++){
                        if(a[k][l][m]==i){
                            checki.push_back(k);
                            checkj.push_back(l);
                        }
                    }
                }
            }
            for(k=1;k<checki.size();k++){
                if(checki[k]!=checki[k-1]){
                    flagi=false;
                    break;
                }
            }
            for(k=1;k<checkj.size();k++){
                if(checkj[k]!=checkj[k-1]){
                    flagj=false;
                    break;
                }
            }
            if(flagi){
                for(k=0;k<6;k++){
                    for(m=0;m<a[checki[0]][k].size();m++){
                        if(a[checki[0]][k][m]==i){
                            a[checki[0]][k].erase(a[checki[0]][k].begin()+m);
                        }
                    }
                }
            }
            if(flagj){
                for(k=3;k<9;k++){
                    for(m=0;m<a[k][checkj[0]].size();m++){
                        if(a[k][checkj[0]][m]==i){
                            a[k][checkj[0]].erase(a[k][checkj[0]].begin()+m);
                        }
                    }
                }
            }
            //reset
            checki.clear();
            checkj.clear();
        }
    }
    for(i=0;i<10;i++){
        o[i]=0;
    }
    
    
    for(k=3;k<6;k++){
        for(l=0;l<3;l++){
            for(m=0;m<a[k][l].size();m++){
                o[a[k][l][m]]++;
            }
        }
    }
    for(i=1;i<10;i++){
        bool flagi=true;
        bool flagj=true;
        vector <int>checki,checkj;
        if(o[i]==1){
            for(k=3;k<6;k++){
                for(l=0;l<3;l++){
                    for(m=0;m<a[k][l].size();m++){
                        if(a[k][l][m]==i){
                            b[k][l]=i;
                            operation();
                            rowcol(k,l,i);
                        }
                    }
                }
            }
        }
        else if(o[i]<=3 && o[i]>1){
            for(k=3;k<6;k++){
                for(l=0;l<3;l++){
                    for(m=0;m<a[k][l].size();m++){
                        if(a[k][l][m]==i){
                            checki.push_back(k);
                            checkj.push_back(l);
                        }
                    }
                }
            }
            for(k=1;k<checki.size();k++){
                if(checki[k]!=checki[k-1]){
                    flagi=false;
                    break;
                }
            }
            for(k=1;k<checkj.size();k++){
                if(checkj[k]!=checkj[k-1]){
                    flagj=false;
                    break;
                }
            }
            if(flagi){
                for(k=3;k<9;k++){
                    for(m=0;m<a[checki[0]][k].size();m++){
                        if(a[checki[0]][k][m]==i){
                            a[checki[0]][k].erase(a[checki[0]][k].begin()+m);
                        }
                    }
                }
            }
            if(flagj){
                for(k=0;k<3;k++){
                    for(m=0;m<a[k][checkj[0]].size();m++){
                        if(a[k][checkj[0]][m]==i){
                            a[k][checkj[0]].erase(a[k][checkj[0]].begin()+m);
                        }
                    }
                }
                for(k=6;k<9;k++){
                    for(m=0;m<a[k][checkj[0]].size();m++){
                        if(a[k][checkj[0]][m]==i){
                            a[k][checkj[0]].erase(a[k][checkj[0]].begin()+m);
                        }
                    }
                }
            }
            //reset
            checki.clear();
            checkj.clear();
        }
    }
    for(i=0;i<10;i++){
        o[i]=0;
    }
    
    
    for(k=3;k<6;k++){
        for(l=3;l<6;l++){
            for(m=0;m<a[k][l].size();m++){
                o[a[k][l][m]]++;
            }
        }
    }
    for(i=1;i<10;i++){
        bool flagi=true;
        bool flagj=true;
        vector <int>checki,checkj;
        if(o[i]==1){
            for(k=3;k<6;k++){
                for(l=3;l<6;l++){
                    for(m=0;m<a[k][l].size();m++){
                        if(a[k][l][m]==i){
                            b[k][l]=i;
                            operation();
                            rowcol(k,l,i);
                        }
                    }
                }
            }
        }
        else if(o[i]<=3 && o[i]>1){
            for(k=3;k<6;k++){
                for(l=3;l<6;l++){
                    for(m=0;m<a[k][l].size();m++){
                        if(a[k][l][m]==i){
                            checki.push_back(k);
                            checkj.push_back(l);
                        }
                    }
                }
            }
            for(k=1;k<checki.size();k++){
                if(checki[k]!=checki[k-1]){
                    flagi=false;
                    break;
                }
            }
            for(k=1;k<checkj.size();k++){
                if(checkj[k]!=checkj[k-1]){
                    flagj=false;
                    break;
                }
            }
            if(flagi){
                for(k=0;k<3;k++){
                    for(m=0;m<a[checki[0]][k].size();m++){
                        if(a[checki[0]][k][m]==i){
                            a[checki[0]][k].erase(a[checki[0]][k].begin()+m);
                        }
                    }
                }
                for(k=6;k<9;k++){
                    for(m=0;m<a[checki[0]][k].size();m++){
                        if(a[checki[0]][k][m]==i){
                            a[checki[0]][k].erase(a[checki[0]][k].begin()+m);
                        }
                    }
                }
            }
            if(flagj){
                for(k=0;k<3;k++){
                    for(m=0;m<a[k][checkj[0]].size();m++){
                        if(a[k][checkj[0]][m]==i){
                            a[k][checkj[0]].erase(a[k][checkj[0]].begin()+m);
                        }
                    }
                }
                for(k=6;k<9;k++){
                    for(m=0;m<a[k][checkj[0]].size();m++){
                        if(a[k][checkj[0]][m]==i){
                            a[k][checkj[0]].erase(a[k][checkj[0]].begin()+m);
                        }
                    }
                }
            }
            //reset
            checki.clear();
            checkj.clear();
        }
    }
    for(i=0;i<10;i++){
        o[i]=0;
    }
    
    
    for(k=3;k<6;k++){
        for(l=6;l<9;l++){
            for(m=0;m<a[k][l].size();m++){
                o[a[k][l][m]]++;
            }
        }
    }
    for(i=1;i<10;i++){
        bool flagi=true;
        bool flagj=true;
        vector <int>checki,checkj;
        if(o[i]==1){
            for(k=3;k<6;k++){
                for(l=6;l<9;l++){
                    for(m=0;m<a[k][l].size();m++){
                        if(a[k][l][m]==i){
                            b[k][l]=i;
                            operation();
                            rowcol(k,l,i);
                        }
                    }
                }
            }
        }
        else if(o[i]<=3 && o[i]>1){
            for(k=3;k<6;k++){
                for(l=6;l<9;l++){
                    for(m=0;m<a[k][l].size();m++){
                        if(a[k][l][m]==i){
                            checki.push_back(k);
                            checkj.push_back(l);
                        }
                    }
                }
            }
            for(k=1;k<checki.size();k++){
                if(checki[k]!=checki[k-1]){
                    flagi=false;
                    break;
                }
            }
            for(k=1;k<checkj.size();k++){
                if(checkj[k]!=checkj[k-1]){
                    flagj=false;
                    break;
                }
            }
            if(flagi){
                for(k=0;k<6;k++){
                    for(m=0;m<a[checki[0]][k].size();m++){
                        if(a[checki[0]][k][m]==i){
                            a[checki[0]][k].erase(a[checki[0]][k].begin()+m);
                        }
                    }
                }
            }
            if(flagj){
                for(k=0;k<3;k++){
                    for(m=0;m<a[k][checkj[0]].size();m++){
                        if(a[k][checkj[0]][m]==i){
                            a[k][checkj[0]].erase(a[k][checkj[0]].begin()+m);
                        }
                    }
                }
                for(k=6;k<9;k++){
                    for(m=0;m<a[k][checkj[0]].size();m++){
                        if(a[k][checkj[0]][m]==i){
                            a[k][checkj[0]].erase(a[k][checkj[0]].begin()+m);
                        }
                    }
                }
            }
            //reset
            checki.clear();
            checkj.clear();
        }
    }
    for(i=0;i<10;i++){
        o[i]=0;
    }
    
    
    for(k=6;k<9;k++){
        for(l=0;l<3;l++){
            for(m=0;m<a[k][l].size();m++){
                o[a[k][l][m]]++;
            }
        }
    }
    for(i=1;i<10;i++){
        bool flagi=true;
        bool flagj=true;
        vector <int>checki,checkj;
        if(o[i]==1){
            for(k=6;k<9;k++){
                for(l=0;l<3;l++){
                    for(m=0;m<a[k][l].size();m++){
                        if(a[k][l][m]==i){
                            b[k][l]=i;
                            operation();
                            rowcol(k,l,i);
                        }
                    }
                }
            }
        }
        else if(o[i]<=3 && o[i]>1){
            for(k=6;k<9;k++){
                for(l=0;l<3;l++){
                    for(m=0;m<a[k][l].size();m++){
                        if(a[k][l][m]==i){
                            checki.push_back(k);
                            checkj.push_back(l);
                        }
                    }
                }
            }
            for(k=1;k<checki.size();k++){
                if(checki[k]!=checki[k-1]){
                    flagi=false;
                    break;
                }
            }
            for(k=1;k<checkj.size();k++){
                if(checkj[k]!=checkj[k-1]){
                    flagj=false;
                    break;
                }
            }
            if(flagi){
                for(k=3;k<9;k++){
                    for(m=0;m<a[checki[0]][k].size();m++){
                        if(a[checki[0]][k][m]==i){
                            a[checki[0]][k].erase(a[checki[0]][k].begin()+m);
                        }
                    }
                }
            }
            if(flagj){
                for(k=0;k<6;k++){
                    for(m=0;m<a[k][checkj[0]].size();m++){
                        if(a[k][checkj[0]][m]==i){
                            a[k][checkj[0]].erase(a[k][checkj[0]].begin()+m);
                        }
                    }
                }
            }
            //reset
            checki.clear();
            checkj.clear();
        }
    }
    for(i=0;i<10;i++){
        o[i]=0;
    }
    
    
    for(k=6;k<9;k++){
        for(l=3;l<6;l++){
            for(m=0;m<a[k][l].size();m++){
                o[a[k][l][m]]++;
            }
        }
    }
    for(i=1;i<10;i++){
        bool flagi=true;
        bool flagj=true;
        vector <int>checki,checkj;
        if(o[i]==1){
            for(k=6;k<9;k++){
                for(l=3;l<6;l++){
                    for(m=0;m<a[k][l].size();m++){
                        if(a[k][l][m]==i){
                            b[k][l]=i;
                            operation();
                            rowcol(k,l,i);
                        }
                    }
                }
            }
        }
        else if(o[i]<=3 && o[i]>1){
            for(k=6;k<9;k++){
                for(l=3;l<6;l++){
                    for(m=0;m<a[k][l].size();m++){
                        if(a[k][l][m]==i){
                            checki.push_back(k);
                            checkj.push_back(l);
                        }
                    }
                }
            }
            for(k=1;k<checki.size();k++){
                if(checki[k]!=checki[k-1]){
                    flagi=false;
                    break;
                }
            }
            for(k=1;k<checkj.size();k++){
                if(checkj[k]!=checkj[k-1]){
                    flagj=false;
                    break;
                }
            }
            if(flagi){
                for(k=0;k<3;k++){
                    for(m=0;m<a[checki[0]][k].size();m++){
                        if(a[checki[0]][k][m]==i){
                            a[checki[0]][k].erase(a[checki[0]][k].begin()+m);
                        }
                    }
                }
                for(k=3;k<9;k++){
                    for(m=0;m<a[checki[0]][k].size();m++){
                        if(a[checki[0]][k][m]==i){
                            a[checki[0]][k].erase(a[checki[0]][k].begin()+m);
                        }
                    }
                }
            }
            if(flagj){
                for(k=0;k<6;k++){
                    for(m=0;m<a[k][checkj[0]].size();m++){
                        if(a[k][checkj[0]][m]==i){
                            a[k][checkj[0]].erase(a[k][checkj[0]].begin()+m);
                        }
                    }
                }
            }
            //reset
            checki.clear();
            checkj.clear();
        }
    }
    for(i=0;i<10;i++){
        o[i]=0;
    }
    
    
    for(k=6;k<9;k++){
        for(l=6;l<9;l++){
            for(m=0;m<a[k][l].size();m++){
                o[a[k][l][m]]++;
            }
        }
    }
    for(i=1;i<10;i++){
        bool flagi=true;
        bool flagj=true;
        vector <int>checki,checkj;
        if(o[i]==1){
            for(k=6;k<9;k++){
                for(l=6;l<9;l++){
                    for(m=0;m<a[k][l].size();m++){
                        if(a[k][l][m]==i){
                            b[k][l]=i;
                            rowcol(k,l,i);
                            operation();
                        }
                    }
                }
            }
        }
        else if(o[i]<=3 && o[i]>1){
            for(k=6;k<9;k++){
                for(l=6;l<9;l++){
                    for(m=0;m<a[k][l].size();m++){
                        if(a[k][l][m]==i){
                            checki.push_back(k);
                            checkj.push_back(l);
                        }
                    }
                }
            }
            for(k=1;k<checki.size();k++){
                if(checki[k]!=checki[k-1]){
                    flagi=false;
                    break;
                }
            }
            for(k=1;k<checkj.size();k++){
                if(checkj[k]!=checkj[k-1]){
                    flagj=false;
                    break;
                }
            }
            if(flagi){
                for(k=0;k<6;k++){
                    for(m=0;m<a[checki[0]][k].size();m++){
                        if(a[checki[0]][k][m]==i){
                            a[checki[0]][k].erase(a[checki[0]][k].begin()+m);
                        }
                    }
                }
            }
            if(flagj){
                for(k=0;k<6;k++){
                    for(m=0;m<a[k][checkj[0]].size();m++){
                        if(a[k][checkj[0]][m]==i){
                            a[k][checkj[0]].erase(a[k][checkj[0]].begin()+m);
                        }
                    }
                }
            }
            //reset
            checki.clear();
            checkj.clear();
        }
    }
    for(i=0;i<10;i++){
        o[i]=0;
    }
}

void rowcolcheck(){
    int i,j,k,l,m;
    int o[10];
    for(i=0;i<10;i++){
        o[i]=0;
    }
    
    //rows and columns
    
    for(k=0;k<9;k++){
        for(l=0;l<9;l++){
            for(m=0;m<a[k][l].size();m++){
                o[a[k][l][m]]++;
            }
        }
        for(i=0;i<10;i++){
            if(o[i]==1){
                for(l=0;l<9;l++){
                    for(m=0;m<a[k][l].size();m++){
                        if(a[k][l][m]==i){
                            b[k][l]=i;
                            operation();
                            rowcol(k,l,i);
                        }
                    }
                }
            }
        }
        for(i=0;i<10;i++){
            o[i]=0;
        }
    }
    for(k=0;k<9;k++){
        for(l=0;l<9;l++){
            for(m=0;m<a[l][k].size();m++){
                o[a[l][k][m]]++;
            }
        }
        for(i=0;i<10;i++){
            if(o[i]==1){
                for(l=0;l<9;l++){
                    for(m=0;m<a[l][k].size();m++){
                        if(a[l][k][m]==i){
                            b[l][k]=i;
                            operation();
                            rowcol(l,k,i);
                        }
                    }
                }
            }
        }
        for(i=0;i<10;i++){
            o[i]=0;
        }
    }
}

// void forthehardest(){
//     int i,j,k,l,m;
//     int o[10];
    
//     //rows and columns
    
//     for(k=0;k<9;k++){
//         vector<vector>v2;
//         vector<vector>v3;
//         vector<vector>v4;
        
//         //for 2 possibilities and 2 blanks
        
//         for(l=0;l<9;l++){
//             if(a[k][l].size()==2){
//                 v2.push_back(a[k][l]);
//             }
//             if(a[k][l].size()==3){
//                 v3.push_back(a[k][l]);
//             }
//         }
//         if(v2.size()==2){
//             for(l=0;l<9;l++){
//                 if(a[k][l].size!=0 && a[k][l]!=v2[0]){
//                     for(m=0;m<a[k][l].size();m++){
//                         if(a[k][l][m]==v2[0][0] || a[k][l][m]==v2[0][1]){
//                             a[k][l].erase(a[k][l].begin+m);
//                             possibility1();
//                             m-=1;
//                         }
//                     }
//                 }
//             }
//         }
//         if(v3.size()==3){
//             for(l=0;l<9;l++){
//                 if(a[k][l].size!=0 && a[k][l]!=v3[0]){
//                     for(m=0;m<a[k][l].size();m++){
//                         if(a[k][l][m]==v3[0][0] || a[k][l][m]==v3[0][1] || a[k][l][m]==v3[0][2]){
//                             a[k][l].erase(a[k][l].begin+m);
//                             possibility1();
//                             m-=1;
//                         }
//                     }
//                 }
//             }
//         }
        
//         for(i=0;i<10;i++){
//             if(o[i]==1){
//                 for(l=0;l<9;l++){
//                     for(m=0;m<a[k][l].size();m++){
//                         if(a[k][l][m]==i){
//                             b[k][l]=i;
//                             operation();
//                             rowcol(k,l,i);
//                         }
//                     }
//                 }
//             }
//         }
//         for(i=0;i<10;i++){
//             o[i]=0;
//         }
//     }
//     for(k=0;k<9;k++){
//         for(l=0;l<9;l++){
//             for(m=0;m<a[l][k].size();m++){
//                 o[a[l][k][m]]++;
//             }
//         }
//         for(i=0;i<10;i++){
//             if(o[i]==1){
//                 for(l=0;l<9;l++){
//                     for(m=0;m<a[l][k].size();m++){
//                         if(a[l][k][m]==i){
//                             b[l][k]=i;
//                             operation();
//                             rowcol(l,k,i);
//                         }
//                     }
//                 }
//             }
//         }
//         for(i=0;i<10;i++){
//             o[i]=0;
//         }
//     }
// }

int main(){
    int i,j,n,k,m,l,check;
    
    // all possibilities in every block

    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            a[i][j].push_back(1);
            a[i][j].push_back(2);
            a[i][j].push_back(3);
            a[i][j].push_back(4);
            a[i][j].push_back(5);
            a[i][j].push_back(6);
            a[i][j].push_back(7);
            a[i][j].push_back(8);
            a[i][j].push_back(9);
        }
    }

    //impossible possibilities in input block

    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            cin>>b[i][j];
        }
    }

    //checker code

    // for(i=0;i<9;i++){
    //     for(j=0;j<9;j++){
    //         m=0;
    //         for(k=0;k<9;k++){
    //             if(a[i][j][k]==0){
    //                 cout<<k+1<<" ";
    //                 m=1;
    //             }
    //         }
    //         if(m==0){
    //             cout<<"0 ";
    //         }
    //     }
    //     cout<<endl;
    // }

    //impossible possibilities in every block row and column wise

    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            if(b[i][j]!=0){
                for(l=0;l<9;l++){
                    a[l][j][b[i][j]-1]=0;
                    a[i][l][b[i][j]-1]=0;
                }
            }
        }
    }
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            if(b[i][j]!=0){
                a[i][j].clear();
            }
        }
    }

    clearzeros();
    
    // Impossible possibilities in every block zone wise
    
    operation();

    possibility1();
    
    // checkifvalid();
    
    // under maintainence
    // hardsolve();
    for(i=0;i<101;i++){
        rowcolcheck();
        genius();
        operation();
        possibility1();
    }
    
    // forthehardest();
    
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    
    //checker code #2
    
    cout<<endl;
    // for(i=0;i<9;i++){
    //     for(j=0;j<9;j++){
    //         for(k=0;k<a[i][j].size();k++){
    //             cout<<a[i][j][k]<<" ";
    //         }
    //         cout<<endl;
    //     }
    //     cout<<endl;
    // }

    return 0;
}

// easy

// 5 3 0  0 7 0  0 0 0
// 6 0 0  1 9 5  0 0 0
// 0 9 8  0 0 0  0 6 0

// 8 0 0  0 6 0  0 0 3
// 4 0 0  8 0 3  0 0 1
// 7 0 0  0 2 0  0 0 6

// 0 6 0  0 0 0  2 8 0
// 0 0 0  4 1 9  0 0 5
// 0 0 0  0 8 0  0 7 9

// hard

// 5 0 0  9 2 0  0 7 0
// 0 0 0  0 0 1  0 0 0
// 1 0 0  0 0 0  0 5 6 

// 4 5 2  0 9 0  0 0 0 
// 7 0 0  3 0 2  0 0 0 
// 0 0 9  5 6 0  0 0 0 

// 0 0 0  0 8 0  1 0 2 
// 0 6 0  7 0 0  0 0 0 
// 0 0 0  0 0 0  0 0 4

// gand faad

// 1 5 0  0 0 0  0 0 2 
// 0 4 0  8 0 0  1 5 0 
// 0 0 0  0 5 0  0 0 7 

// 3 0 0  0 6 0  5 4 0 
// 0 0 6  2 0 0  0 0 0
// 0 0 0  0 0 0  0 7 0 

// 0 8 0  0 0 9  0 0 0 
// 0 0 0  0 0 0  0 0 1
// 4 0 0  0 2 0  3 6 0