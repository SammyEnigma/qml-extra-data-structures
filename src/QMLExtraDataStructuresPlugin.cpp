/*
 * Copyright (C) 2016 EPFL
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see http://www.gnu.org/licenses/.
 */

/**
 * @file QMLExtraDataStructuresPlugin.h
 * @brief Object that exposes the QMLExtraDataStructures plugin components as QML objects
 * @author Ayberk Özgür
 * @date 2018-03-06
 */

#include "QMLExtraDataStructuresPlugin.h"

#include "CircularBuffer.h"
#include "StatCircularBuffer.h"
#include "AssociativeArray.h"
#include "Queue.h"

/**
 * @brief QML data structures and utilities that are either useful or are missing an official QML API
 */
namespace QMLExtraDataStructures{

void QMLExtraDataStructuresPlugin::registerTypes(const char* uri){
    qmlRegisterType<CircularBuffer>(uri, 1, 0, "CircularBuffer");
    qmlRegisterType<StatCircularBuffer>(uri, 1, 0, "StatCircularBuffer");
    qmlRegisterType<AssociativeArray>(uri, 1, 0, "AssociativeArray");
    qmlRegisterType<Queue>(uri, 1, 0, "Queue");
}

}
