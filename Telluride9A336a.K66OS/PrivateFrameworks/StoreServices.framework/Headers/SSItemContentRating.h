/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSXPCCoding.h"
#import "StoreServices-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSString, NSDictionary, NSMutableDictionary, SSItemArtworkImage;

@interface SSItemContentRating : NSObject <SSXPCCoding, NSCopying> {
@private
	NSMutableDictionary *_dictionary;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSDictionary *contentRatingDictionary;	// G=0x34208265; 
@property(readonly, assign, nonatomic, getter=isExplicitContent) BOOL explicitContent;	// G=0x34207cf5; 
@property(assign, nonatomic) int rank;	// G=0x34207e29; S=0x34208035; 
@property(copy, nonatomic) NSString *ratingDescription;	// G=0x34207e8d; S=0x34208079; 
@property(copy, nonatomic) NSString *ratingLabel;	// G=0x34207f1d; S=0x34208095; 
@property(assign, nonatomic) int ratingSystem;	// G=0x34207fad; S=0x342080b1; 
@property(readonly, assign, nonatomic) SSItemArtworkImage *ratingSystemLogo;	// G=0x3420829d; 
@property(readonly, assign, nonatomic, getter=isRestricted) BOOL restricted;	// G=0x34207d35; 
@property(assign, nonatomic) BOOL shouldHideWhenRestricted;	// G=0x34208145; S=0x34208101; 
+ (int)ratingSystemFromString:(id)string;	// 0x342081f5
+ (id)stringForRatingSystem:(int)ratingSystem;	// 0x3420823d
- (id)init;	// 0x34207b8d
- (id)initWithDictionary:(id)dictionary;	// 0x34207bf1
- (id)initWithXPCEncoding:(void *)xpcencoding;	// 0x342083a5
- (BOOL)_isRatingSystemForApps:(int)apps;	// 0x34208415
- (BOOL)_isRatingSystemForMovies:(int)movies;	// 0x34208425
- (BOOL)_isRatingSystemForMusic:(int)music;	// 0x3420843d
- (BOOL)_isRatingSystemForTV:(int)tv;	// 0x34208449
- (void)_setValue:(id)value forProperty:(id)property;	// 0x342084a1
- (void)_setValueCopy:(id)copy forProperty:(id)property;	// 0x34208459
// declared property getter: - (id)contentRatingDictionary;	// 0x34208265
- (id)copyWithZone:(NSZone *)zone;	// 0x34207c91
- (void *)copyXPCEncoding;	// 0x34208371
- (void)dealloc;	// 0x34207c45
// declared property getter: - (BOOL)isExplicitContent;	// 0x34207cf5
// declared property getter: - (BOOL)isRestricted;	// 0x34207d35
// declared property getter: - (int)rank;	// 0x34207e29
// declared property getter: - (id)ratingDescription;	// 0x34207e8d
// declared property getter: - (id)ratingLabel;	// 0x34207f1d
// declared property getter: - (int)ratingSystem;	// 0x34207fad
// declared property getter: - (id)ratingSystemLogo;	// 0x3420829d
// declared property setter: - (void)setRank:(int)rank;	// 0x34208035
// declared property setter: - (void)setRatingDescription:(id)description;	// 0x34208079
// declared property setter: - (void)setRatingLabel:(id)label;	// 0x34208095
// declared property setter: - (void)setRatingSystem:(int)system;	// 0x342080b1
// declared property setter: - (void)setShouldHideWhenRestricted:(BOOL)hideWhenRestricted;	// 0x34208101
// declared property getter: - (BOOL)shouldHideWhenRestricted;	// 0x34208145
- (id)valueForProperty:(id)property;	// 0x342081ad
@end

