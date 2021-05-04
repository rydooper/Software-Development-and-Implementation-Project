#ifndef GROUPCHATMENU_H
#define GROUPCHATMENU_H

#include <QWidget>
#include "managegroupchats.h"

namespace Ui {
class GroupChatMenu;
}

class GroupChatMenu : public QWidget
{
    Q_OBJECT

public:
    explicit GroupChatMenu(QWidget *parent = nullptr);
    ~GroupChatMenu();

signals:
    void backClicked();

private slots:
    void on_GCMenuBackButton_clicked();

    void on_GCMenu_ViewGCData_clicked();

    void on_GCMenu_ManageGC_clicked();

    void movebackGCMenu();

    void openMGC();

private:
    Ui::GroupChatMenu *ui;
    ManageGroupChats _MGCForm;
};

#endif // GROUPCHATMENU_H
