/* BEGIN_COMMON_COPYRIGHT_HEADER
 * (c)LGPL2+
 *
 * LXQt - a lightweight, Qt based, desktop toolset
 * https://lxqt.org
 *
 * Copyright: 2013 Razor team
 * Authors:
 *   Kuzma Shapran <kuzma.shapran@gmail.com>
 *
 * This program or library is free software; you can redistribute it
 * and/or modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.

 * You should have received a copy of the GNU Lesser General
 * Public License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301 USA
 *
 * END_COMMON_COPYRIGHT_HEADER */

#ifndef GLOBAL_ACTION_NATIVE_CLIENT__CLIENT_ADAPTOR__INCLUDED
#define GLOBAL_ACTION_NATIVE_CLIENT__CLIENT_ADAPTOR__INCLUDED

#include <QObject>

class ClientAdaptor : public QObject
{
    Q_OBJECT
public:
    explicit ClientAdaptor(const QString &path, QObject *parent = 0);

signals:
    void on_activated(const QString &path);
    void on_shortcutChanged(const QString &path, const QString &oldShortcut, const QString &newShortcut);

public slots:
    void activated();
    void shortcutChanged(const QString &oldShortcut, const QString &newShortcut);

private:
    QString mPath;
};

#endif // GLOBAL_ACTION_NATIVE_CLIENT__CLIENT_ADAPTOR__INCLUDED
