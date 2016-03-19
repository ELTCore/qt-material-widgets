#include <QLayout>
#include "iconbuttonexamples.h"
#include "components/iconbutton.h"
#include "exampleview.h"
#include "frame.h"

IconButtonExamples::IconButtonExamples(QWidget *parent)
    : ExampleList(parent)
{
    QLayout *layout = widget()->layout();

    {
        IconButton *iconButton = new IconButton(QIcon("../qt-material-widgets/face.svg"));

        ExampleView *view = new ExampleView;
        view->scene()->addWidget(iconButton);

        Frame *frame = new Frame;
        frame->setCodeSnippet(
            "IconButton *iconButton = new IconButton(QIcon(\"face.svg\"));\n"
        );
        frame->setWidget(view);

        layout->addWidget(frame);
    }
}

IconButtonExamples::~IconButtonExamples()
{
}