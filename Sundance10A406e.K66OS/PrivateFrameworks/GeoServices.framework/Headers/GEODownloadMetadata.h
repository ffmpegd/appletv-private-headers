/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSString;

@interface GEODownloadMetadata : PBCodable {
	double _timestamp;	// 4 = 0x4
	NSString *_etag;	// 12 = 0xc
}
@property(retain, nonatomic) NSString *etag;	// G=0x37983985; S=0x37983995; @synthesize=_etag
@property(readonly, assign, nonatomic) BOOL hasEtag;	// G=0x37983415; 
@property(assign, nonatomic) double timestamp;	// G=0x37983959; S=0x37983971; @synthesize=_timestamp
- (void)copyTo:(id)to;	// 0x37983795
- (void)dealloc;	// 0x379833d1
- (id)description;	// 0x3798342d
- (id)dictionaryRepresentation;	// 0x3798349d
// declared property getter: - (id)etag;	// 0x37983985
// declared property getter: - (BOOL)hasEtag;	// 0x37983415
- (unsigned)hash;	// 0x379838a1
- (BOOL)isEqual:(id)equal;	// 0x37983809
- (BOOL)readFrom:(id)from;	// 0x37983721
// declared property setter: - (void)setEtag:(id)etag;	// 0x37983995
// declared property setter: - (void)setTimestamp:(double)timestamp;	// 0x37983971
// declared property getter: - (double)timestamp;	// 0x37983959
- (void)writeTo:(id)to;	// 0x3798372d
@end

