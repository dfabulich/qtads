// This is copyrighted software. More information is at the end of this file.
#pragma once
#include <QDialog>
#include <memory>

#include "config.h"

namespace Ui {
class AboutQtadsDialog;
}

class AboutQtadsDialog final: public QDialog
{
    Q_OBJECT

public:
    explicit AboutQtadsDialog(QWidget* parent = nullptr);
    ~AboutQtadsDialog() override;

private:
    std::unique_ptr<Ui::AboutQtadsDialog> ui;
};

/*
    Copyright 2003-2020 Nikos Chantziaras <realnc@gmail.com>

    This file is part of QTads.

    QTads is free software: you can redistribute it and/or modify it under the
    terms of the GNU General Public License as published by the Free Software
    Foundation, either version 3 of the License, or (at your option) any later
    version.

    QTads is distributed in the hope that it will be useful, but WITHOUT ANY
    WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
    FOR A PARTICULAR PURPOSE. See the GNU General Public License for more
    details.

    You should have received a copy of the GNU General Public License along
    with QTads. If not, see <https://www.gnu.org/licenses/>.
*/
