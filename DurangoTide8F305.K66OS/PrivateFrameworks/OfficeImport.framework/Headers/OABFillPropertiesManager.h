/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OABFillPropertiesManager.h"
#import "OABColorPropertiesManager.h"
#import <NSObject.h> // Unknown library

@protocol OABPropertiesManager;

@protocol OABFillPropertiesManager <OABColorPropertiesManager>
- (long)fillAngle;
- (long)fillBgAlpha;
- (unsigned long)fillBlipID;
- (id)fillBlipName;
- (long)fillFgAlpha;
- (long)fillFocus;
- (long)fillFocusBottom;
- (long)fillFocusLeft;
- (long)fillFocusRight;
- (long)fillFocusTop;
- (const EshTablePropVal<EshGradientStop> *)fillGradientColors;
- (int)fillType;
@end

__attribute__((visibility("hidden")))
@interface OABFillPropertiesManager : NSObject <OABFillPropertiesManager> {
@private
	EshFill *mFill;	// 4 = 0x4
	int mShapeType;	// 8 = 0x8
	id<OABPropertiesManager> mMasterManager;	// 12 = 0xc
}
- (id)initWithFill:(const EshFill *)fill shapeType:(int)type masterShape:(EshShape *)shape;	// 0x3443bb61
- (void)dealloc;	// 0x34444241
- (long)fillAngle;	// 0x34444bf9
- (long)fillBgAlpha;	// 0x34445011
- (EshColor)fillBgColor;	// 0x34444d2d
- (EshBlip *)fillBlipDataReference;	// 0x34445871
- (unsigned long)fillBlipID;	// 0x344456a9
- (id)fillBlipName;	// 0x34445729
- (long)fillFgAlpha;	// 0x34444fad
- (EshColor)fillFgColor;	// 0x34444cc1
- (long)fillFocus;	// 0x34444c5d
- (long)fillFocusBottom;	// 0x344d0665
- (long)fillFocusLeft;	// 0x344d0545
- (long)fillFocusRight;	// 0x344d0605
- (long)fillFocusTop;	// 0x344d05a5
- (const EshTablePropVal<EshGradientStop> *)fillGradientColors;	// 0x34444d99
- (int)fillType;	// 0x3443c42d
- (BOOL)isFilled;	// 0x3443c4d9
- (BOOL)isStroked;	// 0x345e5c8d
- (EshColor)shadowColor;	// 0x345e5c91
- (EshColor)strokeBgColor;	// 0x345e5cb5
- (EshColor)strokeFgColor;	// 0x345e5cd9
@end

