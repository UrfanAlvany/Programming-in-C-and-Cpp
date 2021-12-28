class Complex{
 
private:
int real;
int imagine;
 
    public:
        Complex();
        Complex(int real,int imagine=0);
        Complex(const Complex &c);
        void setReal(int real);
        void setImagine(int imagine);
        int getReal();
        int getImagine();
        Complex conjugate();
        Complex add(Complex c);
        Complex subtract(Complex s);
        Complex multiply(Complex m);
         void print();
 
 
};
