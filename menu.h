#ifndef MENU_H
#define MENU_H

#include <QWidget>
#include <QtSql/QtSql>
#include <QMessageBox>

namespace Ui {
class menu;
}

class menu : public QWidget
{
    Q_OBJECT

public:
    explicit menu(QWidget *parent = nullptr);
    ~menu();
    bool connectDB();
    QSqlDatabase db;
    int id_habit;
    QMessageBox msgBox;

signals:

    void Today_clicked();

    void menuTodayButton();

private slots:

    void on_menuToday_clicked();

    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_menuButton2_clicked();

    void on_pushButton_5_clicked();

    void on_backAchieve_clicked();

    void on_backNotificat_clicked();

    void on_backSettings_clicked();

private:
    Ui::menu *ui;






};

#endif // MENU_H
