/********************************************************************************
** Form generated from reading UI file 'addproduct.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPRODUCT_H
#define UI_ADDPRODUCT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddProduct
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QFormLayout *formLayout;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineAddProductCode;
    QLineEdit *lineAddProductName;
    QLineEdit *lineAddProductCategory;
    QLineEdit *lineAddProductDesc;
    QLineEdit *lineAddProductQuantity;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QSplitter *splitter;
    QPushButton *AddProductButton;
    QPushButton *CancelAddProductButton;

    void setupUi(QWidget *AddProduct)
    {
        if (AddProduct->objectName().isEmpty())
            AddProduct->setObjectName(QStringLiteral("AddProduct"));
        AddProduct->resize(400, 300);
        widget = new QWidget(AddProduct);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(70, 10, 271, 241));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_3->addWidget(label_3);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lineAddProductCode = new QLineEdit(widget);
        lineAddProductCode->setObjectName(QStringLiteral("lineAddProductCode"));

        verticalLayout->addWidget(lineAddProductCode);

        lineAddProductName = new QLineEdit(widget);
        lineAddProductName->setObjectName(QStringLiteral("lineAddProductName"));

        verticalLayout->addWidget(lineAddProductName);

        lineAddProductCategory = new QLineEdit(widget);
        lineAddProductCategory->setObjectName(QStringLiteral("lineAddProductCategory"));

        verticalLayout->addWidget(lineAddProductCategory);

        lineAddProductDesc = new QLineEdit(widget);
        lineAddProductDesc->setObjectName(QStringLiteral("lineAddProductDesc"));

        verticalLayout->addWidget(lineAddProductDesc);

        lineAddProductQuantity = new QLineEdit(widget);
        lineAddProductQuantity->setObjectName(QStringLiteral("lineAddProductQuantity"));

        verticalLayout->addWidget(lineAddProductQuantity);


        formLayout->setLayout(0, QFormLayout::LabelRole, verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_2->addWidget(label_4);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_2->addWidget(label_5);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_2->addWidget(label_6);


        formLayout->setLayout(0, QFormLayout::FieldRole, verticalLayout_2);

        splitter = new QSplitter(widget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        AddProductButton = new QPushButton(splitter);
        AddProductButton->setObjectName(QStringLiteral("AddProductButton"));
        splitter->addWidget(AddProductButton);
        CancelAddProductButton = new QPushButton(splitter);
        CancelAddProductButton->setObjectName(QStringLiteral("CancelAddProductButton"));
        splitter->addWidget(CancelAddProductButton);

        formLayout->setWidget(1, QFormLayout::SpanningRole, splitter);


        verticalLayout_3->addLayout(formLayout);


        retranslateUi(AddProduct);

        QMetaObject::connectSlotsByName(AddProduct);
    } // setupUi

    void retranslateUi(QWidget *AddProduct)
    {
        AddProduct->setWindowTitle(QApplication::translate("AddProduct", "Form", Q_NULLPTR));
        label_3->setText(QApplication::translate("AddProduct", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">Dodaj nowy Produkt</span></p></body></html>", Q_NULLPTR));
        label->setText(QApplication::translate("AddProduct", "Kod", Q_NULLPTR));
        label_2->setText(QApplication::translate("AddProduct", "Nazwa", Q_NULLPTR));
        label_4->setText(QApplication::translate("AddProduct", "Kategoria", Q_NULLPTR));
        label_5->setText(QApplication::translate("AddProduct", "Opis", Q_NULLPTR));
        label_6->setText(QApplication::translate("AddProduct", "Ilo\305\233\304\207", Q_NULLPTR));
        AddProductButton->setText(QApplication::translate("AddProduct", "Dodaj", Q_NULLPTR));
        CancelAddProductButton->setText(QApplication::translate("AddProduct", "Anuluj ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddProduct: public Ui_AddProduct {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPRODUCT_H