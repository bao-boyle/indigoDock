#include "indigopanelhandle.h"


/* TODO:
 *
 * - add functional close button
 *
 */

IndigoPanelHandle::IndigoPanelHandle(QWidget *parent) :
    QWidget(parent)
{

    setAutoFillBackground( true );

    lblTitle = new QLabel("");
    btnClose = new QPushButton("");
    btnClose->setFixedSize(16,16);

    // Main LayoutContainer
    QHBoxLayout * mainLayout = new QHBoxLayout;
    mainLayout->setMargin(4);
    setLayout(mainLayout);

    mainLayout->addWidget(lblTitle);
    mainLayout->addStretch(1);
    mainLayout->addWidget(btnClose);

    // Actions
    connect(btnClose, SIGNAL (clicked()), parent, SLOT (hide()));


}

void IndigoPanelHandle::setTitle(const QString &title){
    lblTitle->setText(title);
}

void IndigoPanelHandle::setBackgroundColor(const QColor &bgColor){
     palette.setColor( QPalette::Background, bgColor );
     setPalette( palette );
}