using namespace std;

class Distancia{
    private:
        float x1, x2, y1, y2;
    public:
        Distancia();
        void getA(float a);
        float setA();
        void getB(float b);
        float setB();
        void getC(float c);
        float setC();
        void getD(float d);
        float setD();

        void calculo();
};