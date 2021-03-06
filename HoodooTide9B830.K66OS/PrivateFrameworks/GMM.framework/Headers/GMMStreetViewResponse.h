/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class GMMIncomingTile, GMMIncomingThumbnail, GMMNavigationImage, NSString, GMMStreetViewMetadata, GMMIncomingSuperTile;

@interface GMMStreetViewResponse : PBCodable {
	NSString *_panoId;	// 4 = 0x4
	GMMStreetViewMetadata *_metadata;	// 8 = 0x8
	GMMIncomingSuperTile *_incomingSuperTile;	// 12 = 0xc
	GMMIncomingTile *_incomingTile;	// 16 = 0x10
	GMMIncomingThumbnail *_incomingThumbnail;	// 20 = 0x14
	GMMNavigationImage *_navigationImage;	// 24 = 0x18
	NSString *_signature;	// 28 = 0x1c
	BOOL _hasThrottled;	// 32 = 0x20
	BOOL _throttled;	// 33 = 0x21
}
@property(readonly, assign, nonatomic) BOOL hasIncomingSuperTile;	// G=0x31f99cf9; 
@property(readonly, assign, nonatomic) BOOL hasIncomingThumbnail;	// G=0x31f99d29; 
@property(readonly, assign, nonatomic) BOOL hasIncomingTile;	// G=0x31f99d11; 
@property(readonly, assign, nonatomic) BOOL hasMetadata;	// G=0x31f99ce1; 
@property(readonly, assign, nonatomic) BOOL hasNavigationImage;	// G=0x31f99d41; 
@property(readonly, assign, nonatomic) BOOL hasPanoId;	// G=0x31f99cc9; 
@property(readonly, assign, nonatomic) BOOL hasSignature;	// G=0x31f99d59; 
@property(assign, nonatomic) BOOL hasThrottled;	// G=0x31f9a6fd; S=0x31f9a70d; @synthesize=_hasThrottled
@property(retain, nonatomic) GMMIncomingSuperTile *incomingSuperTile;	// G=0x31f9a5f9; S=0x31f9a609; @synthesize=_incomingSuperTile
@property(retain, nonatomic) GMMIncomingThumbnail *incomingThumbnail;	// G=0x31f9a661; S=0x31f9a671; @synthesize=_incomingThumbnail
@property(retain, nonatomic) GMMIncomingTile *incomingTile;	// G=0x31f9a62d; S=0x31f9a63d; @synthesize=_incomingTile
@property(retain, nonatomic) GMMStreetViewMetadata *metadata;	// G=0x31f9a5c5; S=0x31f9a5d5; @synthesize=_metadata
@property(retain, nonatomic) GMMNavigationImage *navigationImage;	// G=0x31f9a695; S=0x31f9a6a5; @synthesize=_navigationImage
@property(retain, nonatomic) NSString *panoId;	// G=0x31f9a591; S=0x31f9a5a1; @synthesize=_panoId
@property(retain, nonatomic) NSString *signature;	// G=0x31f9a6c9; S=0x31f9a6d9; @synthesize=_signature
@property(assign, nonatomic) BOOL throttled;	// G=0x31f99d71; S=0x31f99d95; @synthesize=_throttled
- (void)dealloc;	// 0x31f99c0d
- (id)description;	// 0x31f99db9
- (id)dictionaryRepresentation;	// 0x31f99e29
// declared property getter: - (BOOL)hasIncomingSuperTile;	// 0x31f99cf9
// declared property getter: - (BOOL)hasIncomingThumbnail;	// 0x31f99d29
// declared property getter: - (BOOL)hasIncomingTile;	// 0x31f99d11
// declared property getter: - (BOOL)hasMetadata;	// 0x31f99ce1
// declared property getter: - (BOOL)hasNavigationImage;	// 0x31f99d41
// declared property getter: - (BOOL)hasPanoId;	// 0x31f99cc9
// declared property getter: - (BOOL)hasSignature;	// 0x31f99d59
// declared property getter: - (BOOL)hasThrottled;	// 0x31f9a6fd
// declared property getter: - (id)incomingSuperTile;	// 0x31f9a5f9
// declared property getter: - (id)incomingThumbnail;	// 0x31f9a661
// declared property getter: - (id)incomingTile;	// 0x31f9a62d
// declared property getter: - (id)metadata;	// 0x31f9a5c5
// declared property getter: - (id)navigationImage;	// 0x31f9a695
// declared property getter: - (id)panoId;	// 0x31f9a591
- (BOOL)readFrom:(id)from;	// 0x31f99fdd
// declared property setter: - (void)setHasThrottled:(BOOL)throttled;	// 0x31f9a70d
// declared property setter: - (void)setIncomingSuperTile:(id)tile;	// 0x31f9a609
// declared property setter: - (void)setIncomingThumbnail:(id)thumbnail;	// 0x31f9a671
// declared property setter: - (void)setIncomingTile:(id)tile;	// 0x31f9a63d
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x31f9a5d5
// declared property setter: - (void)setNavigationImage:(id)image;	// 0x31f9a6a5
// declared property setter: - (void)setPanoId:(id)anId;	// 0x31f9a5a1
// declared property setter: - (void)setSignature:(id)signature;	// 0x31f9a6d9
// declared property setter: - (void)setThrottled:(BOOL)throttled;	// 0x31f99d95
// declared property getter: - (id)signature;	// 0x31f9a6c9
// declared property getter: - (BOOL)throttled;	// 0x31f99d71
- (void)writeTo:(id)to;	// 0x31f9a341
@end

