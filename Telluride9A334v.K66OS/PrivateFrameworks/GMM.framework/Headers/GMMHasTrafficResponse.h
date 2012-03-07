/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import "GMMOldResponse.h"


__attribute__((visibility("hidden")))
@interface GMMHasTrafficResponse : GMMOldResponse {
	BOOL _hasTraffic;	// 4 = 0x4
}
@property(assign, nonatomic) BOOL hasTraffic;	// G=0x35ba718d; S=0x35ba719d; @synthesize=_hasTraffic
+ (id)responseSubdataFromReader:(id)reader;	// 0x35ba7179
- (id)dictionaryRepresentation;	// 0x35ba7175
// declared property getter: - (BOOL)hasTraffic;	// 0x35ba718d
- (BOOL)readFrom:(id)from;	// 0x35ba710d
// declared property setter: - (void)setHasTraffic:(BOOL)traffic;	// 0x35ba719d
- (void)writeTo:(id)to;	// 0x35ba7161
@end
