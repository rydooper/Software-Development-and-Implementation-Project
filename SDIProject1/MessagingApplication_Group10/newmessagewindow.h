#ifndef NEWMESSAGEWINDOW_H
#define NEWMESSAGEWINDOW_H

#include <QWidget>

namespace Ui {
class NewMessageWindow;
}

class NewMessageWindow : public QWidget
{
    Q_OBJECT

public:
    explicit NewMessageWindow(QWidget *parent = nullptr);
    ~NewMessageWindow();

private:
    Ui::NewMessageWindow *ui;
};

#endif // NEWMESSAGEWINDOW_H
