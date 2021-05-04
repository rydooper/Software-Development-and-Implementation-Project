#ifndef GROUPCHATWINDOW_H
#define GROUPCHATWINDOW_H

#include <QWidget>
#include "groupchatmenu.h"

namespace Ui {
class GroupChatWindow;
}

class GroupChatWindow : public QWidget
{
    Q_OBJECT

public:
    explicit GroupChatWindow(QWidget *parent = nullptr);
    ~GroupChatWindow();

signals:
    void backClicked();
    void sendGCClicked();

private slots:
    void on_GCClearButton_clicked();

    void on_GCInviteUsersButton_clicked();

    void on_GCBackButton_clicked();

private:
    Ui::GroupChatWindow *ui;
};

#endif // GROUPCHATWINDOW_H
