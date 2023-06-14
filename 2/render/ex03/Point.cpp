/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <yboudoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 09:10:35 by yboudoui          #+#    #+#             */
/*   Updated: 2023/06/12 09:16:19 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(const float xValue, const float yValue) : x(xValue), y(yValue) {}

Point::Point(const Point& other) : x(other.x), y(other.y) {}

Point& Point::operator=(const Point& other) {
    if (this != &other) {
        // As x and y are const attributes, they cannot be modified directly.
        // Hence, there is no need to assign them.
    }
    return *this;
}

Point::~Point() {}

const Fixed& Point::getX() const {
    return x;
}

const Fixed& Point::getY() const {
    return y;
}

bool bsp(const Point& a, const Point& b, const Point& c, const Point& point) {
    Fixed bx = b.getX() - a.getX();
    Fixed by = b.getY() - a.getY();
    Fixed cx = c.getX() - a.getX();
    Fixed cy = c.getY() - a.getY();
    Fixed px = point.getX() - a.getX();
    Fixed py = point.getY() - a.getY();

    Fixed d = bx * cy - cx * by;
    Fixed w1 = (px * (by - cy) + py * (cx - bx) + bx * cy - cx * by) / d;
    Fixed w2 = (px * cy - py * cx) / d;
    Fixed w3 = (py * bx - px * by) / d;

    return w1 >= 0 && w2 >= 0 && w3 >= 0 && (w1 + w2 + w3) <= 1;
}
/*
In the bsp function, we perform the Binary Space Partitioning calculation to determine if a given point is inside a triangle. The function takes the three vertices of the triangle (a, b, c) and the point to check. It calculates the weights (w1, w2, w3) for each vertex, and if the weights satisfy the conditions, the point is considered to be inside the triangle.



--------------
In the context of the `bsp` function, the concept of weight refers to the relative contribution or influence of each vertex of the triangle on the position of a given point. The weights are calculated to determine if the point lies inside the triangle.

When calculating the weights, we consider three vertices of the triangle: `a`, `b`, and `c`. The goal is to determine how much each vertex affects the position of the given point. We assign weights to each vertex based on this influence.

The weights are calculated using a technique called Barycentric coordinates. The idea is to express the position of the given point as a combination of the three vertices using their weights.

In the `bsp` function, the weights are calculated as follows:

```cpp
Fixed w1 = (px * (by - cy) + py * (cx - bx) + bx * cy - cx * by) / d;
Fixed w2 = (px * cy - py * cx) / d;
Fixed w3 = (py * bx - px * by) / d;
```

Here, `px` and `py` represent the x and y coordinates of the given point, respectively. `bx`, `by`, `cx`, `cy` represent the differences between the x and y coordinates of the triangle vertices. `d` is a determinant value calculated from the differences.

The weights `w1`, `w2`, `w3` represent the influence of each vertex on the position of the point. If all weights are positive and their sum is less than or equal to 1, it indicates that the point lies inside the triangle.

By comparing the weights with the conditions `w1 >= 0`, `w2 >= 0`, `w3 >= 0`, and `(w1 + w2 + w3) <= 1`, we can determine if the point is inside the triangle or not.

The concept of weight helps us determine the position of a point relative to the triangle vertices, allowing us to perform various operations, such as checking if a point is inside a triangle, interpolating values, or performing other geometric calculations.

*/
