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
@property(assign, nonatomic) BOOL hasTraffic;	// G=0x30b8218d; S=0x30b8219d; @synthesize=_hasTraffic
+ (id)responseSubdataFromReader:(id)reader;	// 0x30b82179
- (id)dictionaryRepresentation;	// 0x30b82175
// declared property getter: - (BOOL)hasTraffic;	// 0x30b8218d
- (BOOL)readFrom:(id)from;	// 0x30b8210d
// declared property setter: - (void)setHasTraffic:(BOOL)traffic;	// 0x30b8219d
- (void)writeTo:(id)to;	// 0x30b82161
@end

