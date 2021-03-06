/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class NSDictionary, UIColor, NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedStarRatingElement : ATVFeedElement {
	BOOL _hasUserSetRating;	// 4 = 0x4
	float _ratingPercentage;	// 8 = 0x8
	NSString *_rightLabel;	// 12 = 0xc
	NSDictionary *_styleKeyValues;	// 16 = 0x10
}
@property(assign, nonatomic) BOOL hasUserSetRating;	// G=0x11bae9; S=0x11baf9; @synthesize=_hasUserSetRating
@property(readonly, assign, nonatomic) UIColor *labelColor;	// G=0x11ba51; 
@property(assign, nonatomic) float ratingPercentage;	// G=0x11baa5; S=0x11bab5; @synthesize=_ratingPercentage
@property(copy, nonatomic) NSString *rightLabel;	// G=0x11bac5; S=0x11bad9; @synthesize=_rightLabel
@property(retain, nonatomic) NSDictionary *styleKeyValues;	// G=0x11bb09; S=0x11bb19; @synthesize=_styleKeyValues
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x11b85d
- (void).cxx_destruct;	// 0x11bb41
// declared property getter: - (BOOL)hasUserSetRating;	// 0x11bae9
// declared property getter: - (id)labelColor;	// 0x11ba51
// declared property getter: - (float)ratingPercentage;	// 0x11baa5
// declared property getter: - (id)rightLabel;	// 0x11bac5
// declared property setter: - (void)setHasUserSetRating:(BOOL)rating;	// 0x11baf9
// declared property setter: - (void)setRatingPercentage:(float)percentage;	// 0x11bab5
// declared property setter: - (void)setRightLabel:(id)label;	// 0x11bad9
// declared property setter: - (void)setStyleKeyValues:(id)values;	// 0x11bb19
// declared property getter: - (id)styleKeyValues;	// 0x11bb09
@end

