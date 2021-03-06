/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQDNameMappable.h"
#import <NSObject.h> // Unknown library

@class GQDColor, GQDRStrokePattern;

@interface GQDRStroke : NSObject <GQDNameMappable> {
	float mMiterLimit;	// 4 = 0x4
	float mWidth;	// 8 = 0x8
	int mCap;	// 12 = 0xc
	int mJoin;	// 16 = 0x10
	GQDColor *mColor;	// 20 = 0x14
	GQDRStrokePattern *mPattern;	// 24 = 0x18
}
+ (const StateSpec *)stateForReading;	// 0x324538d1
- (int)cap;	// 0x32453961
- (id)color;	// 0x32453981
- (void)dealloc;	// 0x324538dd
- (int)join;	// 0x32453971
- (float)miterLimit;	// 0x32453941
- (id)pattern;	// 0x32453991
- (int)readAttributesFromReader:(xmlTextReader *)reader;	// 0x324539a1
- (float)width;	// 0x32453951
@end

