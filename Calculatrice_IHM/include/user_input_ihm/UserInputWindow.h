#ifndef USER_INPUT_WINDOW_H
#define USER_INPUT_WINDOW_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class UserInputWindow; }
QT_END_NAMESPACE

class UserInputWindow : public QWidget
{
    Q_OBJECT

public:
    UserInputWindow(QWidget *parent = nullptr);
    ~UserInputWindow();

     void refreshExprDisplay();

private:
    Ui::UserInputWindow *ui;
    bool _npiMode;

private slots:
    void NumPressed();
    void MathButtonPressed();
    void EqualButton();
    void ClearButton();
    void AddVirgule();
    void NpiSwitchButton();
};


#endif // USER_INPUT_WINDOW_H
