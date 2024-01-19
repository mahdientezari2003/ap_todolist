#ifndef TEAM_MANAGEMENT_H
#define TEAM_MANAGEMENT_H

#include <QMainWindow>

namespace Ui {
class team_management;
}

class team_management : public QMainWindow
{
    Q_OBJECT

public:
    explicit team_management(QWidget *parent = nullptr);
    ~team_management();

private:
    Ui::team_management *ui;
};

#endif // TEAM_MANAGEMENT_H
