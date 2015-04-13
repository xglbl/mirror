#ifndef ROLE_H
#define ROLE_H

#include <QWidget>
#include "ui_role.h"
#include "mytabframe.h"
#include "bag_item.h"
#include "storage_item.h"

class role : public myTabFrame
{
	Q_OBJECT

public:
	role(RoleInfo *roleInfo, QMap<quint32, quint32> *m_bag_item, QMap<quint32, quint32> *m_storage_item);
	~role();
	const static qint32
		FileVer = 1,
		MaxLv = 1000;

public:
	virtual void updateRoleInfo(void);

private:
	void LoadRole(void);
	bool CreateRole(void);
	void DisplayRoleValue();

	void LoadSettings(QString fileName);

private slots:
	void on_btn_mirror_save_clicked();
	void on_btn_role_strength_clicked();
	void on_btn_role_wisdom_clicked();
	void on_btn_role_spirit_clicked();
	void on_btn_role_life_clicked();
	void on_btn_role_agility_clicked();
	void on_btn_role_lvUp_clicked();

private:
	Ui::role ui;
	QString db_role, db_exp;

	bag_item m_tab_bagItem;
	storage_item m_tab_storageItem;
	
	RoleInfo *myRole;
	QMap<quint32, quint32> *m_bag_item;
	QMap<quint32, quint32> *m_storage_item;

	//����Ϊ������ñ����������Գ�������ʱ���ġ�
	qint32 lvExp[MaxLv];
};

#endif // ROLE_H