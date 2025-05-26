#include<iostream>
#include<vector>
using namespace std;

void pattern1(int n){
    for(int i = 1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<< j<< " ";
        }
        cout<< endl;
    }
}
void pattern2(int n){
    for(int i = 0; i<n; i++){
        for(int j=0; j< n-i-1; j++){
            cout<< " "<< " ";
        }
        
        for(int j=0; j< i*2+1; j++){
            cout<< "*"<< " ";
        }
        cout<< endl;
    }
}
void pattern3(int n){
    for(int i = 0; i<n; i++){
        for(int j=0; j< i; j++){
            cout<<" "<<" ";
        }
        for(int j=0; j< 2*n-(i*2+1); j++){
            cout<< "*"<< " ";
        }
        cout<< endl;
    }
}
void pattern4(int n){
    int start = 1;
    for(int i=0; i<n ; i++){
        if(i%2 == 0)start = 1;
        else start = 0;
        for(int j = 0; j<= i; j++){
            cout<< start << " ";
            start = 1- start;
        }
        cout<< endl;
    }
}
void pattern5(int n){
    for(int i=1; i<=n; i++){
        //numbers
        for(int j=1; j<=i; j++){
            cout<< j<< " ";
        }      
        //spaces
        for(int j=1; j<=2*n-2*i; j++){
            cout<< " "<< " ";
        } 
        //numbers
        for(int j=i; j>=1; j--){
            cout<< j<< " ";
        }
        cout<<endl;
    }
}
void pattern6(int n){
    int num = 1;
    for( int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<< num++<<" ";
        }
        cout<< endl;
    }
}
void pattern7(int n){
    for( int i=0; i<n; i++){
        char ch = 'A';
        for(int j=0; j<=i; j++){
            cout<< ch++<<" ";
        }
        cout<< endl;
    }
}
void pattern8(int n){
    for( int i=0; i<n; i++){
        char ch = 'A';
        for(int j=0; j<=(n-i-1); j++){
            cout<< ch++<<" ";
        }
        cout<< endl;
    }
}
void pattern9(int n){
    char ch = 'A';
    for( int i=0; i<n; i++){        
        for(int j=0; j<=i; j++){
            cout<< ch<<" ";
        }
        ch++;
        cout<< endl;
    }
}
void pattern10(int n){
    for(int i = 0; i<n; i++){
        for(int j=0; j< n-i-1; j++){
            cout<< " "<< " ";
        }
        char ch = 'A';           
        for(int j=0; j< 2*i+1; j++){
            cout<< ch <<" ";
            ch++;
        }   
        cout<< endl;
    
    }
}
void pattern11(int n){
    for(int i = 0; i<n; i++){
        for(int j=0; j< n-i-1; j++){
            cout<< " "<< " ";
        }
        char ch = 'A';
        int breakpoint = (2*i+1)/2;           
        for(int j=0; j< 2*i+1; j++){
            cout<< ch <<" ";
            if(j<breakpoint) ch++;
            else ch--;
        }
        cout<< endl;
    
    }
}
void pattern12(int n){
    for(int i=0; i<n; i++){
        for(char j= 'E'-i; j<='E'; j++){
            cout << j << " ";
        }
        cout<< endl;
    }
}
void pattern13(int n){
    for(int i=1; i<=n; i++){
        //numbers
        for(int j=1; j<=n-i+1; j++){
            cout<< j<< " ";
        }      
        //spaces
        for(int j=1; j<=2*i-2; j++){
            cout<< " "<< " ";
        } 
        //numbers
        for(int j=n-i+1; j>=1; j--){
            cout<< j<< " ";
        }
        cout<<endl;
    }
    for(int i=1; i<=n; i++){
        //numbers
        for(int j=1; j<=i; j++){
            cout<< j<< " ";
        }      
        //spaces
        for(int j=1; j<=2*n-2*i; j++){
            cout<< " "<< " ";
        } 
        //numbers
        for(int j=i; j>=1; j--){
            cout<< j<< " ";
        }
        cout<<endl;
    }
}
void pattern14(int n){
    for(int i=1; i<=n; i++){
        //stars
        for(int j=1; j<=n-i+1; j++){
            cout<< "*"<< " ";
        }      
        //spaces
        for(int j=1; j<=2*i-2; j++){
            cout<< " "<< " ";
        } 
        //stars
        for(int j=n-i+1; j>=1; j--){
            cout<< "*"<< " ";
        }
        cout<<endl;
    }
    for(int i=1; i<=n; i++){
        //stars
        for(int j=1; j<=i; j++){
            cout<< "*"<< " ";
        }      
        //spaces
        for(int j=1; j<=2*n-2*i; j++){
            cout<< " "<< " ";
        } 
        //stars
        for(int j=i; j>=1; j--){
            cout<< "*"<< " ";
        }
        cout<<endl;
    }
}
void pattern15(int n){
    for(int i=1; i<=n; i++){
        //stars
        for(int j=1; j<=i; j++){
            cout<< "*"<< " ";
        }      
        //spaces
        for(int j=1; j<=2*n-2*i; j++){
            cout<< " "<< " ";
        } 
        //stars
        for(int j=i; j>=1; j--){
            cout<< "*"<< " ";
        }   
        cout<<endl;
    }
    for(int i=0; i<n-1; i++){
        //stars
        for (int j=0; j<(n-1)-i; j++){
            cout<<"*"<< " ";
        }
        //spaces
        for (int j=0; j<(2*i)+2; j++){
            cout<<" "<< " ";
        }

        //stars
        for (int j=0; j<(n-1)-i; j++){
            cout<<"*"<< " ";
        }
        cout<< endl;
    }
}
void pattern16(int n){
    for(int i=0; i<n; i++){
        for (int j = 0; j < n; j++)
        {
            if(i==0 || i==n-1 || j==0 || j==n-1){
                cout<< "*"<<" ";
            }
            else cout<< " "<< " ";
        }
        cout<< endl;
        
    }
}
void pattern17(int n){
    for(int i=0; i<2*n-1; i++){
        for(int j=0; j<2*n-1; j++){
            int top =i;
            int left = j;
            int bottom = (2*n -1) -1-i;
            int right = (2*n -1)-1-j;
            int result = n-(min(min(top,bottom),min(left,right)));
            cout<< result<<" ";
        }
        cout << endl;
    }
}
int main()
{
    int n = 5;
    // pattern2(n);
    // pattern3(n);
    pattern17(n);
    return 0;
}