//This file is part of SphereView.
//
//SphereView is free software: you can redistribute it and/or modify
//it under the terms of the GNU General Public License as published by
//the Free Software Foundation, either version 3 of the License, or
//(at your option) any later version.
//
//SphereView is distributed in the hope that it will be useful,
//but WITHOUT ANY WARRANTY; without even the implied warranty of
//MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//GNU General Public License for more details.
//
//You should have received a copy of the GNU General Public License
//along with SphereView.  If not, see <http://www.gnu.org/licenses/>.

#import "PFAxisDirection.h"
// Util
#import <math.h>

// Parfait
#import "PFRadian.h"
#import "PFPoint.h"
#import "PFMatrix.h"
#import "PFMatrixTransform.h"

@interface PFSphereView : UIView {
	NSMutableDictionary *pointMap; 
	
	CGPoint originalLocationInView;
	CGPoint previousLocationInView;
	
	PFAxisDirection lastXAxisDirection;
	PFAxisDirection lastYAxisDirection;
	
	CGRect originalSphereViewBounds;
}

- (void)setItems:(NSArray *)items;

@end
