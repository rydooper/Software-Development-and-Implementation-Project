#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QMainWindow>
#include <menuwindow.h>
#include <registerwindow.h>
#include <QTimer>

extern QString LoggedInUser;

QT_BEGIN_NAMESPACE
namespace Ui { class LoginWindow; }
QT_END_NAMESPACE

class LoginWindow : public QMainWindow
{
    Q_OBJECT

signals:
    void LogoutClicked();

public slots:
    void TimeoutOfSession();

public:
    LoginWindow(QWidget *parent = nullptr);
    ~LoginWindow();
    QString Username;

private slots:
    void on_LoginButton_clicked();

    void on_RegisterButton_clicked();

    void moveBackLogin();

    void on_ExitButton_clicked();

    void on_ClearButton_clicked();

    void updateTextFile(QString Username, QString Password, QString Forename, QString Surname, QString Email);

private:
    Ui::LoginWindow *ui;
    RegisterWindow _RegForm;
    MenuWindow _MenuForm;
    QTimer *timer; //Adapted from the YouTube video "Qt Tutorials For Beginners 24 - QTimer" by ProgrammingKnowledge (https://www.youtube.com/watch?v=E4L4IjAR-Ww)

};
#endif // LOGINWINDOW_H
