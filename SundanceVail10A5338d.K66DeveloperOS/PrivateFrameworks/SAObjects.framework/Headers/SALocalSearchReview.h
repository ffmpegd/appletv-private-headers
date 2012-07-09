/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class SACalendar, SALocalSearchRating, NSString, SAUIAppPunchOut;

@interface SALocalSearchReview : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString *author;	// G=0x3795a449; S=0x3795a465; 
@property(copy, nonatomic) NSString *comment;	// G=0x3795a4b5; S=0x3795a4d1; 
@property(retain, nonatomic) SACalendar *lastUpdated;	// G=0x3795a521; S=0x3795a575; 
@property(copy, nonatomic) NSString *publication;	// G=0x3795a5b1; S=0x3795a5cd; 
@property(retain, nonatomic) SAUIAppPunchOut *reviewPunchOut;	// G=0x3795a61d; S=0x3795a671; 
@property(retain, nonatomic) SALocalSearchRating *reviewRating;	// G=0x3795a6ad; S=0x3795a701; 
+ (id)review;	// 0x3795a3b9
+ (id)reviewWithDictionary:(id)dictionary context:(id)context;	// 0x3795a3fd
// declared property getter: - (id)author;	// 0x3795a449
// declared property getter: - (id)comment;	// 0x3795a4b5
- (id)encodedClassName;	// 0x3795a3ad
- (id)groupIdentifier;	// 0x3795a39d
// declared property getter: - (id)lastUpdated;	// 0x3795a521
// declared property getter: - (id)publication;	// 0x3795a5b1
// declared property getter: - (id)reviewPunchOut;	// 0x3795a61d
// declared property getter: - (id)reviewRating;	// 0x3795a6ad
// declared property setter: - (void)setAuthor:(id)author;	// 0x3795a465
// declared property setter: - (void)setComment:(id)comment;	// 0x3795a4d1
// declared property setter: - (void)setLastUpdated:(id)updated;	// 0x3795a575
// declared property setter: - (void)setPublication:(id)publication;	// 0x3795a5cd
// declared property setter: - (void)setReviewPunchOut:(id)anOut;	// 0x3795a671
// declared property setter: - (void)setReviewRating:(id)rating;	// 0x3795a701
@end
