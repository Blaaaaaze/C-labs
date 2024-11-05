#include <iostream>

class Distance {
private:
    int feet;
    float inches;
    const float MTF;
public:
    Distance() : feet (0), inches(0.0), MTF(3.280833F) {}
    Distance(int ft, float in) : feet(ft), inches(in), MTF(3.280833F) {}
    Distance(float meters) : MTF(3.280833F) {
        float fitfeet = MTF * meters;
        feet = int(fitfeet);
        inches = 12 * (fitfeet - feet);
    }
    void getdist() {
        std::cout << "\nВведите число футов: ";
        std::cin >> feet;
        std::cout << "\nВведите число дюймов: ";
        std::cin >> inches;
    }

    void showdist() {
        std::cout << feet << "\'-" << inches << "\"\n";
    }

    operator float() const {
        float fracfeet = inches / 12;
        fracfeet += static_cast<float>(feet);
        return fracfeet / MTF;
    }

    Distance operator+ (const Distance& d2) const;
    friend float operator+ (const float m2, const Distance& d2);
    friend Distance operator+ (const Distance& d2, const float m2);
    Distance operator- (const Distance& d2) const;

    
    
    friend std::ostream& operator<< (std::ostream& out, const Distance& dist);
    
};

Distance Distance::operator+ (const Distance& d2) const {
    int f = feet + d2.feet;
    float i = inches + d2.inches;
    if (i >= 12.0) {
        i -= 12.0;
        f++;
    }
    return Distance(f, i);
}

Distance operator+ (const Distance& d2, const float m2) {
    Distance d3(m2);
    return d2 + d3;
}

float operator+ (const float m2, const Distance& d) {
    return float(d) + m2;
}

Distance Distance::operator- (const Distance& d2) const {
    int f = feet - d2.feet;
    float i = inches - d2.inches;

    if ((i < 0) && (f != 0)) {
        f -= 1;
        i += 12;
    }
    else if (((i < 0) && (f == 0)) || (f < 0)) {
        f = 0;
        i = 0;
    }
    return Distance(f, i);
}

Distance operator- (const Distance& d2, const float m2) {
    Distance d3(m2);
    return d2 - d3;
}

Distance operator- (const float m2, const Distance& d2) {
    Distance d3(m2);
    return d3 - d2;
}

std::ostream& operator<< (std::ostream& out, const Distance& dist) {
    out << dist.feet << "\'-" << dist.inches << "\"\n";
    return out;
}

int main()
{

    system("chcp 1251");
    Distance dist2, dist3, dist4, dist5;

    Distance dist1 = 2.35F;
    dist2.getdist();

    float mtrs;
    mtrs = static_cast<float>(dist1);
    mtrs = dist2;
    dist3 = dist2 + 2.8F;

    /*dist3 = dist1 + dist2;
    dist4 = dist1 + dist2 + dist3;
    dist5 = dist1 - dist2;*/
    
    std::cout << "\ndist1: " << dist1;
    std::cout << "\ndist2: " << dist2;
    /*std::cout << "\ndist3: " << dist3;
    std::cout << "\ndist4: " << dist4;
    std::cout << "\ndist5: " << dist5;*/
    return 0;
}


