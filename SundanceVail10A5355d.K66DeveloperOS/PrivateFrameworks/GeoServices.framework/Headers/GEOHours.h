/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <PBCodable.h> // Unknown library

@class NSMutableArray;

@interface GEOHours : PBCodable {
	XXStruct_WmZAAA _days;	// 4 = 0x4
	NSMutableArray *_timeRanges;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) int *days;	// G=0x3459ef35; 
@property(readonly, assign, nonatomic) unsigned daysCount;	// G=0x3459ef21; 
@property(retain, nonatomic) NSMutableArray *timeRanges;	// G=0x3459f999; S=0x3459f9a9; @synthesize=_timeRanges
- (void)addDay:(int)day;	// 0x3459ef59
- (void)addTimeRange:(id)range;	// 0x3459f049
- (void)clearDays;	// 0x3459ef45
- (void)clearTimeRanges;	// 0x3459f029
- (void)copyTo:(id)to;	// 0x3459f7e1
- (int)dayAtIndex:(unsigned)index;	// 0x3459ef6d
// declared property getter: - (int *)days;	// 0x3459ef35
// declared property getter: - (unsigned)daysCount;	// 0x3459ef21
- (void)dealloc;	// 0x3459eecd
- (id)description;	// 0x3459f0f5
- (id)dictionaryRepresentation;	// 0x3459f165
- (unsigned)hash;	// 0x3459f95d
- (BOOL)isEqual:(id)equal;	// 0x3459f8cd
- (BOOL)readFrom:(id)from;	// 0x3459f649
- (void)setDays:(int *)days count:(unsigned)count;	// 0x3459f011
// declared property setter: - (void)setTimeRanges:(id)ranges;	// 0x3459f9a9
- (id)timeRangeAtIndex:(unsigned)index;	// 0x3459f0d5
// declared property getter: - (id)timeRanges;	// 0x3459f999
- (unsigned)timeRangesCount;	// 0x3459f0b5
- (void)writeTo:(id)to;	// 0x3459f655
@end
