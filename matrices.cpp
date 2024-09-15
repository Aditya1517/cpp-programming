// diagonal matrix

// #include<iostream>
// using namespace std;

// class diagonal{
//     private:
//         int n;        // dimensions of matrix
//         int *A;
//     public:
//         diagonal(int n){
//             this->n=n;
//             A = new int[n];
//         }
//         void set(int i,int j,int x);
//         int get(int i,int j);
//         void display();
//         ~diagonal(){
//             delete A;
//         }
// };

// void diagonal::set(int i,int j,int x){
//     if(i==j){
//         A[i-1]=x;
//     }
// }

// int diagonal::get(int i,int j){
//     if(i==j){
//         return A[i-1];
//     }
//     else{
//         return 0;
//     }
// }

// void diagonal::display(){
//     for (int i = 0; i <n; i++)
//     {
//         for(int j=0;j<n;j++){
//             if(i==j){
//                 cout<<A[i-1]<<" ";
//             }
//             else{
//                 cout<<"0"<<" ";
//             }
//         }
//         cout<<endl;
//     }
    
// }


// int main(int argc, char const *argv[])
// {
//     diagonal d(4);
//     d.set(1,1,1);
//     d.set(2,2,2);
//     d.set(3,3,3);
//     d.set(4,4,4);
//     d.display();
//     return 0;
// }



// lower triangular matrix 

#include<iostream>
using namespace std;

class lowertri{
    private:
        int *A;
        int n;
    public:
        lowertri(int n){
            this->n=n;
            A = new int [(n*(n-1))/2];
        }
        ~lowertri(){
            delete[] A;
        }
        void setRowmajor(int i,int j,int x);
        int getRowmajor(int i,int j);
        void display();
        int getN(int n);
};

void lowertri::setRowmajor(int i,int j,int x){
    if(i>=j){
        int index = ((i*(i-1)/2)+(j-1));
        A[index] = x;
    }
}

int lowertri::getRowmajor(int i,int j){
    if(i>=j){
        int index = ((i*(i-1)/2)+(j-1));
        return A[index];
    }
    else{
        return 0;
    }
}

void lowertri::display(){
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            if(i>=j){
                cout<<A[((i*(i-1)/2))+(j-1)]<<" ";
            }
            else{
                cout<<"0"<<" ";
            }
        }
    cout<<endl;
    }
}

int main(int argc, char const *argv[])
{
    lowertri t(4);
    t.setRowmajor(1,1,1);
    t.setRowmajor(2,1,2);
    t.setRowmajor(2,2,2);
    t.setRowmajor(3,1,3);
    t.setRowmajor(3,2,3);
    t.setRowmajor(3,3,3);
    t.setRowmajor(4,1,4);
    t.setRowmajor(4,2,4);
    t.setRowmajor(4,3,4);
    t.setRowmajor(4,4,4);
    t.display();
    return 0;
}


