//
// Created by resolution on 21.03.17.
//
#pragma once
#ifndef LIST_QUEUE_CELL_H
#define LIST_QUEUE_CELL_H

template <class type>
class cell
{
public:

    type value;
    cell * next;

    cell()
    {
        value = 0;
        next = nullptr;

    }

};

#endif //LIST_QUEUE_CELL_H
