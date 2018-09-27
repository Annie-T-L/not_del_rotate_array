#include <QCoreApplication>
#include <QDebug>
#include <QtCore>
#include <QtMath>

class SomeMy
{
public:
    void rotArray(int n1, int n2)
    {
        QVector<int>ve1(n1);
        for(int i1=0;i1<n1;i1++)
        {   ve1[i1] = qrand()%20;   }
        int si1= n1;
        QVector<int >ve2(n2);
        QVector<int>ve3(n1-n2);
        QVector<int>rve1(n1);
        for(int i2=0;i2<n2;i2++)
        {
            ve2[i2]= ve1[si1-n2+i2];
        }
        for(int i3=0;i3<n1-n2;i3++)
        {
            ve3[i3]= ve1[i3];
        }
        rve1 = ve2+ve3;
        qDebug() << ve1 << "\n" << ve2 << ve3 << " res = " << rve1;

}


};


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qsrand(time(NULL));
    SomeMy s1;

    s1.rotArray(20,5);

    for(int i1=1;i1<100;i1++)
    {
//        int n1=qrand()%100;
//        int n2=qrand()%90;
    }
    return a.exec();
}
