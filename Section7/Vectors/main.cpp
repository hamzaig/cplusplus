#include<iostream>
#include<vector>
using namespace std;

int main(){
//    vector <char> vowels; //empty
//    vector <char> vowels (5); //5 initilized 0
//    vector <char> vowels = {'a','e','i','o','u'};
//    cout<<vowels[0]<<endl;
//    cout<<vowels[1]<<endl;
        
//    vector<int> test_scores (3); //3 element all initilized to 0
//    vector<int> test_scores (3,100);//3 elements all initilized to 100

//    vector<int> test_scores {100,98,89};
//    
//    cout<<"\nTest Scores Using array syntax"<<endl;
//    cout<<test_scores[0]<<endl;
//    cout<<test_scores[1]<<endl;
//    cout<<test_scores[2]<<endl;
//    
//    cout<<"\nTest Scores Using array vector"<<endl;
//    cout<<test_scores.at(0)<<endl;
//    cout<<test_scores.at(1)<<endl;
//    cout<<test_scores.at(2)<<endl;
//    
//    cout<<"There are "<<test_scores.size()<<" Scores in the vector"<<endl;
//    
//    
//    cout<<"Enter 3 test scores"<<endl;
//    cin>>test_scores.at(0);
//    cin>>test_scores.at(1);
//    cin>>test_scores.at(2);
//    
//    cout<<"\nUpdated Test Scores Using array vector"<<endl;
//    cout<<test_scores.at(0)<<endl;
//    cout<<test_scores.at(1)<<endl;
//    cout<<test_scores.at(2)<<endl;
//    
//    
//    
//    
//    cout<<"Enter a test score to add to vector";
//    
//    int score_to_add {0};
//    cin>>score_to_add;
//    
//    test_scores.push_back(score_to_add);
//    
//    cout<<"Enter one more test score to add to vector";
//    
//    cin>>score_to_add;
//    
//    test_scores.push_back(score_to_add);
//    
//    cout<<"\nTest Scores are now"<<endl;
//    cout<<test_scores.at(0)<<endl;
//    cout<<test_scores.at(1)<<endl;
//    cout<<test_scores.at(2)<<endl;
//    cout<<test_scores.at(3)<<endl;
//    cout<<test_scores.at(4)<<endl;
//    
//    cout<<"There are "<<test_scores.size()<<" Scores in the vector"<<endl;

//    cout<<"This should cause an exception!!"<<test_scores.at(10)<<endl;

    
    vector<vector<int>> movie_ratings 
    {
        {1,2,3,4},
        {1,2,3,4},
        {1,2,3,4}
    };
    
    cout<<"Here are the movie rating for reviewer Number 1 using array syntax"<<endl;
    cout<<movie_ratings[0][0]<<endl;
    cout<<movie_ratings[0][1]<<endl;
    cout<<movie_ratings[0][2]<<endl;
    cout<<movie_ratings[0][3]<<endl;
//    
    cout<<"Here are the movie rating for reviewer Number 1 using vector syntax"<<endl;
    cout<<movie_ratings.at(0).at(0)<<endl;
    cout<<movie_ratings.at(0).at(1)<<endl;
    cout<<movie_ratings.at(0).at(2)<<endl;
    cout<<movie_ratings.at(0).at(3)<<endl;
    
        
        

    cout<<endl;
}