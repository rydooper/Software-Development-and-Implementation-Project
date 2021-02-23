#ifndef MENUWINDOW_H
#define MENUWINDOW_H

#include <QWidget>

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

signals:
    void LogoutClicked();

private slots:
    void on_LogoutButton_clicked();
};

#endif // MENUWINDOW_H
