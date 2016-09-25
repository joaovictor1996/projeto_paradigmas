#ifndef PONTO_H
#define PONTO_H


class ponto
{
    float x, y;
public:
    ponto(float _x=0, float _y=0);// construtor

    void setX(float _x); //coordenada x

    void setY(float _y); //cordenada y

    void setXY(float _x , float _y); // define o ponto

    float getX(void); //retorna x

    float getY(void); //retorna y

    ponto add(ponto P1 ); // adição de pontos

    ponto sub(ponto P1); //subtração de pontos

    float norma(void); // modulo

    void translada(float a, float b); //translada move o ponto

    void imprime(void); // imprime x e y
};

#endif // PONTO_H
