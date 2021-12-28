class Vector
{
private:
    double *vsize;
    int num;
public:
    Vector();
    Vector(double*);
    Vector(const Vector&);
    ~Vector();
    void print();
    void setSize(double*);
    void setN(int);
    double getSize(int);
    Vector add(const Vector&);
    double norm();
    Vector diff(const Vector&);
    double pro(const Vector&);
};