using namespace std;

class Equ_seg_grau{
    private:
        float a, b, c;
    public:
        Equ_seg_grau();
        void getA(float a);
        float setA();
        void getB(float a);
        float setB();
        void getC(float c);
        float setC();

        void calculo();
};