#ifndef NEWMESSAGEWINDOW_H
#define NEWMESSAGEWINDOW_H

#include <QWidget>
#include <QMqttClient>

namespace Ui {
class NewMessageWindow;
}

class NewMessageWindow : public QWidget
{
    Q_OBJECT

public:
    explicit NewMessageWindow(QWidget *parent = nullptr);
    ~NewMessageWindow();

signals:
    void backClicked();

private slots:
    void updateFile(QString message, QString topic);

    void on_NWBackButton_clicked();

    void on_NWClearButton_clicked();

    void on_NWSendButton_clicked();

    void on_NWSubscribeButton_clicked();

    void ConnectionState();

    void on_NWSendURL_clicked();

    void on_NWDisconnect_clicked();

    void on_NWEmoji_clicked();

private:
    Ui::NewMessageWindow *ui;
    QMqttClient *Client;
};

#endif // NEWMESSAGEWINDOW_H
