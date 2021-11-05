#include "calculator.h"
    #include <QApplication>
    
    Calculator::Calculator(QWidget *parent)
        : QWidget(parent)
    {
        createWidgets();
        placeWidget();
    }
    Calculator::~Calculator()
    {
        delete display;
        delete layout;
        delete buttonsLayout;
    }
    void Calculator::createWidgets()
    {
        layout = new QVBoxLayout();
        layout->setSpacing(2);
        buttonsLayout = new QGridLayout;
    
        for(int i=0; i < 10; i++)
        {
            digits.push_back(new QPushButton(QString::number(i)));
            digits.back()->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
            digits.back()->resize(sizeHint().width(), sizeHint().height());
        }
    
        enter = new QPushButton("Enter",this);
        enter->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        enter->resize(sizeHint().width(), sizeHint().height());
    
         display = new QLCDNumber(6);
        display->setMinimumHeight(80);
    }
    void Calculator::placeWidget()
    {
        layout->addWidget(display);
        layout->addLayout(buttonsLayout);
    
        for(int i=1; i <10; ++i)
        buttonsLayout->addWidget(digits[i], (9-i)/3  , (i-1)%3 );
        buttonsLayout->addWidget(digits[0], 3, 0);
        buttonsLayout->addWidget(enter, 3, 1, 1,2);
    
        setLayout(layout);
    }
    
