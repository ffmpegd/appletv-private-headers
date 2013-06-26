/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQDNameMappable.h"
#import <NSObject.h> // Unknown library


@interface GQDWPListLabelGeometry : NSObject <GQDNameMappable> {
	float mScale;	// 4 = 0x4
	float mBaselineOffset;	// 8 = 0x8
	BOOL mScaleWithText;	// 12 = 0xc
	int mLabelAlignment;	// 16 = 0x10
}
+ (const StateSpec *)stateForReading;	// 0x32cf123d
- (float)baselineOffset;	// 0x32cf1379
- (int)labelAlignment;	// 0x32cf1399
- (int)readAttributesFromReader:(xmlTextReader *)reader;	// 0x32cf1249
- (float)scale;	// 0x32cf1369
- (BOOL)scaleWithText;	// 0x32cf1389
@end
