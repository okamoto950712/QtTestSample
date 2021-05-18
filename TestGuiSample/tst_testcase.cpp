#include <QtTest>
#include <QCoreApplication>

// add necessary includes here
#include "MainWindow.hpp"
#include "ui_MainWindow.h"

class TestCase : public QObject
{
    Q_OBJECT

public:
    TestCase();
    ~TestCase();

private slots:
    void test_case1();

private:
    MainWindow *ui;
};

TestCase::TestCase()
{
    ui = new MainWindow;
}

TestCase::~TestCase()
{

}

void TestCase::test_case1()
{
    ui->findChild<QSpinBox*>("spinBox")->setValue(10);
    ui->findChild<QSpinBox*>("spinBox_2")->setValue(20);
    QTest::mouseClick(ui->findChild<QPushButton*>("pushButton"), Qt::LeftButton);
    QCOMPARE(ui->findChild<QLineEdit*>("lineEdit")->text(), "30");
}

QTEST_MAIN(TestCase)

#include "tst_testcase.moc"
