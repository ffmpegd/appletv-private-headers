/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class NSMutableSet;

@interface CoreDAVMkcolResponseItem : CoreDAVItem {
	NSMutableSet *_propStats;	// 24 = 0x18
}
@property(retain) NSMutableSet *propStats;	// G=0x310019ed; S=0x31001a01; @synthesize=_propStats
- (id)init;	// 0x3100163d
- (void)addPropStat:(id)stat;	// 0x31001875
- (id)copyParseRules;	// 0x31001779
- (void)dealloc;	// 0x31001669
- (id)description;	// 0x310016b5
- (BOOL)hasPropertyError;	// 0x31001911
// declared property getter: - (id)propStats;	// 0x310019ed
// declared property setter: - (void)setPropStats:(id)stats;	// 0x31001a01
@end

