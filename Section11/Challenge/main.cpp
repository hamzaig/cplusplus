#include<iostream>
#include<vector>

using namespace std;

void display_menu();
char get_selection();
void handle_display(const vector<int> &numbers);
    void display_list(const vector<int> &numbers);
void handle_add(vector<int> &numbers);
void handle_mean(const vector<int> &numbers);
    double calculate_mean(const vector<int> &numbers);
int handle_smallest(vector<int> numbers);
int handle_largest(vector<int> numbers);
void handle_find(const vector<int> numbers);
    bool find(const vector<int> numbers,int target);
void handle_quit();
void handle_unknown();

int main(){
    vector<int> numbers;
    char selection {};
    do{
        display_menu();
        selection=get_selection();
        switch(selection){
            case 'P':
                handle_display(numbers);
                break;
            case 'A':
                handle_add(numbers);
                break;
            case 'M':
                handle_mean(numbers);
                break;
            case 'S':
                cout<<handle_smallest(numbers);
                break;
            case 'L':
                cout<<handle_largest(numbers);
                break;
            case 'F':
                handle_find(numbers);
                break;
            case 'Q':
                handle_quit();
                break;
            default:
                handle_unknown();
                break;
        }
        cout<<endl;
        system("pause");
        system("cls");
    }while(selection!='Q');
    cout<<endl;
    return 0;
}

void display_menu(){
    cout<<"\nP - Print Numbers"<<endl;
    cout<<"A - Add a Number"<<endl;
    cout<<"M - Display Mean of The Numbers"<<endl;
    cout<<"S - Display The Smallest Number"<<endl;
    cout<<"L - Display The Largest Number"<<endl;
    cout<<"F - Find A Number"<<endl;
    cout<<"Q - Quit"<<endl;
    cout<<"\nEnter Your Choice : ";
}
char get_selection(){
    char selection{};
    cin>>selection;
    return toupper(selection);
}
void handle_display(const vector<int> &numbers){
    if(numbers.size()==0)
        cout<<"\n[] list is empty"<<endl;
    else
        display_list(numbers);
}
    void display_list(const vector<int> &numbers){
        cout<<"\n[ ";
        for(auto i:numbers){
            cout<<i<<" ";
        }
        cout<<"]"<<endl;
}
void handle_add(vector<int> &numbers){
    int num_to_add {};
    cout<<"Enter An Integer to Add to The List : ";
    cin>>num_to_add;
    numbers.push_back(num_to_add);
    cout<<num_to_add<<" is Added."<<endl;
}
void handle_mean(const vector<int> &numbers){
    if(numbers.size()==0)
        cout<<"Unable to calculate mean - list is empty"<<endl;
    else
        cout<<"The Mean is "<<calculate_mean(numbers);
}
    double calculate_mean(const vector<int> &numbers){
    int total{};
    for(auto i:numbers){
        total+=i;
    }
    return ((double)total/numbers.size());
}
int handle_smallest(vector<int> numbers){
    int smallest=numbers.at(0);
    for(auto i:numbers){
        if(i<smallest){
            smallest=i;
        }
    }
    return smallest;
}
int handle_largest(vector<int> numbers){
   int largest=numbers.at(0);
    for(auto i:numbers){
        if(i>largest)
            largest=i;
    }
    return largest; 
}


void handle_find(const vector<int> numbers){
    int findNumber{};
    cout<<"Please Enter A Number to Find : ";
    cin>>findNumber;
    if(find(numbers,findNumber))
        cout<<findNumber<<" is Found.";
    else
        cout<<findNumber<<" is Not Found."<<endl;
}
    bool find(const vector<int> numbers,int target){
        for(auto i:numbers){
            if(i==target)
                return true;
        }
        return false;
    }
void handle_quit(){
    cout<<"Good Bye...";
}
void handle_unknown(){
    cout<<"Unknown Selection ....";
}

