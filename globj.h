#ifndef GLobj_H
#define GLobj_H

#include <QtOpenGL>
#include <QtGui>
#include <QtCore>
#include <QObject>

class GLobj : public QGLWidget
{
    Q_OBJECT

public:
    GLobj(QWidget *parent = 0);
    ~GLobj();

protected:
    void initializeGL();
    void paintGL();
    void resizeGL(int w, int h);

    void ngon(int n);
};

#endif
