#include "system.h"
#include <QDebug>
#include <QTextStream>

System::System(QString nom): m_nom(nom)
{

}

void System::ajouteplanete(planete *p)
{
    m_planetes.append(p);
    qDebug()<<"Tailles : "<<m_planetes.size();
}

QString System::tostring()
{
    QString res;
    QTextStream buf (&res);
    buf<<"System "<<m_nom<<" ("<<m_planetes.size()<<" )";
    foreach (planete *p, m_planetes) {
     buf<<"\n " <<p->toString();
    }
    return res;
}

planete *System::laPlusEloignee()
{
 planete *ref = m_planetes.at(0);
 for (int i=1; i<m_planetes.size(); i++){
        if(m_planetes.at(i)->distance()>ref->distance()){
            ref = m_planetes.at(i);
        }
 }
 return ref;
}
