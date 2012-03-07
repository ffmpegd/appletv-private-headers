/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import "GMM-Structs.h"
#import <PBCodable.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface GMMRating : PBCodable {
	BOOL _hasStarRatingAverageE3;	// 4 = 0x4
	int _starRatingAverageE3;	// 8 = 0x8
	BOOL _hasTotalReviews;	// 12 = 0xc
	int _totalReviews;	// 16 = 0x10
	XXStruct_WmZAAA _numReviewsStarRating1To5s;	// 20 = 0x14
	NSString *_snippet;	// 32 = 0x20
}
@property(readonly, assign, nonatomic) BOOL hasSnippet;	// G=0x31584315; 
@property(assign, nonatomic) BOOL hasStarRatingAverageE3;	// G=0x31584751; S=0x31584761; @synthesize=_hasStarRatingAverageE3
@property(assign, nonatomic) BOOL hasTotalReviews;	// G=0x31584781; S=0x31584791; @synthesize=_hasTotalReviews
@property(readonly, assign, nonatomic) int *numReviewsStarRating1To5s;	// G=0x31584221; 
@property(readonly, assign, nonatomic) unsigned numReviewsStarRating1To5sCount;	// G=0x3158420d; 
@property(retain, nonatomic) NSString *snippet;	// G=0x315847b1; S=0x315847c1; @synthesize=_snippet
@property(assign, nonatomic) int starRatingAverageE3;	// G=0x31584771; S=0x315841c5; @synthesize=_starRatingAverageE3
@property(assign, nonatomic) int totalReviews;	// G=0x315847a1; S=0x315841e9; @synthesize=_totalReviews
- (void)addNumReviewsStarRating1To5:(int)a5;	// 0x31584245
- (void)clearNumReviewsStarRating1To5s;	// 0x31584231
- (void)dealloc;	// 0x31584171
- (id)description;	// 0x3158432d
- (id)dictionaryRepresentation;	// 0x3158439d
// declared property getter: - (BOOL)hasSnippet;	// 0x31584315
// declared property getter: - (BOOL)hasStarRatingAverageE3;	// 0x31584751
// declared property getter: - (BOOL)hasTotalReviews;	// 0x31584781
- (int)numReviewsStarRating1To5AtIndex:(unsigned)index;	// 0x31584259
// declared property getter: - (int *)numReviewsStarRating1To5s;	// 0x31584221
// declared property getter: - (unsigned)numReviewsStarRating1To5sCount;	// 0x3158420d
- (BOOL)readFrom:(id)from;	// 0x315844c9
// declared property setter: - (void)setHasStarRatingAverageE3:(BOOL)a3;	// 0x31584761
// declared property setter: - (void)setHasTotalReviews:(BOOL)reviews;	// 0x31584791
- (void)setNumReviewsStarRating1To5s:(int *)a5s count:(unsigned)count;	// 0x315842fd
// declared property setter: - (void)setSnippet:(id)snippet;	// 0x315847c1
// declared property setter: - (void)setStarRatingAverageE3:(int)a3;	// 0x315841c5
// declared property setter: - (void)setTotalReviews:(int)reviews;	// 0x315841e9
// declared property getter: - (id)snippet;	// 0x315847b1
// declared property getter: - (int)starRatingAverageE3;	// 0x31584771
// declared property getter: - (int)totalReviews;	// 0x315847a1
- (void)writeTo:(id)to;	// 0x31584675
@end
