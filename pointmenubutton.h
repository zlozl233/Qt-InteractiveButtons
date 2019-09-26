#ifndef POINTMENUBUTTON_H
#define POINTMENUBUTTON_H

#include <QWidget>
#include <QObject>
#include <QtMath>
#include "interactivebuttonbase.h"

#define ANI_STEP_3 40

class PointMenuButton : public InteractiveButtonBase
{
public:
    PointMenuButton(QWidget* parent = nullptr);

protected:
    void mousePressEvent(QMouseEvent *event) override;
    void paintEvent(QPaintEvent*event) override;

    void slotClicked() override;

private:
    int radius;
};

#endif // POINTMENUBUTTON_H
