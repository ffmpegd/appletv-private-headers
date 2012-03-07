/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface EKRecurrenceHelper : NSObject {
@private
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
@property(copy, nonatomic) NSArray *daysOfTheMonth;	// G=0x331d9881; S=0x331d9819; 
@property(copy, nonatomic) NSArray *daysOfTheWeek;	// G=0x331d9141; S=0x331d90d9; 
@property(copy, nonatomic) NSArray *daysOfTheYear;	// G=0x331d9961; S=0x331d98f9; 
@property(readonly, assign, nonatomic) BOOL isDirty;	// G=0x331dacb5; 
@property(copy, nonatomic) NSArray *monthsOfTheYear;	// G=0x331d96c1; S=0x331d9659; 
@property(copy, nonatomic) NSArray *setPositions;	// G=0x331d95c5; S=0x331d955d; 
@property(copy, nonatomic) NSString *specifier;	// G=0x3322d269; S=0x3322d2c5; 
@property(copy, nonatomic) NSArray *weeksOfTheYear;	// G=0x331d97a1; S=0x331d9739; 
- (id)initWithSpecifier:(id)specifier;	// 0x331d9085
- (void)_appendDaysOfTheWeek:(id)theWeek toSpecifier:(id)specifier;	// 0x3322d521
- (void)_appendIndexList:(id)list toSpecifier:(id)specifier propertyKey:(unsigned short)key;	// 0x3322d67d
- (void)_clearArrays;	// 0x331d9479
- (id)_parseDaysOfWeek:(XXStruct_1STaIB *)week range:(XXStruct_K5nmsA)range;	// 0x3322d789
- (id)_parseIndexList:(XXStruct_1STaIB *)list range:(XXStruct_K5nmsA)range;	// 0x3322da91
- (void)_parseSpecifierIfNeeded;	// 0x331d918d
- (void)_updateSpecifier;	// 0x3322d359
// declared property getter: - (id)daysOfTheMonth;	// 0x331d9881
// declared property getter: - (id)daysOfTheWeek;	// 0x331d9141
// declared property getter: - (id)daysOfTheYear;	// 0x331d9961
- (void)dealloc;	// 0x3322d009
// declared property getter: - (BOOL)isDirty;	// 0x331dacb5
- (BOOL)isEqual:(id)equal;	// 0x3322d1bd
// declared property getter: - (id)monthsOfTheYear;	// 0x331d96c1
- (void)revert;	// 0x3322d0cd
// declared property setter: - (void)setDaysOfTheMonth:(id)theMonth;	// 0x331d9819
// declared property setter: - (void)setDaysOfTheWeek:(id)theWeek;	// 0x331d90d9
// declared property setter: - (void)setDaysOfTheYear:(id)theYear;	// 0x331d98f9
// declared property setter: - (void)setMonthsOfTheYear:(id)theYear;	// 0x331d9659
// declared property getter: - (id)setPositions;	// 0x331d95c5
// declared property setter: - (void)setSetPositions:(id)positions;	// 0x331d955d
// declared property setter: - (void)setSpecifier:(id)specifier;	// 0x3322d2c5
// declared property setter: - (void)setWeeksOfTheYear:(id)theYear;	// 0x331d9739
// declared property getter: - (id)specifier;	// 0x3322d269
// declared property getter: - (id)weeksOfTheYear;	// 0x331d97a1
@end

