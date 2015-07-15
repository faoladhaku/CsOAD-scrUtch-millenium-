/********************************************************************************
** Form generated from reading UI file 'scrutch.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCRUTCH_H
#define UI_SCRUTCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_scrutch
{
public:
    QAction *action_Nuevo;
    QAction *action_Abrir;
    QAction *action_Guardar;
    QAction *actionGuardar_Como;
    QAction *action_Notas_de_Proyecto;
    QAction *actionA_bandonar;
    QAction *action_Compartir_en_linea;
    QAction *action_Ir_al_Sitio_Web_de_Scratch;
    QAction *action_Pagina_de_Ayuda;
    QAction *action_Acerca_de_Scratch;
    QWidget *centralWidget;
    QLabel *label;
    QMenuBar *menuBar;
    QMenu *menu_Archivo;
    QMenu *menu_Editar;
    QMenu *menu_Compartir;
    QMenu *menuA_yuda;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *scrutch)
    {
        if (scrutch->objectName().isEmpty())
            scrutch->setObjectName(QStringLiteral("scrutch"));
        scrutch->resize(852, 487);
        action_Nuevo = new QAction(scrutch);
        action_Nuevo->setObjectName(QStringLiteral("action_Nuevo"));
        action_Abrir = new QAction(scrutch);
        action_Abrir->setObjectName(QStringLiteral("action_Abrir"));
        action_Guardar = new QAction(scrutch);
        action_Guardar->setObjectName(QStringLiteral("action_Guardar"));
        actionGuardar_Como = new QAction(scrutch);
        actionGuardar_Como->setObjectName(QStringLiteral("actionGuardar_Como"));
        action_Notas_de_Proyecto = new QAction(scrutch);
        action_Notas_de_Proyecto->setObjectName(QStringLiteral("action_Notas_de_Proyecto"));
        actionA_bandonar = new QAction(scrutch);
        actionA_bandonar->setObjectName(QStringLiteral("actionA_bandonar"));
        action_Compartir_en_linea = new QAction(scrutch);
        action_Compartir_en_linea->setObjectName(QStringLiteral("action_Compartir_en_linea"));
        action_Ir_al_Sitio_Web_de_Scratch = new QAction(scrutch);
        action_Ir_al_Sitio_Web_de_Scratch->setObjectName(QStringLiteral("action_Ir_al_Sitio_Web_de_Scratch"));
        action_Pagina_de_Ayuda = new QAction(scrutch);
        action_Pagina_de_Ayuda->setObjectName(QStringLiteral("action_Pagina_de_Ayuda"));
        action_Acerca_de_Scratch = new QAction(scrutch);
        action_Acerca_de_Scratch->setObjectName(QStringLiteral("action_Acerca_de_Scratch"));
        centralWidget = new QWidget(scrutch);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(680, 60, 111, 121));
        scrutch->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(scrutch);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 852, 21));
        menu_Archivo = new QMenu(menuBar);
        menu_Archivo->setObjectName(QStringLiteral("menu_Archivo"));
        menu_Editar = new QMenu(menuBar);
        menu_Editar->setObjectName(QStringLiteral("menu_Editar"));
        menu_Compartir = new QMenu(menuBar);
        menu_Compartir->setObjectName(QStringLiteral("menu_Compartir"));
        menuA_yuda = new QMenu(menuBar);
        menuA_yuda->setObjectName(QStringLiteral("menuA_yuda"));
        scrutch->setMenuBar(menuBar);
        mainToolBar = new QToolBar(scrutch);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        scrutch->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(scrutch);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        scrutch->setStatusBar(statusBar);

        menuBar->addAction(menu_Archivo->menuAction());
        menuBar->addAction(menu_Editar->menuAction());
        menuBar->addAction(menu_Compartir->menuAction());
        menuBar->addAction(menuA_yuda->menuAction());
        menu_Archivo->addAction(action_Nuevo);
        menu_Archivo->addAction(action_Abrir);
        menu_Archivo->addAction(action_Guardar);
        menu_Archivo->addAction(actionGuardar_Como);
        menu_Archivo->addAction(action_Notas_de_Proyecto);
        menu_Archivo->addAction(actionA_bandonar);
        menu_Compartir->addAction(action_Compartir_en_linea);
        menu_Compartir->addAction(action_Ir_al_Sitio_Web_de_Scratch);
        menuA_yuda->addAction(action_Pagina_de_Ayuda);
        menuA_yuda->addAction(action_Acerca_de_Scratch);

        retranslateUi(scrutch);

        QMetaObject::connectSlotsByName(scrutch);
    } // setupUi

    void retranslateUi(QMainWindow *scrutch)
    {
        scrutch->setWindowTitle(QApplication::translate("scrutch", "scrutch", 0));
        action_Nuevo->setText(QApplication::translate("scrutch", "&Nuevo", 0));
        action_Abrir->setText(QApplication::translate("scrutch", "&Abrir", 0));
        action_Guardar->setText(QApplication::translate("scrutch", "&Guardar", 0));
        actionGuardar_Como->setText(QApplication::translate("scrutch", "Guardar &Como", 0));
        action_Notas_de_Proyecto->setText(QApplication::translate("scrutch", "&Notas de Proyecto", 0));
        actionA_bandonar->setText(QApplication::translate("scrutch", "A&bandonar", 0));
        action_Compartir_en_linea->setText(QApplication::translate("scrutch", "&Compartir en linea", 0));
        action_Ir_al_Sitio_Web_de_Scratch->setText(QApplication::translate("scrutch", "&Ir al Sitio Web de Scratch", 0));
        action_Pagina_de_Ayuda->setText(QApplication::translate("scrutch", "&Pagina de Ayuda", 0));
        action_Acerca_de_Scratch->setText(QApplication::translate("scrutch", "&Acerca de Scratch", 0));
        label->setText(QString());
        menu_Archivo->setTitle(QApplication::translate("scrutch", "&Archivo", 0));
        menu_Editar->setTitle(QApplication::translate("scrutch", "&Editar", 0));
        menu_Compartir->setTitle(QApplication::translate("scrutch", "&Compartir", 0));
        menuA_yuda->setTitle(QApplication::translate("scrutch", "A&yuda", 0));
    } // retranslateUi

};

namespace Ui {
    class scrutch: public Ui_scrutch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCRUTCH_H
