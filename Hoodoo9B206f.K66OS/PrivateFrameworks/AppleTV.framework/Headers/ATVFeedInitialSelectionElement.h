/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedElement.h"

@class NSDate;

__attribute__((visibility("hidden")))
@interface ATVFeedInitialSelectionElement : ATVFeedElement {
@private
	int _section;	// 28 = 0x1c
	int _row;	// 32 = 0x20
	NSDate *_relevanceDate;	// 36 = 0x24
}
@property(retain, nonatomic) NSDate *relevanceDate;	// G=0x36798185; S=0x36798195; @synthesize=_relevanceDate
@property(assign, nonatomic) int row;	// G=0x36798165; S=0x36798175; @synthesize=_row
@property(assign, nonatomic) int section;	// G=0x36798145; S=0x36798155; @synthesize=_section
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x36797fa5
- (void)dealloc;	// 0x367980f9
// declared property getter: - (id)relevanceDate;	// 0x36798185
// declared property getter: - (int)row;	// 0x36798165
// declared property getter: - (int)section;	// 0x36798145
// declared property setter: - (void)setRelevanceDate:(id)date;	// 0x36798195
// declared property setter: - (void)setRow:(int)row;	// 0x36798175
// declared property setter: - (void)setSection:(int)section;	// 0x36798155
@end
