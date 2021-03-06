/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <ProtocolBuffer/PBCodable.h>

@class NSString, GEOUser;

@interface GEOReview : PBCodable {
	double _reviewTime;	// 4 = 0x4
	double _score;	// 12 = 0xc
	GEOUser *_reviewer;	// 20 = 0x14
	NSString *_snippet;	// 24 = 0x18
	NSString *_uid;	// 28 = 0x1c
	XXStruct_zn8ILA _has;	// 32 = 0x20
}
@property(assign, nonatomic) BOOL hasReviewTime;	// G=0x30f12189; S=0x30f1216d; 
@property(readonly, assign, nonatomic) BOOL hasReviewer;	// G=0x30f1219d; 
@property(assign, nonatomic) BOOL hasScore;	// G=0x30f12121; S=0x30f12101; 
@property(readonly, assign, nonatomic) BOOL hasSnippet;	// G=0x30f120b5; 
@property(readonly, assign, nonatomic) BOOL hasUid;	// G=0x30f121b5; 
@property(assign, nonatomic) double reviewTime;	// G=0x30f12cc9; S=0x30f12139; @synthesize=_reviewTime
@property(retain, nonatomic) GEOUser *reviewer;	// G=0x30f12ce1; S=0x30f12cf1; @synthesize=_reviewer
@property(assign, nonatomic) double score;	// G=0x30f12cb1; S=0x30f120cd; @synthesize=_score
@property(retain, nonatomic) NSString *snippet;	// G=0x30f12c91; S=0x30f12ca1; @synthesize=_snippet
@property(retain, nonatomic) NSString *uid;	// G=0x30f12d01; S=0x30f12d11; @synthesize=_uid
- (void)copyTo:(id)to;	// 0x30f12861
- (void)dealloc;	// 0x30f12049
- (id)description;	// 0x30f121cd
- (id)dictionaryRepresentation;	// 0x30f1223d
// declared property getter: - (BOOL)hasReviewTime;	// 0x30f12189
// declared property getter: - (BOOL)hasReviewer;	// 0x30f1219d
// declared property getter: - (BOOL)hasScore;	// 0x30f12121
// declared property getter: - (BOOL)hasSnippet;	// 0x30f120b5
// declared property getter: - (BOOL)hasUid;	// 0x30f121b5
- (unsigned)hash;	// 0x30f12b09
- (BOOL)isEqual:(id)equal;	// 0x30f129a9
- (BOOL)readFrom:(id)from;	// 0x30f126e9
// declared property getter: - (double)reviewTime;	// 0x30f12cc9
// declared property getter: - (id)reviewer;	// 0x30f12ce1
// declared property getter: - (double)score;	// 0x30f12cb1
// declared property setter: - (void)setHasReviewTime:(BOOL)time;	// 0x30f1216d
// declared property setter: - (void)setHasScore:(BOOL)score;	// 0x30f12101
// declared property setter: - (void)setReviewTime:(double)time;	// 0x30f12139
// declared property setter: - (void)setReviewer:(id)reviewer;	// 0x30f12cf1
// declared property setter: - (void)setScore:(double)score;	// 0x30f120cd
// declared property setter: - (void)setSnippet:(id)snippet;	// 0x30f12ca1
// declared property setter: - (void)setUid:(id)uid;	// 0x30f12d11
// declared property getter: - (id)snippet;	// 0x30f12c91
// declared property getter: - (id)uid;	// 0x30f12d01
- (void)writeTo:(id)to;	// 0x30f126f5
@end

