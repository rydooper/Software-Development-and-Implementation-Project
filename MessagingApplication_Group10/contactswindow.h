#ifndef CONTACTSWINDOW_H
#define CONTACTSWINDOW_H

#include <QWidget>
#include "groupchatwindow.h"

namespace Ui {
class ContactsWindow;
}

class ContactsWindow : public QWidget
{
    Q_OBJECT

public:
    explicit ContactsWindow(QWidget *parent = nullptr);
    ~ContactsWindow();

signals:
    void backClicked();
    void MGCClicked();

private slots:
    void on_ContactsBackButton_clicked();

    void on_SendGMssgButton_clicked();

    void openGroupMessageForm();

    void backToContacts();

private:
    Ui::ContactsWindow *ui;
    GroupChatWindow _GCForm;
};

#endif // CONTACTSWINDOW_H
