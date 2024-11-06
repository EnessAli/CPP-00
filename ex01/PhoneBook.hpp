/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egermen <egermen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 22:20:31 by egermen           #+#    #+#             */
/*   Updated: 2024/10/06 22:20:31 by egermen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"
#include <iostream>
#include <string>

class PhoneBook
{
private:
    int index;
    int size;
    Contact list[8];
public:
    
    PhoneBook();
    void add();
    void search(); 
    void showall();
};

#endif