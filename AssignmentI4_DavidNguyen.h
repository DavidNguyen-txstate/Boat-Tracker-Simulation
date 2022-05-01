// Assignment I4: Due July 3
// Written by: David Nguyen
// GUI, Summer 2021, Dan Tamir
#ifndef ASSIGNMENTI4_DAVIDNGUYEN_H
#define ASSIGNMENTI4_DAVIDNGUYEN_H

#include <QMainWindow>
#include <QApplication>
#include <QAction>
#include <QMenu>
#include <QLabel>
#include <QLCDNumber>
#include <QTextEdit>
#include <QSlider>
#include <QSpinBox>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void updatePosition(QSpinBox *boatCoordinateX, QSpinBox *boatCoordinateY, int updatedBoatXCoordinate, int updatedBoatYCoordinate);
    void checkAndUpdateStatus(QSpinBox *boatCoordinateX, QSpinBox *boatCoordinateY, QString &region);
    void plotScreen(QString simulationFileName);

public slots:
    void simulationEngine();

private slots:
    void open();
    void save();
    void quit();
    void about();
    void aboutQt();

protected:
    virtual void mousePressEvent(QMouseEvent *event) override;

private:
    Ui::MainWindow *ui;
    void createMenus();
    void createActions();
    QMenu *fileMenu;
    QMenu *helpMenu;
    QMenu *quitMenu;
    QAction *openAction;
    QAction *saveAction;
    QAction *quitAction;
    QAction *aboutAction;
    QAction *aboutQTAction;
    QLabel *infoLabel;
    QLabel *statusLabel;
    QString *region;
    QLCDNumber *updatedNumber;
    QTextEdit *textEdit;
    QLCDNumber *numberOfClicksDisplay;
    QSlider *maximumTics;
    QSpinBox *firstBoatCoordinateX;
    QSpinBox *firstBoatCoordinateY;
    QSpinBox *secondBoatCoordinateX;
    QSpinBox *secondBoatCoordinateY;
    QSpinBox *thirdBoatCoordinateX;
    QSpinBox *thirdBoatCoordinateY;
    QSpinBox *gridX;
    QSpinBox *gridY;
    int counter = 0;
    int initBoatXCoordinateX;
    int initBoatXCoordinateY;
    int initBoatYCoordinateX;
    int initBoatYCoordinateY;
    int currentTics = 0;
};
#endif // ASSIGNMENTI4_DAVIDNGUYEN_H
