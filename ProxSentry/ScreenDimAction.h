//
//  ScreenDimController.h
//  ProxSentry
//
/*
	https://https://github.com/peteburtis/ProxSentry

    Copyright (C) 2012 Peter Burtis

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#import <Foundation/Foundation.h>
#import "DetectionTriggeredAction.h"

#define DIMMING_THRESHOLD 0.085
#define SCREEN_DIMMING_DELAY_DEFAULT 1.15

@interface ScreenDimAction : DetectionTriggeredAction {
    BOOL armed;
}

@property (readonly) BOOL supported;

@end
