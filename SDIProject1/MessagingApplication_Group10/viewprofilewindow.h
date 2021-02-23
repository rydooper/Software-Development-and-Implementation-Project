#ifndef VIEWPROFILEWINDOW_H
#define VIEWPROFILEWINDOW_H

#include <QWidget>

namespace Ui {
class ViewProfileWindow;
}

class ViewProfileWindow : public QWidget
{
    Q_OBJECT

public:
    explicit ViewProfileWindow(QWidget *parent = nullptr);
    ~ViewProfileWindow();

private:
    Ui::ViewProfileWindow *ui;
};

#endif // VIEWPROFILEWINDOW_H
