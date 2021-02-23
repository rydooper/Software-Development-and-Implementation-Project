#ifndef GROUPCHATMENU_H
#define GROUPCHATMENU_H

#include <QWidget>

namespace Ui {
class GroupChatMenu;
}

class GroupChatMenu : public QWidget
{
    Q_OBJECT

public:
    explicit GroupChatMenu(QWidget *parent = nullptr);
    ~GroupChatMenu();

private:
    Ui::GroupChatMenu *ui;
};

#endif // GROUPCHATMENU_H
