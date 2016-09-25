#ifndef PONTO_H
#define PONTO_H


class ponto
{
    float x, y;
public:
    ponto(float _x=0, float _y=0);

    void setX(float _x);

    void setY(float _y);

    void setXY(float _x , float _y);

    float getX(void);

    float getY(void);

    ponto add(ponto P1 );

    ponto sub(ponto P1);

    float norma(void);

    void translada(float a, float b);

    void imprime(void);
};

#endif // PONTO_H
