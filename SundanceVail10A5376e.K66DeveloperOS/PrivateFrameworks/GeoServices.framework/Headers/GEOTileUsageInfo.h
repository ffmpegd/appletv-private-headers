/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library
#import "GeoServices-Structs.h"

@class NSMapTable;

@interface GEOTileUsageInfo : NSObject {
	double _startTime;	// 4 = 0x4
	double _endTime;	// 12 = 0xc
	NSMapTable *_tileStyleToCount;	// 20 = 0x14
	unsigned _dataLength;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) unsigned dataLength;	// G=0x37a03cb9; @synthesize=_dataLength
@property(assign, nonatomic) double endTime;	// G=0x37a03c85; S=0x379e35a5; @synthesize=_endTime
@property(assign, nonatomic) double startTime;	// G=0x37a03ca1; S=0x379e0959; @synthesize=_startTime
@property(readonly, assign, nonatomic) NSMapTable *tileStyleToCount;	// G=0x379e3999; @synthesize=_tileStyleToCount
- (void)addTileKey:(const GEOTileKey *)key dataLength:(unsigned)length;	// 0x379f5f39
// declared property getter: - (unsigned)dataLength;	// 0x37a03cb9
- (void)dealloc;	// 0x379e3bb5
// declared property getter: - (double)endTime;	// 0x37a03c85
// declared property setter: - (void)setEndTime:(double)time;	// 0x379e35a5
// declared property setter: - (void)setStartTime:(double)time;	// 0x379e0959
// declared property getter: - (double)startTime;	// 0x37a03ca1
// declared property getter: - (id)tileStyleToCount;	// 0x379e3999
@end

