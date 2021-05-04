#ifndef MENUWINDOW_H
#define MENUWINDOW_H

#include <QWidget>
#include <viewprofilewindow.h>
#include <groupchatmenu.h>
#include <contactswindow.h>
#include <newmessagewindow.h>
#include <QTimer>

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
    GroupChatMenu _GCForm;
    ContactsWindow _ConForm;
    NewMessageWindow _NMForm;
    QTimer *timer;

signals:
    void LogoutClicked();
    void ProfileInfoClicked();

private slots:
    void on_LogoutButton_clicked();
    //wrong thing, we're creating new stack, not going back to old
    void on_ViewProfileButton_clicked();
    void on_GroupChatButton_clicked();
    void on_ContactsButton_clicked();
    void on_NewMessageButton_clicked();
    void moveBackMenu();
    void updateTextFile(QString Username);

/*public slots:
    void TimeoutOfSession();*/
};

#endif // MENUWINDOW_H
