#include<iostream>
using namespace std;
string arr1[20],arr2[20],arr3[20],arr4[20],arr5[20];
int total = 0;
void enter(){
    int choice ;
    cout<<"How many students do you want to enter: ";
    cin>>choice;
    if(total==0){
        for(int i=0;i<choice;i++){
            cout<<"\n------------------------\n";
            cout<<"\nEnter data of student: "<<i+1<<endl;
            cout<<"Enter Name : ";
            cin>>arr1[i];
            cout<<"Enter Rollno : ";
            cin>>arr2[i];
            cout<<"Enter Course : ";
            cin>>arr3[i];
            cout<<"Enter Class : ";
            cin>>arr4[i];
            cout<<"Enter Contact : ";
            cin>>arr5[i];
        }
    }  
    else{
        for(int i=total;i<total+choice;i++){
            cout<<"\n------------------------\n";
            cout<<"\nEnter data of student: "<<i+1<<endl;
            cout<<"Enter Name : ";
            cin>>arr1[i];
            cout<<"Enter Rollno : ";
            cin>>arr2[i];
            cout<<"Enter Course : ";
            cin>>arr3[i];
            cout<<"Enter Class : ";
            cin>>arr4[i];
            cout<<"Enter Contact : ";
            cin>>arr5[i];
        }
    } 
    total += choice ; 
}
void show(){
    if(total==0){
        cout<<"No Data is Entered";
    }
    else{
        for(int i=0;i<total;i++){
            cout<<"\n------------------------\n";
            cout<<"\nData of student: "<<i+1<<endl;
            cout<<"Name : "<<arr1[i]<<endl;
            cout<<"Rollno : "<<arr2[i]<<endl;
            cout<<"Course : "<<arr3[i]<<endl;
            cout<<"Class : "<<arr4[i]<<endl;
            cout<<"Contact : "<<arr5[i]<<endl;
        }
    }
}
void search(){
    string rollno;
    cout<<"Enter Rollno of student you want to search : ";
    cin>>rollno;
    for(int i=0;i<total;i++){
        if(rollno == arr2[i]){
            cout<<"\n------------------------\n";
            cout<<"\nData of student: "<<i+1<<endl;
            cout<<"Name : "<<arr1[i]<<endl;
            cout<<"Rollno : "<<arr2[i]<<endl;
            cout<<"Course : "<<arr3[i]<<endl;
            cout<<"Class : "<<arr4[i]<<endl;
            cout<<"Contact : "<<arr5[i]<<endl;
        }
    }
}
void update(){
    string rollno;
    cout<<"Enter Rollno of student you want to update : ";
    cin>>rollno;
    for(int i=0;i<total;i++){
        if(rollno == arr2[i]){
            cout<<"\n------------------------\n";
            cout<<"Previous Data"<<endl;
            cout<<"\nData of student: "<<i+1<<endl;
            cout<<"Name : "<<arr1[i]<<endl;
            cout<<"Rollno : "<<arr2[i]<<endl;
            cout<<"Course : "<<arr3[i]<<endl;
            cout<<"Class : "<<arr4[i]<<endl;
            cout<<"Contact : "<<arr5[i]<<endl;
            cout<<"\nEnter New Data\n";
            cout<<"\nEnter data of student: "<<i+1<<endl;
            cout<<"Enter Name : ";
            cin>>arr1[i];
            cout<<"Enter Rollno : ";
            cin>>arr2[i];
            cout<<"Enter Course : ";
            cin>>arr3[i];
            cout<<"Enter Class : ";
            cin>>arr4[i];
            cout<<"Enter Contact : ";
            cin>>arr5[i];
        }
    }
}
void deleteRecord(){
    int a;
    cout<<"Press 1 to Delete full record"<<endl;
    cout<<"Press 2 to Delete Specific Record "<<endl;
    cin>>a;
    if(a==1){
        total = 0;
        cout<<"All Recod is Deleted";
    }
    else if(a==2){
        string rollno;
        cout<<"Enter Rollno you want to delete"<<endl;
        cin>>rollno;
        for(int i=0;i<total;i++){
            if(rollno==arr2[i]){
                for(int j=i;j<total;j++){
                    arr1[j] = arr1[j+1];
                    arr2[j] = arr2[j+1];
                    arr3[j] = arr3[j+1];
                    arr4[j] = arr4[j+1];
                    arr5[j] = arr5[j+1];
                }
                total-- ;
            }
        }
    }
    else{
        cout<<"Enter Valid Input";
    }
} 


int main(){
    int value ; 
    while(true){
        cout<<"\n------------------------\n";
        cout<<"Press 1 to enter Data"<<endl;
        cout<<"Press 2 to show Data"<<endl;
        cout<<"Press 3 to search data"<<endl;
        cout<<"Press 4 to update data"<<endl;
        cout<<"Press 5 to delete data"<<endl;
        cout<<"Press 6 to exit"<<endl;
        cin>>value ;
        switch (value){
            case 1 : 
                enter();
                break;
            case 2 : 
                show();
                break;
            case 3 : 
                search();
                break;
            case 4 : 
                update();
                break;
            case 5 : 
                deleteRecord();
                break;
            case 6 : 
                exit(0);
                break;    
            default:
                cout<<"Invalid Input"<<endl;
                break;
        }
    }
    
}