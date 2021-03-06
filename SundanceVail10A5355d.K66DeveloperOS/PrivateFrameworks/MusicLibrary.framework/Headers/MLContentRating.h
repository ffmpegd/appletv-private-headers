/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSNumber, NSString;

@interface MLContentRating : NSObject <NSCopying> {
	NSMutableDictionary *_dictionary;	// 4 = 0x4
}
@property(copy, nonatomic) NSString *ratingDescription;	// G=0x3549373d; S=0x354937dd; 
@property(copy, nonatomic) NSString *ratingLabel;	// G=0x35493765; S=0x354937f9; 
@property(retain, nonatomic) NSNumber *ratingRank;	// G=0x3549378d; S=0x35493815; 
@property(copy, nonatomic) NSString *ratingSystem;	// G=0x354937b5; S=0x35493831; 
- (id)init;	// 0x35493631
- (id)initWithContentRatingDictionary:(id)contentRatingDictionary;	// 0x35493659
- (id)initWithStringRepresentation:(id)stringRepresentation;	// 0x3549384d
- (void).cxx_destruct;	// 0x35493c39
- (void)_setValue:(id)value forKey:(id)key;	// 0x35493bb1
- (void)_setValueCopy:(id)copy forKey:(id)key;	// 0x35493be5
- (id)copyStringRepresentation;	// 0x35493a45
- (id)copyWithZone:(NSZone *)zone;	// 0x354936f1
// declared property getter: - (id)ratingDescription;	// 0x3549373d
// declared property getter: - (id)ratingLabel;	// 0x35493765
// declared property getter: - (id)ratingRank;	// 0x3549378d
// declared property getter: - (id)ratingSystem;	// 0x354937b5
// declared property setter: - (void)setRatingDescription:(id)description;	// 0x354937dd
// declared property setter: - (void)setRatingLabel:(id)label;	// 0x354937f9
// declared property setter: - (void)setRatingRank:(id)rank;	// 0x35493815
// declared property setter: - (void)setRatingSystem:(id)system;	// 0x35493831
@end

