#ifndef MANAGEGROUPCHATS_H
#define MANAGEGROUPCHATS_H

#include <QWidget>

namespace Ui {
class ManageGroupChats;
}

class ManageGroupChats : public QWidget
{
    Q_OBJECT

public:
    explicit ManageGroupChats(QWidget *parent = nullptr);
    ~ManageGroupChats();

signals:
    void backClicked();
    void MGCClicked();

private slots:
    void on_MGCBackButton_clicked();

    void on_MGCPromoteUserButton_clicked();

    void on_MGCDemoteUserButton_clicked();

    bool EmptyComboBoxes();

    void on_MGCConfirmGC_clicked();

    void on_MGCBeginManagement_clicked();

    void UpdateGCTextFile(QString TargetTopic, QString TargetUser, QString Operation);

private:
    Ui::ManageGroupChats *ui;
};

#endif // MANAGEGROUPCHATS_H
