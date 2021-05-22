#ifndef KOMMIVOYAZHER_H
#define KOMMIVOYAZHER_H

#include <QMainWindow>
#include <QPainter>
#include <QtMath>

QT_BEGIN_NAMESPACE
namespace Ui { class Kommivoyazher; }
QT_END_NAMESPACE

class Kommivoyazher : public QMainWindow
{
    Q_OBJECT

public:
    Kommivoyazher(QWidget *parent = nullptr);
    ~Kommivoyazher();

private:
    Ui::Kommivoyazher *ui;

protected:
    void paintEvent(QPaintEvent*) override;
private slots:
    void on_pushButton_clicked();
};
#endif // KOMMIVOYAZHER_H
