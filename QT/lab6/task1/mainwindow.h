#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <tree.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void TraverseDepthFirst(Node* n);
    void PrintNode(Node* n, int pos);
    void TraverseInorder(Node* n);
    void TraversePreorder(Node* n);
    void TraversePostorder(Node* n);

private slots:
    void on_createTree_clicked();

    void on_changeTraverse_clicked();

    void on_insert_clicked();

    void on_remove_clicked();

    void on_getValue_clicked();

    void on_getNofSymbols_clicked();

private:
    Ui::MainWindow *ui;
    Tree* tree;
    std::vector<std::pair<int, std::string>> treeArr;
    int countOfKeys;
};
#endif // MAINWINDOW_H
