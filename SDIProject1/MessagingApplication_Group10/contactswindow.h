#ifndef CONTACTSWINDOW_H
#define CONTACTSWINDOW_H

#include <QWidget>

namespace Ui {
class ContactsWindow;
}

class ContactsWindow : public QWidget
{
    Q_OBJECT

public:
    explicit ContactsWindow(QWidget *parent = nullptr);
    ~ContactsWindow();

private:
    Ui::ContactsWindow *ui;
};

#endif // CONTACTSWINDOW_H
