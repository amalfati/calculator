  #ifndef CALCULATOR_H
        #define CALCULATOR_H
                        
        #include <QMainWindow>
        #include <QGridLayout>
        #include <QVector>
        #include <QPushButton>
        #include <QLCDNumber>
                        
         class Calculator : public QWidget
         {
         Q_OBJECT
         public:
           Calculator(QWidget *parent = nullptr);
         ~Calculator();
         protected:
         void createWidgets();
         void placeWidget();
         private:
         QGridLayout *buttonsLayout;
         QVBoxLayout *layout;
         QVector<QPushButton*> digits;
         QPushButton *enter;
         QVector<QPushButton*> operations;
         QLCDNumber *display;
         };
         #endif
           
