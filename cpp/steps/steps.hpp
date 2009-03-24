////////////////////////////////////////////////////////////////////////////////
// STEPS - STochastic Engine for Pathway Simulation
// Copyright (C) 2005-2008 Stefan Wils. All rights reserved.
//
// This file is part of STEPS.
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301, USA
//
// $Id$
////////////////////////////////////////////////////////////////////////////////

#ifndef STEPS_STEPS_HPP
#define STEPS_STEPS_HPP 1

// Autotools definitions.
#ifdef HAVE_CONFIG_H
#include <steps/config.h>
#endif

// STL headers.
#include <cassert>

// STEPS headers.
#include <steps/common.h>

////////////////////////////////////////////////////////////////////////////////

START_NAMESPACE(steps)

////////////////////////////////////////////////////////////////////////////////

/// This method performs initialization of the entire C++ part of STEPS.
/// It is exposed to Python, and must be called prior to anything else.
/// Calling the method multiple times is not a problem.
///
STEPS_EXTERN void init(void);

/// This method cleans up the C++ part of STEPS. It's exposed to Python and
/// must be called at the 'right' moment. It never throws any exception.
///
STEPS_EXTERN void finish(void);

////////////////////////////////////////////////////////////////////////////////

END_NAMESPACE(steps)

#endif
// STEPS_STEPS_HPP

// END