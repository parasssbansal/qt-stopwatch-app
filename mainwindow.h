#ifndef MAINWINDOW_H
#define MAINWINDOW_H
# include <QTimer>

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    QTimer *timer;
    int millisecond;
private slots:
    void startTimer();
    void stopTimer();
    void resetTimer();
    void updateTime();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
