/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "UIFoundation-Structs.h"
#import "NSCoding.h"
#import "NSMutableCopying.h"

@class NSArray;

@interface NSParagraphStyle : NSObject <NSCopying, NSMutableCopying, NSCoding> {
	float _lineSpacing;	// 4 = 0x4
	float _paragraphSpacing;	// 8 = 0x8
	float _headIndent;	// 12 = 0xc
	float _tailIndent;	// 16 = 0x10
	float _firstLineHeadIndent;	// 20 = 0x14
	float _minimumLineHeight;	// 24 = 0x18
	float _maximumLineHeight;	// 28 = 0x1c
	NSArray *_tabStops;	// 32 = 0x20
	struct {
		unsigned alignment : 4;
		unsigned lineBreakMode : 4;
		unsigned tabStopsIsMutable : 1;
		unsigned isNaturalDirection : 1;
		unsigned rightToLeftDirection : 1;
		unsigned fixedMultiple : 2;
		unsigned refCount : 19;
	} _flags;	// 36 = 0x24
	float _defaultTabInterval;	// 40 = 0x28
	id _extraData;	// 44 = 0x2c
}
@property(readonly, assign) int alignment;	// G=0x35c8d889; 
@property(readonly, assign) int baseWritingDirection;	// G=0x35c8d91d; 
@property(readonly, assign) float defaultTabInterval;	// G=0x35c8d9dd; converted property
@property(readonly, assign) float firstLineHeadIndent;	// G=0x35c8d8d9; 
@property(readonly, assign) float headIndent;	// G=0x35c8d8a1; 
@property(readonly, assign) float hyphenationFactor;	// G=0x35c8da3d; 
@property(readonly, assign) int lineBreakMode;	// G=0x35c8d909; 
@property(readonly, assign) float lineHeightMultiple;	// G=0x35c8d941; 
@property(readonly, assign) float lineSpacing;	// G=0x35c8d869; 
@property(readonly, assign) float maximumLineHeight;	// G=0x35c8d8f9; 
@property(readonly, assign) float minimumLineHeight;	// G=0x35c8d8e9; 
@property(readonly, assign) float paragraphSpacing;	// G=0x35c8d879; 
@property(readonly, assign) float paragraphSpacingBefore;	// G=0x35c8d9b1; 
@property(readonly, retain) NSArray *tabStops;	// G=0x35c8d8c1; converted property
@property(readonly, assign) float tailIndent;	// G=0x35c8d8b1; 
+ (int)_defaultWritingDirection;	// 0x35c8c019
+ (id)defaultParagraphStyle;	// 0x35c8bfd1
+ (int)defaultWritingDirectionForLanguage:(id)language;	// 0x35c8c1a5
+ (void)initialize;	// 0x35c8bef9
- (id)init;	// 0x35c8cbd9
- (id)initWithCoder:(id)coder;	// 0x35c8e7bd
- (void)_allocExtraData;	// 0x35c8c1ed
- (void)_deallocExtraData;	// 0x35c8c2d1
- (id)_initWithParagraphStyle:(id)paragraphStyle;	// 0x35c8c32d
- (BOOL)_isDeallocating;	// 0x35c8cd85
- (BOOL)_isSuitableForFastStringDrawingWithAlignment:(int *)alignment lineBreakMode:(int *)mode tighteningFactorForTruncation:(float *)truncation;	// 0x35c8dac1
- (BOOL)_tryRetain;	// 0x35c8cd81
// declared property getter: - (int)alignment;	// 0x35c8d889
// declared property getter: - (int)baseWritingDirection;	// 0x35c8d91d
- (id)copyWithZone:(NSZone *)zone;	// 0x35c8cbed
- (void)dealloc;	// 0x35c8ce45
// converted property getter: - (float)defaultTabInterval;	// 0x35c8d9dd
- (id)description;	// 0x35c8f04d
- (void)encodeWithCoder:(id)coder;	// 0x35c8df29
// declared property getter: - (float)firstLineHeadIndent;	// 0x35c8d8d9
- (unsigned)hash;	// 0x35c8cc4d
// declared property getter: - (float)headIndent;	// 0x35c8d8a1
- (int)headerLevel;	// 0x35c8da99
// declared property getter: - (float)hyphenationFactor;	// 0x35c8da3d
- (BOOL)isEqual:(id)equal;	// 0x35c8cea9
// declared property getter: - (int)lineBreakMode;	// 0x35c8d909
// declared property getter: - (float)lineHeightMultiple;	// 0x35c8d941
// declared property getter: - (float)lineSpacing;	// 0x35c8d869
// declared property getter: - (float)maximumLineHeight;	// 0x35c8d8f9
// declared property getter: - (float)minimumLineHeight;	// 0x35c8d8e9
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x35c8cbfd
// declared property getter: - (float)paragraphSpacing;	// 0x35c8d879
// declared property getter: - (float)paragraphSpacingBefore;	// 0x35c8d9b1
- (oneway void)release;	// 0x35c8cdc1
- (id)retain;	// 0x35c8cd89
- (unsigned)retainCount;	// 0x35c8ce2d
// converted property getter: - (id)tabStops;	// 0x35c8d8c1
// declared property getter: - (float)tailIndent;	// 0x35c8d8b1
- (id)textBlocks;	// 0x35c8d9ed
- (id)textLists;	// 0x35c8da15
- (float)tighteningFactorForTruncation;	// 0x35c8da69
@end

