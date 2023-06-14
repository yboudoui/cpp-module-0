/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <yboudoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 09:10:15 by yboudoui          #+#    #+#             */
/*   Updated: 2023/06/12 09:10:24 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {
private:
    const Fixed x;
    const Fixed y;

public:
    Point();
    Point(const float xValue, const float yValue);
    Point(const Point& other);
    Point& operator=(const Point& other);
    ~Point();

    const Fixed& getX() const;
    const Fixed& getY() const;
};

bool bsp(const Point& a, const Point& b, const Point& c, const Point& point);

#endif  // POINT_HPP

