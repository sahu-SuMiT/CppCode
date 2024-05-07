const PI = 3.1415;

int x=10;//use this by ::x
namespace first{
int x=1; //use this by first::x
}
namespace second{
int x=2;//use this by second::x
}

typedef std::string text_t;
text_t firstName = "Bro";
text_t secondName = "Code";

using text_t = std::string;
using number_t = int;
text_t firstName = "Bro";
text_t secondName = "Code";
number_t a_variable = 10;

STRINGS
std::getline(std::cin            , name    ); 
std::getline(std::cin >> std::ws , name    ); std::ws ignores initial initial whitespaces, tabs and newline character
std::getline(std::cin >> std::ws , name,'!'); 
name.empty();
name.length();
name.at(index_of_the_string); //pass index
name.append(string_inside);
name.insert(string_inside);
name.erase(start_index, length_of_the_part); 
name.find('a'); 

RANDOM
srand(time(NULL));
int a = rand()%6+1;

std::fill(container_name,container_name+size,value);

TEMPLATES
template <typename T, typename U>
auto max(T x, U y){
  return (x>y)?x:y;
}

ENUMS
paired named-integer constants
enum Day {sunday = 0, monday = 1, tuesday = 2, wednesday = 3, thursday = 4, friday = 5, saturday = 6};
enum Flavor {vanilla, chocolate, strawberry,mint};(default integer assignment as 0,1,2,3...)

