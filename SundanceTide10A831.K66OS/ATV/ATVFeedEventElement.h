/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class NSDate, ATVFeedImageElement, NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedEventElement : ATVFeedElement {
	NSString *_title;	// 4 = 0x4
	NSString *_description;	// 8 = 0x8
	ATVFeedImageElement *_image;	// 12 = 0xc
	NSDate *_startDate;	// 16 = 0x10
	NSDate *_endDate;	// 20 = 0x14
}
@property(copy, nonatomic) NSString *description;	// G=0x15e23d; S=0x15e251; @synthesize=_description
@property(retain, nonatomic) NSDate *endDate;	// G=0x15e2a1; S=0x15e2b1; @synthesize=_endDate
@property(retain, nonatomic) ATVFeedImageElement *image;	// G=0x15e261; S=0x15e271; @synthesize=_image
@property(retain, nonatomic) NSDate *startDate;	// G=0x15e281; S=0x15e291; @synthesize=_startDate
@property(copy, nonatomic) NSString *title;	// G=0x15e219; S=0x15e22d; @synthesize=_title
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x15dfa1
- (void)dealloc;	// 0x15e179
// declared property getter: - (id)description;	// 0x15e23d
// declared property getter: - (id)endDate;	// 0x15e2a1
// declared property getter: - (id)image;	// 0x15e261
// declared property setter: - (void)setDescription:(id)description;	// 0x15e251
// declared property setter: - (void)setEndDate:(id)date;	// 0x15e2b1
// declared property setter: - (void)setImage:(id)image;	// 0x15e271
// declared property setter: - (void)setStartDate:(id)date;	// 0x15e291
// declared property setter: - (void)setTitle:(id)title;	// 0x15e22d
// declared property getter: - (id)startDate;	// 0x15e281
// declared property getter: - (id)title;	// 0x15e219
@end
