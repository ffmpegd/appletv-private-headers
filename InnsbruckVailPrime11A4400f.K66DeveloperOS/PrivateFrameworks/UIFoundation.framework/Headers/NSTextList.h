/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import "UIFoundation-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"
#import </libobjc.A.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NSTextList : NSObject <NSCoding, NSCopying> {
	NSString *_markerFormat;	// 4 = 0x4
	unsigned _listFlags;	// 8 = 0x8
	int _startIndex;	// 12 = 0xc
	void *_listSecondary;	// 16 = 0x10
}
@property(readonly, retain) NSString *markerFormat;	// G=0x32cb2d81; converted property
@property(assign) int startingItemNumber;	// G=0x32cb2dc5; S=0x32cb2db1; converted property
+ (id)_standardMarkerAttributesForAttributes:(id)attributes;	// 0x32cb46dd
+ (void)initialize;	// 0x32cb2c65
- (id)initWithCoder:(id)coder;	// 0x32cb2fdd
- (id)initWithMarkerFormat:(id)markerFormat options:(unsigned)options;	// 0x32cb2cb1
- (BOOL)_isOrdered;	// 0x32cb4131
- (id)_markerAtIndex:(unsigned)index inText:(id)text;	// 0x32cb45ad
- (id)_markerForMarkerFormat:(id)markerFormat itemNumber:(int)number isNumbered:(BOOL *)numbered substitutionStart:(unsigned *)start end:(unsigned *)end specifierStart:(unsigned *)start6 end:(unsigned *)end7;	// 0x32cb3361
- (id)_markerPrefix;	// 0x32cb4225
- (id)_markerSpecifier;	// 0x32cb4291
- (id)_markerSuffix;	// 0x32cb4531
- (id)_markerTitle;	// 0x32cb417d
- (id)_unaffixedMarkerForItemNumber:(int)itemNumber;	// 0x32cb438d
- (id)_unaffixedMarkerFormat;	// 0x32cb4311
- (id)_unaffixedMarkerTitle;	// 0x32cb442d
- (id)copyWithZone:(NSZone *)zone;	// 0x32cb2dd9
- (void)dealloc;	// 0x32cb2d35
- (id)description;	// 0x32cb3279
- (void)encodeWithCoder:(id)coder;	// 0x32cb2e5d
- (unsigned)listOptions;	// 0x32cb2d91
- (id)markerForItemNumber:(int)itemNumber;	// 0x32cb40f9
// converted property getter: - (id)markerFormat;	// 0x32cb2d81
- (unsigned)options;	// 0x32cb2da1
// converted property setter: - (void)setStartingItemNumber:(int)number;	// 0x32cb2db1
// converted property getter: - (int)startingItemNumber;	// 0x32cb2dc5
@end

