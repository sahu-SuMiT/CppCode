#include <vector>
begin() – Returns an iterator pointing to the first element in the vector
end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector
rbegin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
cbegin() – Returns a constant iterator pointing to the first element in the vector.
cend() – Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.
crbegin() – Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)

size() – Returns the number of elements in the vector.
max_size() – Returns the maximum number of elements that the vector can hold.
capacity() – Returns the size of the storage space currently allocated to the vector expressed as number of elements.
resize(n) – Resizes the container so that it contains ‘n’ elements.
empty() – Returns whether the container is empty.
shrink_to_fit() – Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.
reserve() – Requests that the vector capacity be at least enough to contain n elements.

reference operator [g] – Returns a reference to the element at position ‘g’ in the vector
at(g) – Returns a reference to the element at position ‘g’ in the vector
front() – Returns a reference to the first element in the vector
back() – Returns a reference to the last element in the vector
data() – Returns a direct pointer to the memory array used internally by the vector to store its owned elements.

assign() – It assigns new value to the vector elements by replacing old ones
push_back() – It push the elements into a vector from the back
pop_back() – It is used to pop or remove elements from a vector from the back.
insert() – It inserts new elements before the element at the specified position
erase() – It is used to remove elements from a container from the specified position or range.
swap() – It is used to swap the contents of one vector with another vector of same type. Sizes may differ.
clear() – It is used to remove all the elements of the vector container
emplace() – It extends the container by inserting new element at position
emplace_back() – It is used to insert a new element into the vector container, the new element is added to the end of the vector



#include <iostream>
#include <vector>
using namespace std;
class Student{
private:
    int id;
    string name;
    vector<float> marks;int n;
public: 
    void read(){
        cout<<"Student_Id: ";cin>>id; getline(cin,name);
        cout<<"Name: ";getline(cin, name);
        
        cout<<"Enter no of subjects: ";cin>>n;
        marks.resize(n);
        cout<<"Enter all the marks\n";
        for(int i=0;i<n;i++){
            cin>>marks[i];
        }
    }
    std::string get_name(){
        return name;
    };
    void display(){
        cout<<"[Student_Id: "<<id<<"] [Name: "<<name<<"] [Marks: ";
        for(int i=0;i<n;i++){
            printf("%.2f ",marks[i]);
        }
        cout<<"]\n";
        }
    vector<float> getMarks() {
        return marks;
    }
    int getNumberOfSubjects() {
        return n;
    }
};
vector<Student> addstud(vector<Student> &students){
    Student newStudent;
    newStudent.read();
    students.push_back(newStudent);
    return students;
}
float average_grade_pass_by_value(vector<float> marks, int n) {
    float sum = 0;
    for(int i=0;i<n;i++){
        sum += marks[i];
    }
    return sum/n;
}
void average_grade_pass_by_reference(const vector<float>& marks, int n, float& average) {
    float sum = 0;
    for(int i=0;i<n;i++){
        sum += marks[i];
    }
    average = sum/n;
}
int main() {
    float average_grade;
    vector<Student> students;
    int n;
    cout<<"students.max_size():"<<students.max_size()<<"\n";
    cout<<"students.capacity():"<<students.capacity()<<"\n";
    cout<<"Enter no of students: ";cin>>n;
    for(int i=0;i<n;i++){
    printf("\nStudent %d details\n",i+1);
    students=addstud(students);
    students[i].display();
    }
    cout<<"\nFinal Display of Student details\n";
    for(int i=0;i<n;i++){
    students[i].display();
    }
    cout<<"students.capacity():"<<students.capacity()<<"\n";

    cout<<"\naverage grade by value\n";
    for(int i=0;i<n;i++){
        average_grade=average_grade_pass_by_value(students[i].getMarks(),students[i].getNumberOfSubjects());
        cout<<students[i].get_name()<<" average grade: "<<average_grade<<"\n";
    }
    cout<<"\naverage grade by reference\n";
    for(int i=0;i<n;i++){
        average_grade_pass_by_reference(students[i].getMarks(),students[i].getNumberOfSubjects(),average_grade);
        cout<<students[i].get_name()<<" average grade: "<<average_grade<<"\n";
    }
   
    return 0;    
}
