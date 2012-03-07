/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library
#import "GQDNameMappable.h"
#import "iWorkImport-Structs.h"


__attribute__((visibility("hidden")))
@interface GQDWPExternalTextWrap : NSObject <GQDNameMappable> {
@private
	BOOL mFloatingWrapEnabled;	// 4 = 0x4
	BOOL mInlineWrapEnabled;	// 5 = 0x5
	float mMargin;	// 8 = 0x8
	float mAlphaThreshold;	// 12 = 0xc
	int mWrapStyle;	// 16 = 0x10
	int mWrapDirection;	// 20 = 0x14
	int mFloatingWrapType;	// 24 = 0x18
	int mAttachmentWrapType;	// 28 = 0x1c
}
+ (const StateSpec *)stateForReading;	// 0x34254ccd
- (float)alphaThreshold;	// 0x34254d09
- (int)attachmentWrapType;	// 0x34254d49
- (BOOL)floatingWrapEnabled;	// 0x34254cd9
- (int)floatingWrapType;	// 0x34254d39
- (BOOL)inlineWrapEnabled;	// 0x34254ce9
- (float)margin;	// 0x34254cf9
- (int)readAttributesFromReader:(xmlTextReader *)reader;	// 0x34254d79
- (int)wrapDirection;	// 0x34254d29
- (int)wrapStyle;	// 0x34254d19
@end

