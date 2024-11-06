/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egermen <egermen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 22:19:41 by egermen           #+#    #+#             */
/*   Updated: 2024/10/06 22:19:41 by egermen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact {
    private:
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string number;
        std::string darkestSecret;
    public:
    void    setFirstName(std::string str);
    void    setLastName(std::string str);
    void    setNickName(std::string str);
    void    setNumber(std::string str);
    void    setDarkestSecret(std::string str);
    
    std::string getFirstName();
    std::string getLastName();
    std::string getNickName();
    std::string getNumber();
    std::string getDarkestSecret();
};

#endif