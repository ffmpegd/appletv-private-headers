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
@property(readonly, assign, nonatomic) BOOL hasSnippet;	// G=0x31f9f305; 
@property(assign, nonatomic) BOOL hasStarRatingAverageE3;	// G=0x31f9f741; S=0x31f9f751; @synthesize=_hasStarRatingAverageE3
@property(assign, nonatomic) BOOL hasTotalReviews;	// G=0x31f9f771; S=0x31f9f781; @synthesize=_hasTotalReviews
@property(readonly, assign, nonatomic) int *numReviewsStarRating1To5s;	// G=0x31f9f211; 
@property(readonly, assign, nonatomic) unsigned numReviewsStarRating1To5sCount;	// G=0x31f9f1fd; 
@property(retain, nonatomic) NSString *snippet;	// G=0x31f9f7a1; S=0x31f9f7b1; @synthesize=_snippet
@property(assign, nonatomic) int starRatingAverageE3;	// G=0x31f9f761; S=0x31f9f1b5; @synthesize=_starRatingAverageE3
@property(assign, nonatomic) int totalReviews;	// G=0x31f9f791; S=0x31f9f1d9; @synthesize=_totalReviews
- (void)addNumReviewsStarRating1To5:(int)a5;	// 0x31f9f235
- (void)clearNumReviewsStarRating1To5s;	// 0x31f9f221
- (void)dealloc;	// 0x31f9f161
- (id)description;	// 0x31f9f31d
- (id)dictionaryRepresentation;	// 0x31f9f38d
// declared property getter: - (BOOL)hasSnippet;	// 0x31f9f305
// declared property getter: - (BOOL)hasStarRatingAverageE3;	// 0x31f9f741
// declared property getter: - (BOOL)hasTotalReviews;	// 0x31f9f771
- (int)numReviewsStarRating1To5AtIndex:(unsigned)index;	// 0x31f9f249
// declared property getter: - (int *)numReviewsStarRating1To5s;	// 0x31f9f211
// declared property getter: - (unsigned)numReviewsStarRating1To5sCount;	// 0x31f9f1fd
- (BOOL)readFrom:(id)from;	// 0x31f9f4b9
// declared property setter: - (void)setHasStarRatingAverageE3:(BOOL)a3;	// 0x31f9f751
// declared property setter: - (void)setHasTotalReviews:(BOOL)reviews;	// 0x31f9f781
- (void)setNumReviewsStarRating1To5s:(int *)a5s count:(unsigned)count;	// 0x31f9f2ed
// declared property setter: - (void)setSnippet:(id)snippet;	// 0x31f9f7b1
// declared property setter: - (void)setStarRatingAverageE3:(int)a3;	// 0x31f9f1b5
// declared property setter: - (void)setTotalReviews:(int)reviews;	// 0x31f9f1d9
// declared property getter: - (id)snippet;	// 0x31f9f7a1
// declared property getter: - (int)starRatingAverageE3;	// 0x31f9f761
// declared property getter: - (int)totalReviews;	// 0x31f9f791
- (void)writeTo:(id)to;	// 0x31f9f665
@end

