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

signals:
    void backClicked();

private slots:
    void on_VPBackButton_clicked();

    void on_ApplyButton_clicked();

    void on_DeleteAccButton_clicked();

    void on_VPRevealDataButton_clicked();

    void updateTextFile(QString Username, QString Operation);

private:
    Ui::ViewProfileWindow *ui;

};

#endif // VIEWPROFILEWINDOW_H
