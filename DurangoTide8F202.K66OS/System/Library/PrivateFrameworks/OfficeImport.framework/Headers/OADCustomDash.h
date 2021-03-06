/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADDash.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OADCustomDash : OADDash {
@private
	NSMutableArray *mStops;	// 12 = 0xc
	unsigned mAreStopsOverridden : 1;	// 16 = 0x10
}
@property(retain) id stops;	// G=0x31ab71a9; S=0x319f81a1; converted property
+ (id)defaultProperties;	// 0x319f811d
- (id)initWithDefaults;	// 0x319f8161
- (void)addStopWithDash:(float)dash space:(float)space;	// 0x319f8205
- (BOOL)areStopsOverridden;	// 0x31ab7171
- (id)copyWithZone:(NSZone *)zone;	// 0x31ab71d5
- (float)dashAtIndex:(unsigned)index;	// 0x319f8325
- (void)dealloc;	// 0x3198983d
- (unsigned)hash;	// 0x31ab7139
- (BOOL)isEqual:(id)equal;	// 0x31ab7081
// converted property setter: - (void)setStops:(id)stops;	// 0x319f81a1
- (float)spaceAtIndex:(unsigned)index;	// 0x319f8365
- (unsigned)stopCount;	// 0x319f8305
// converted property getter: - (id)stops;	// 0x31ab71a9
@end

