/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSObject.h> // Unknown library
#import "EventKit-Structs.h"

@class NSString, NSArray;

__attribute__((visibility("hidden")))
@interface EKRecurrenceHelper : NSObject {
	NSString *_specifier;	// 4 = 0x4
	BOOL _dirty;	// 8 = 0x8
	BOOL _parsed;	// 9 = 0x9
	NSArray *_daysOfTheWeek;	// 12 = 0xc
	NSArray *_daysOfTheMonth;	// 16 = 0x10
	NSArray *_daysOfTheYear;	// 20 = 0x14
	NSArray *_weeksOfTheYear;	// 24 = 0x18
	NSArray *_monthsOfTheYear;	// 28 = 0x1c
	NSArray *_setPositions;	// 32 = 0x20
}
@property(copy, nonatomic) NSArray *daysOfTheMonth;	// G=0x35b2d7f1; S=0x35b2d78d; 
@property(copy, nonatomic) NSArray *daysOfTheWeek;	// G=0x35b2cfb9; S=0x35b2cf55; 
@property(copy, nonatomic) NSArray *daysOfTheYear;	// G=0x35b2d8cd; S=0x35b2d869; 
@property(readonly, assign, nonatomic) BOOL isDirty;	// G=0x35b2ef0d; 
@property(copy, nonatomic) NSArray *monthsOfTheYear;	// G=0x35b2d639; S=0x35b2d5d5; 
@property(copy, nonatomic) NSArray *setPositions;	// G=0x35b2d47d; S=0x35b2d419; 
@property(copy, nonatomic) NSString *specifier;	// G=0x35b924e9; S=0x35b92545; 
@property(copy, nonatomic) NSArray *weeksOfTheYear;	// G=0x35b2d715; S=0x35b2d6b1; 
- (id)initWithSpecifier:(id)specifier;	// 0x35b2cf01
- (void)_appendDaysOfTheWeek:(id)theWeek toSpecifier:(id)specifier;	// 0x35b92785
- (void)_appendIndexList:(id)list toSpecifier:(id)specifier propertyKey:(unsigned short)key;	// 0x35b928f9
- (void)_clearArrays;	// 0x35b2d33d
- (id)_parseDaysOfWeek:(XXStruct_1STaIB *)week range:(XXStruct_K5nmsA)range;	// 0x35b92a19
- (id)_parseIndexList:(XXStruct_1STaIB *)list range:(XXStruct_K5nmsA)range;	// 0x35b92d2d
- (void)_parseSpecifierIfNeeded;	// 0x35b2d005
- (void)_updateSpecifier;	// 0x35b925d5
// declared property getter: - (id)daysOfTheMonth;	// 0x35b2d7f1
// declared property getter: - (id)daysOfTheWeek;	// 0x35b2cfb9
// declared property getter: - (id)daysOfTheYear;	// 0x35b2d8cd
- (void)dealloc;	// 0x35b92299
// declared property getter: - (BOOL)isDirty;	// 0x35b2ef0d
- (BOOL)isEqual:(id)equal;	// 0x35b92449
// declared property getter: - (id)monthsOfTheYear;	// 0x35b2d639
- (void)revert;	// 0x35b92361
// declared property setter: - (void)setDaysOfTheMonth:(id)theMonth;	// 0x35b2d78d
// declared property setter: - (void)setDaysOfTheWeek:(id)theWeek;	// 0x35b2cf55
// declared property setter: - (void)setDaysOfTheYear:(id)theYear;	// 0x35b2d869
// declared property setter: - (void)setMonthsOfTheYear:(id)theYear;	// 0x35b2d5d5
// declared property getter: - (id)setPositions;	// 0x35b2d47d
// declared property setter: - (void)setSetPositions:(id)positions;	// 0x35b2d419
// declared property setter: - (void)setSpecifier:(id)specifier;	// 0x35b92545
// declared property setter: - (void)setWeeksOfTheYear:(id)theYear;	// 0x35b2d6b1
// declared property getter: - (id)specifier;	// 0x35b924e9
// declared property getter: - (id)weeksOfTheYear;	// 0x35b2d715
@end
