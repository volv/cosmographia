// This file is part of Cosmographia.
//
// Copyright (C) 2011 Chris Laurel <claurel@gmail.com>
//
// Eigen is free software; you can redistribute it and/or
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

#ifndef _ROTATION_UTILITY_H_
#define _ROTATION_UTILITY_H_

#include <Eigen/Core>
#include <Eigen/Geometry>

Eigen::Quaterniond LookRotation(const Eigen::Vector3d& from,
                                const Eigen::Vector3d& to,
                                const Eigen::Vector3d& up);

#endif // _ROTATION_UTILITY_H_
