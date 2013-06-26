/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class NSString, NSDictionary;

@interface MPStoreOfferContentRating : NSObject <NSCoding> {
	NSDictionary *_dictionary;	// 4 = 0x4
	int _ratingLevel;	// 8 = 0x8
	NSString *_ratingDescription;	// 12 = 0xc
	NSString *_ratingLabel;	// 16 = 0x10
	unsigned _ratingSystem;	// 20 = 0x14
}
@property(readonly, assign, nonatomic, getter=isExplicitContent) BOOL explicitContent;	// G=0x36f925ed; 
@property(readonly, assign, nonatomic) id mediaPropertyContentRatingValue;	// G=0x36f928e5; 
@property(copy, nonatomic) NSString *ratingDescription;	// G=0x36f929bd; S=0x36f929d1; @synthesize=_ratingDescription
@property(copy, nonatomic) NSString *ratingLabel;	// G=0x36f929e1; S=0x36f929f5; @synthesize=_ratingLabel
@property(assign, nonatomic) int ratingLevel;	// G=0x36f9299d; S=0x36f929ad; @synthesize=_ratingLevel
@property(assign, nonatomic) unsigned ratingSystem;	// G=0x36f92a05; S=0x36f92a15; @synthesize=_ratingSystem
@property(readonly, assign, nonatomic, getter=isRestrictedContent) BOOL restrictedContent;	// G=0x36f9261d; 
@property(readonly, assign, nonatomic, getter=isRestrictedPurchase) BOOL restrictedPurchase;	// G=0x36f927f1; 
+ (unsigned)ratingSystemFromString:(id)string;	// 0x36f925a5
- (id)initWithCoder:(id)coder;	// 0x36f9241d
- (id)initWithDictionary:(id)dictionary;	// 0x36f921d1
- (BOOL)_isRatingSystemForApps:(unsigned)apps;	// 0x36f928a1
- (BOOL)_isRatingSystemForMovies:(unsigned)movies;	// 0x36f928b1
- (BOOL)_isRatingSystemForMusic:(unsigned)music;	// 0x36f928c9
- (BOOL)_isRatingSystemForTV:(unsigned)tv;	// 0x36f928d5
- (id)copyWithZone:(NSZone *)zone;	// 0x36f924f5
- (void)dealloc;	// 0x36f9247d
- (void)encodeWithCoder:(id)coder;	// 0x36f923ed
// declared property getter: - (BOOL)isExplicitContent;	// 0x36f925ed
// declared property getter: - (BOOL)isRestrictedContent;	// 0x36f9261d
// declared property getter: - (BOOL)isRestrictedPurchase;	// 0x36f927f1
// declared property getter: - (id)mediaPropertyContentRatingValue;	// 0x36f928e5
// declared property getter: - (id)ratingDescription;	// 0x36f929bd
// declared property getter: - (id)ratingLabel;	// 0x36f929e1
// declared property getter: - (int)ratingLevel;	// 0x36f9299d
// declared property getter: - (unsigned)ratingSystem;	// 0x36f92a05
// declared property setter: - (void)setRatingDescription:(id)description;	// 0x36f929d1
// declared property setter: - (void)setRatingLabel:(id)label;	// 0x36f929f5
// declared property setter: - (void)setRatingLevel:(int)level;	// 0x36f929ad
// declared property setter: - (void)setRatingSystem:(unsigned)system;	// 0x36f92a15
- (id)valueForProperty:(id)property;	// 0x36f92859
@end
