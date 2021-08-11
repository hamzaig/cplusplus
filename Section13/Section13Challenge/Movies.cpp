#include "Movies.hpp"
#include <string>
using namespace std;

Movies::Movies(){
}

Movies::~Movies(){
}

bool Movies::add_movie(string name,string rating,int watched){
    for(const Movie &movie : movies){
        if(movie.get_name()==name){
            return false;
        }
    }
    Movie temp {name,rating,watched};
    movies.push_back(temp);
    return true;
}

bool Movies::movie_increment(string name){
    for(Movie &movie : movies){
        if(movie.get_name()==name){
            movie.increment_watched();
            return true;
        }
    }
    return false;
}

