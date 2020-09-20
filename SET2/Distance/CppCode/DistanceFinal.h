class Distance{
int m_feets, m_inches;
public:
    Distance();
    Distance(int x, int y);
    Distance operator+(const Distance &);
    Distance operator-(const Distance &);
    Distance operator+(int );
    Distance operator-(int );
    Distance& operator++();
    Distance& operator++(int );
    void operator==(int);
    void operator<(int);
    void operator>(int);
    void display();
};
