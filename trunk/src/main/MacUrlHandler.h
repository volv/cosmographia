// This file is part of Cosmographia.
//
// Copyright (C) 2010-2011 Chris Laurel <claurel@gmail.com>
//
// Cosmographia is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2 of the License, or (at your option) any later version.
//
// Cosmographia is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with Cosmographia. If not, see <http://www.gnu.org/licenses/>.

#include <QObject>

class MacUrlHandler : public QObject
{
    Q_OBJECT

private:
    MacUrlHandler();

public:
    ~MacUrlHandler();
    static MacUrlHandler* Create();
    void handleUrl(const QString& url);

signals:
    void urlRequested(const QString& url);

private:
    void* m_privateData;
};
