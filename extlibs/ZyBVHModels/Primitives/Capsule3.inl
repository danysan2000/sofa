// Geometric Tools, LLC
// Copyright (c) 1998-2014
// Distributed under the Boost Software License, Version 1.0.
// http://www.boost.org/LICENSE_1_0.txt
// http://www.geometrictools.com/License/Boost/LICENSE_1_0.txt
//
// File Version: 5.0.0 (2010/01/01)

#include "Capsule3.h"

using namespace BVHModels;

//----------------------------------------------------------------------------
template <typename Real>
Capsule3<Real>::Capsule3 ()
{
}
//----------------------------------------------------------------------------
template <typename Real>
Capsule3<Real>::~Capsule3 ()
{
}
//----------------------------------------------------------------------------
template <typename Real>
Capsule3<Real>::Capsule3 (const Segment3<Real>& segment, Real radius)
    :
    Segment(segment),
    Radius(radius)
{
}
//----------------------------------------------------------------------------