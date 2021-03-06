/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADPathElement.h"
#import "OfficeImport-Structs.h"


@interface OADAngleArcPathElement : OADPathElement {
	OADAdjustPoint mCenter;	// 4 = 0x4
	OADAdjustPoint mSemiaxes;	// 20 = 0x14
	OADAdjustCoord mStartAngle;	// 36 = 0x24
	OADAdjustCoord mAngleLength;	// 44 = 0x2c
	BOOL mConnectedToPrevious;	// 52 = 0x34
}
- (id)initWithCenter:(OADAdjustPoint)center semiaxes:(OADAdjustPoint)semiaxes startAngle:(OADAdjustCoord)angle angleLength:(OADAdjustCoord)length connectedToPrevious:(BOOL)previous;	// 0x34a4f509
- (id).cxx_construct;	// 0x34a4f659
- (OADAdjustCoord)angleLength;	// 0x34a4f631
- (OADAdjustPoint)center;	// 0x34a4f5d1
- (BOOL)connectedToPrevious;	// 0x34a4f649
- (OADAdjustPoint)semiaxes;	// 0x34a4f5f5
- (OADAdjustCoord)startAngle;	// 0x34a4f619
@end

