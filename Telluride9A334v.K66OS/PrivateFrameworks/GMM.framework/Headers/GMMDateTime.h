/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library


@interface GMMDateTime : PBCodable {
	long long _secsSinceEpoch;	// 4 = 0x4
	BOOL _hasTimeZoneOffsetMin;	// 12 = 0xc
	int _timeZoneOffsetMin;	// 16 = 0x10
}
@property(assign, nonatomic) BOOL hasTimeZoneOffsetMin;	// G=0x35b82d7d; S=0x35b82d8d; @synthesize=_hasTimeZoneOffsetMin
@property(assign, nonatomic) long long secsSinceEpoch;	// G=0x35b82d51; S=0x35b82d69; @synthesize=_secsSinceEpoch
@property(assign, nonatomic) int timeZoneOffsetMin;	// G=0x35b82d9d; S=0x35b82a89; @synthesize=_timeZoneOffsetMin
- (void)dealloc;	// 0x35b82a5d
- (id)description;	// 0x35b82aad
- (id)description;	// 0x35b7a835
- (id)dictionaryRepresentation;	// 0x35b82b1d
// declared property getter: - (BOOL)hasTimeZoneOffsetMin;	// 0x35b82d7d
- (BOOL)readFrom:(id)from;	// 0x35b82be1
// declared property getter: - (long long)secsSinceEpoch;	// 0x35b82d51
// declared property setter: - (void)setHasTimeZoneOffsetMin:(BOOL)min;	// 0x35b82d8d
// declared property setter: - (void)setSecsSinceEpoch:(long long)epoch;	// 0x35b82d69
// declared property setter: - (void)setTimeZoneOffsetMin:(int)min;	// 0x35b82a89
// declared property getter: - (int)timeZoneOffsetMin;	// 0x35b82d9d
- (void)writeTo:(id)to;	// 0x35b82ce9
@end

