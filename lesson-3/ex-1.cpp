#include <iostream>

class movie {
private:
    std::string title, director, genre;
    int year;
    float imdb_rating, hours;
public:
    float runtime;
    movie(std::string title, int year, std::string director, std::string genre, float imdb_rating, float runtime) {
        this->title = title;
        this->year = year;
        this->director = director;
        this->genre = genre;
        this->imdb_rating = imdb_rating;
        this->runtime = runtime;
    }

    float runtime_in_hours() {
        hours = runtime / 60;
        return hours;
    }

    void print_details() {

        std::cout << "Title: " << title << std::endl << "Year: " << year << std::endl << "Director: " << director
                  << std::endl << "Genre: " << genre << std::endl << "Imdb rating: " << imdb_rating << std::endl
                  << "Runtime: " << runtime << std::endl;
    }

};

int main() {
    movie movie1("Goodfellas", 1990, "Martin Scorsese", "fictional", 8.7, 150);
    movie1.print_details();
    std::cout<<"Runtime in hours: "<<movie1.runtime_in_hours()<<std::endl;
    return 0;
}
