/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egermen <egermen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 22:19:29 by egermen           #+#    #+#             */
/*   Updated: 2024/10/06 22:19:29 by egermen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::getFirstName() {
        return(firstName);
}

std::string Contact::getLastName() {
        return(lastName);
}

std::string Contact::getNickName() {
        return(nickName);
}

std::string Contact::getNumber() {
        return(number);
}

std::string Contact::getDarkestSecret() {
        return(darkestSecret);
}

void    Contact::setFirstName(std::string str) {
    firstName = str;
}

void    Contact::setLastName(std::string str) {
    lastName = str;
}

void    Contact::setNickName(std::string str) {
    nickName = str;
}

void    Contact::setNumber(std::string str) {
    number = str;
}

void    Contact::setDarkestSecret(std::string str) {
    darkestSecret = str;
}