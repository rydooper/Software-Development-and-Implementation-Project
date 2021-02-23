#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QMainWindow>
#include <menuwindow.h>
#include <registerwindow.h>

QT_BEGIN_NAMESPACE
namespace Ui { class LoginWindow; }
QT_END_NAMESPACE

class LoginWindow : public QMainWindow
{
    Q_OBJECT

public:
    LoginWindow(QWidget *parent = nullptr);
    ~LoginWindow();

private slots:
    void on_LoginButton_clicked();

    void on_RegisterButton_clicked();

    void moveBackLogin();

    void on_ExitButton_clicked();

    void on_ClearButton_clicked();

private:
    Ui::LoginWindow *ui;
    RegisterWindow _RegForm;
    MenuWindow _MenuForm;
};
#endif // LOGINWINDOW_H
