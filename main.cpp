/*#include <iostream>
#include <cstring>

bool solve(){
    char input[101], a[101], b[101];
    char * p;
    std::cin>>input;
    while(input != NULL){
        p = strtok(input,' ');
        strcpy(a,p);
        while(p!= NULL){
            p = strtok (NULL,' ');
            strcpy(b,p);
            if(strlen(a)%2 && strlen(b)%2 == 0){
                strcpy(a+strlen(a)+1,a+strlen(a))
                if(strcmp(a,b) == 0)
                    return true;
                }
            if(strlen(b)%2 && strlen(a)%2 == 0){
                strcpy(b+strlen(b)+1, b+strlen(b));
                if(strcmp(a,b) == 0)
                    return true;
            }
        }
        p = strtok(input, ' ');
        strcpy(input,input+strlen(p)+1);
    }
    return false;
}

int main()
{
    if(solve())
        std::cout<<"DA";
    else
        std::cout<<"NU";
    return 0;
}*/

/*#include <iostream>
#include <cmath>

void radical (int n, int &x, int &y){
    float a; x=1; y=1;
    int b,i;
    a = sqrt(n); b = sqrt(n) ; int P[11] = { 0 };
    if(a == b){
        x= a; y=1;
    }else{
        while(n!=1){
            for(i=2;i<=n/2;++i){
                if(n%i==0){
                    if(i<11)
                        P[i]++;
                    n/=i;
                }
            }
            for(i=0;i<11;++i){
                if(P[i]%2==0)
                    x*=i/2;
                if(P[i]==1)
                    y*=i;
                if(P[i]>1 && P[i]%2!=0){
                    x*=(i-1)/2;
                    y*=i;
                }
            }
        }
    }
}

int main(){
    int a=8,b,c;
    radical(a,b,c);
    std::cout<<b<<" radical din "<<c;
    return 0;
}*/

#include <iostream>
#include <fstream>

int main(){
    std::ifstream in("bac.txt");
    int x, n, y, a; in>>x>>y; if(x>y) { a=x; x=y; y=a;}
    int minim = 0; int i=0; int k1; int k2; int j=0; int z=0;
    while(in>>a){
        if(a<minim){
            minim = a;
            k1 = i;
        } i++;
        minim = 9;
        while(in>>n){
            if(j>i){
                if(a<minim){
                    minim = a;
                    k2 = j;
                }
            } j++;
        }
        while(in>>a){
            if(z == i){
                std::cout<<x<<' ';}
                else{
                    if(z==j){
                        std::cout<<y<<' ';}
                        else
                            std::cout<<a<<' ';}
                    }
                }

    return 0;}

