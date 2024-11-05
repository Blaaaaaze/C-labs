#include <iostream>
#include <string>
#include <vector>

struct StudentGrade {
    std::string name;
    char grade;
};

class GradeMap {
private:
    std::vector<StudentGrade> m_map;
public:
    GradeMap() {}
    char& operator[] (const std::string &name) {
        for (auto& ref : m_map) {
            if (ref.name == name)
                return ref.grade;
        }

        StudentGrade temp{ name, ' ' };
        m_map.push_back(temp);
        return m_map.back().grade;
    }
};

int main()
{
    system("chcp 1251");

    GradeMap grades;
    grades["John"] = 'A';
    grades["Martin"] = 'B';
    std::cout << "John has grade of " << grades["John"] << std::endl;
    std::cout << "Martin has a grade of " << grades["Martin"] << std::endl;

    std::cout << "New name and grade? " << std::endl;
    std::string name;
    char grade;
    std::cin >> name >> grade;
    grades[name] = grade;
    std::cout << name << " has a grade of " << grades[name] << std::endl;

    return 0;

}
