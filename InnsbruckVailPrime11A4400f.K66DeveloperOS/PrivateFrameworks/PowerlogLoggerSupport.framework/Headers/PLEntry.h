/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PowerlogLoggerSupport.framework/PowerlogLoggerSupport
 */

#import </libobjc.A.h>

@class NSMutableArray, PLTimeSnapshot, NSMutableDictionary, NSDate, NSString;

@interface PLEntry : NSObject {
	NSMutableDictionary *_dictionary;	// 4 = 0x4
	NSMutableArray *_keys;	// 8 = 0x8
	NSMutableArray *_values;	// 12 = 0xc
	NSMutableArray *_nonPrintingKeys;	// 16 = 0x10
	PLTimeSnapshot *_timeSnapshot;	// 20 = 0x14
	NSDate *_entryDate;	// 24 = 0x18
	NSString *_entryKey;	// 28 = 0x1c
}
@property(retain) NSMutableDictionary *dictionary;	// G=0x32444731; S=0x32444745; @synthesize=_dictionary
@property(retain, nonatomic) NSDate *entryDate;	// G=0x324447e5; S=0x324447f5; @synthesize=_entryDate
@property(retain, nonatomic) NSString *entryKey;	// G=0x32444805; S=0x32444815; @synthesize=_entryKey
@property(retain) NSMutableArray *keys;	// G=0x32444755; S=0x32444769; @synthesize=_keys
@property(retain) NSMutableArray *nonPrintingKeys;	// G=0x3244479d; S=0x324447b1; @synthesize=_nonPrintingKeys
@property(retain) PLTimeSnapshot *timeSnapshot;	// G=0x324447c1; S=0x324447d5; @synthesize=_timeSnapshot
@property(retain, getter=allValues) NSMutableArray *values;	// G=0x32444779; S=0x3244478d; @synthesize=_values
- (id)init;	// 0x3244338d
- (id)initEntryWithKey:(id)key;	// 0x3244352d
- (id)initEntryWithKey:(id)key withDate:(id)date;	// 0x32443561
- (void)addEntriesFromDictionary:(id)dictionary withKeyOrder:(id)keyOrder;	// 0x32443c41
// declared property getter: - (id)allValues;	// 0x32444779
- (int)compare:(id)compare;	// 0x32443fe5
- (int)compare:(id)compare options:(short)options;	// 0x32443ff9
- (void)dealloc;	// 0x32443595
- (id)description;	// 0x32444489
// declared property getter: - (id)dictionary;	// 0x32444731
// declared property getter: - (id)entryDate;	// 0x324447e5
// declared property getter: - (id)entryKey;	// 0x32444805
- (unsigned)indexForKey:(id)key;	// 0x32443f85
// declared property getter: - (id)keys;	// 0x32444755
// declared property getter: - (id)nonPrintingKeys;	// 0x3244479d
- (id)objectForKey:(id)key;	// 0x32443efd
- (id)objectForKeyedSubscript:(id)keyedSubscript;	// 0x32443f75
- (void)removeObjectForKey:(id)key;	// 0x32443dad
// declared property setter: - (void)setDictionary:(id)dictionary;	// 0x32444745
// declared property setter: - (void)setEntryDate:(id)date;	// 0x324447f5
// declared property setter: - (void)setEntryKey:(id)key;	// 0x32444815
- (void)setKeyNonPrinting:(id)printing;	// 0x324438f9
// declared property setter: - (void)setKeys:(id)keys;	// 0x32444769
- (void)setKeysNonPrinting:(id)printing;	// 0x32443925
- (void)setKeysOrder:(id)order;	// 0x32443651
// declared property setter: - (void)setNonPrintingKeys:(id)keys;	// 0x324447b1
- (void)setObject:(id)object forKey:(id)key;	// 0x32443c0d
- (void)setObject:(id)object forKey:(id)key atIndex:(unsigned)index;	// 0x32443951
- (void)setObject:(id)object forKeyedSubscript:(id)keyedSubscript;	// 0x32443c31
// declared property setter: - (void)setTimeSnapshot:(id)snapshot;	// 0x324447d5
// declared property setter: - (void)setValues:(id)values;	// 0x3244478d
- (void)sortByValue:(int)value;	// 0x32444351
// declared property getter: - (id)timeSnapshot;	// 0x324447c1
@end

