#ifndef MENUWINDOW_H
#define MENUWINDOW_H

#include <QWidget>
#include <viewprofilewindow.h>


namespace Ui {
class MenuWindow;
}

class MenuWindow : public QWidget
{
    Q_OBJECT

public:
    explicit MenuWindow(QWidget *parent = nullptr);
    ~MenuWindow();

private:
    Ui::MenuWindow *ui;
    ViewProfileWindow _VPForm;

signals:
    void LogoutClicked();
    void ProfileInfoClicked();

private slots:
    void on_LogoutButton_clicked();
    //void moveProfileInfo();
    //wrong thing, we're creating new stack, not going back to old
    void on_ViewProfileButton_clicked();
};

#endif // MENUWINDOW_H
