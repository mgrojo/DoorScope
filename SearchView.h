#ifndef _Ds_SearchView_
#define _Ds_SearchView_

/*
* Copyright 2005-2017 Rochus Keller <mailto:me@rochus-keller.info>
*
* This file is part of the DoorScope application
* see <http://doorscope.ch/>).
*
* GNU General Public License Usage
* This file may be used under the terms of the GNU General Public
* License (GPL) versions 2.0 or 3.0 as published by the Free Software
* Foundation and appearing in the file LICENSE.GPL included in
* the packaging of this file. Please review the following information
* to ensure GNU General Public Licensing requirements will be met:
* http://www.fsf.org/licensing/licenses/info/GPLv2.html and
* http://www.gnu.org/copyleft/gpl.html.
*/

#include <QWidget>

class QTreeWidget;
class QLineEdit;

namespace Ds
{
	class SearchView : public QWidget
	{
		Q_OBJECT
	public:
		static SearchView* inst();
		~SearchView();
	protected:
		SearchView();
		void resizeEvent ( QResizeEvent * e );
	protected slots:
		void onSearch();
		void onNew();
		void onGoto();
		void onGotoIf();
	private:
		QLineEdit* d_query;
		QTreeWidget* d_result;
	};
}

#endif