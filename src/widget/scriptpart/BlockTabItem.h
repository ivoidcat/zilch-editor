#ifndef BLOCKTABITEM_H
#define BLOCKTABITEM_H

#include <QWidget>
#include <QLabel>

#include "../Widget.h"
#include "../../scratch/ScratchBlockCategory.h"

class ScriptPartTab;

class BlockTabItem : public Widget {
	Q_OBJECT
public:
	BlockTabItem(ScratchBlockCategory *CategoryData, QWidget *parent = nullptr);
	void setText(const QString &Text);
	void setPalette(const QPalette &Paltette);
public slots:
	void OnSelect();
public:
	bool Selected;
	ScratchBlockCategory *CategoryData;
	QLabel *Color;
	QLabel *Text;
};

#endif // BLOCKTABITEM_H
