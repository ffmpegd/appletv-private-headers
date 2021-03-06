/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <ProtocolBuffer/PBRequest.h>

@class NSString, GEORPUserCredentials, NSMutableArray;

@interface GEORPProblemStatusRequest : PBRequest {
	NSMutableArray *_problemIDs;	// 4 = 0x4
	NSString *_statusNotificationID;	// 8 = 0x8
	GEORPUserCredentials *_userCredentials;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) BOOL hasStatusNotificationID;	// G=0x30f55649; 
@property(readonly, assign, nonatomic) BOOL hasUserCredentials;	// G=0x30f55631; 
@property(retain, nonatomic) NSMutableArray *problemIDs;	// G=0x30f55e91; S=0x30f55ea1; @synthesize=_problemIDs
@property(retain, nonatomic) NSString *statusNotificationID;	// G=0x30f55e71; S=0x30f55e81; @synthesize=_statusNotificationID
@property(retain, nonatomic) GEORPUserCredentials *userCredentials;	// G=0x30f55e51; S=0x30f55e61; @synthesize=_userCredentials
- (void)addProblemID:(id)anId;	// 0x30f55681
- (void)clearProblemIDs;	// 0x30f55661
- (void)copyTo:(id)to;	// 0x30f55c29
- (void)dealloc;	// 0x30f555c5
- (id)description;	// 0x30f5572d
- (id)dictionaryRepresentation;	// 0x30f5579d
// declared property getter: - (BOOL)hasStatusNotificationID;	// 0x30f55649
// declared property getter: - (BOOL)hasUserCredentials;	// 0x30f55631
- (unsigned)hash;	// 0x30f55df5
- (BOOL)isEqual:(id)equal;	// 0x30f55d25
- (id)problemIDAtIndex:(unsigned)index;	// 0x30f5570d
// declared property getter: - (id)problemIDs;	// 0x30f55e91
- (unsigned)problemIDsCount;	// 0x30f556ed
- (BOOL)readFrom:(id)from;	// 0x30f55aa5
// declared property setter: - (void)setProblemIDs:(id)ids;	// 0x30f55ea1
// declared property setter: - (void)setStatusNotificationID:(id)anId;	// 0x30f55e81
// declared property setter: - (void)setUserCredentials:(id)credentials;	// 0x30f55e61
// declared property getter: - (id)statusNotificationID;	// 0x30f55e71
// declared property getter: - (id)userCredentials;	// 0x30f55e51
- (void)writeTo:(id)to;	// 0x30f55ab1
@end

